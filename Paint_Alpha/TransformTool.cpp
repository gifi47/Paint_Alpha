#include "TransformTool.h"
#include "Paint.h"

System::Void TransformTool::PasteImage(System::Drawing::Image^ image)
{
    ::Paint::IsSelectionActive = false;
    ::Paint::selectionRegion = gcnew System::Drawing::Region(System::Drawing::Rectangle(0, 0, image->Width, image->Height));
    ::Paint::IsSelectionActive = true;
    selectionBitmap = gcnew System::Drawing::Bitmap(image);
    isActive = true;
}

System::Void TransformTool::ApplyTransformation()
{
    if (isActive) {
        isDragging = false;
        isActive = false;
        System::Drawing::Rectangle bounds =
            System::Drawing::Rectangle::Truncate(::Paint::selectionRegion->GetBounds(
                System::Drawing::Graphics::FromImage(::Paint::layersController->ActiveLayer->bitmap)));
        System::Drawing::Graphics^ g = System::Drawing::Graphics::FromImage(::Paint::layersController->ActiveLayer->bitmap);

        g->SetClip(::Paint::selectionRegion, System::Drawing::Drawing2D::CombineMode::Intersect);
        g->CompositingMode = System::Drawing::Drawing2D::CompositingMode::SourceCopy;
        g->DrawImage(selectionBitmap, bounds.Left, bounds.Top);
        delete g;
        delete selectionBitmap;
    }
}

/// <summary>
/// Эта функция должна возвращать перемещаемый фрагмент на исходную позицию, но она пока этого не делает)
/// </summary>
/// <param name="g">Объект System::Drawing::Graphics</param>
/// <returns></returns>
System::Void TransformTool::CancelTransformation()
{
    if (isActive) {
        isDragging = false;
        isActive = false;
        System::Drawing::Rectangle bounds =
            System::Drawing::Rectangle::Truncate(::Paint::selectionRegion->GetBounds(
                System::Drawing::Graphics::FromImage(::Paint::layersController->ActiveLayer->bitmap)));
        System::Drawing::Graphics^ g = System::Drawing::Graphics::FromImage(::Paint::layersController->ActiveLayer->bitmap);

        g->SetClip(::Paint::selectionRegion, System::Drawing::Drawing2D::CombineMode::Intersect);
        g->CompositingMode = System::Drawing::Drawing2D::CompositingMode::SourceCopy;
        g->DrawImage(selectionBitmap, bounds.Left, bounds.Top);
        delete g;
        delete selectionBitmap;
    }
}

System::Void TransformTool::Delete()
{
    if (isActive) {
        isDragging = false;
        isActive = false;
        delete selectionBitmap;
    }
}

System::Void TransformTool::Translate(int x, int y)
{
    if (isActive)
        ::Paint::selectionRegion->Translate(x, y);
}

System::Void TransformTool::DrawPreview(System::Drawing::Graphics^ g)
{
    if (isActive) {
        System::Drawing::Rectangle bounds =
            System::Drawing::Rectangle::Truncate(::Paint::selectionRegion->GetBounds(
                System::Drawing::Graphics::FromImage(::Paint::layersController->ActiveLayer->bitmap)));

        auto state = g->Save();
        g->SetClip(::Paint::selectionRegion, System::Drawing::Drawing2D::CombineMode::Intersect);
        //g->CompositingMode = System::Drawing::Drawing2D::CompositingMode::SourceCopy;
        g->DrawImage(selectionBitmap, bounds.Left, bounds.Top, selectionBitmap->Width, selectionBitmap->Height);
        g->Restore(state);
    }
}

System::Void TransformTool::OnMouseDown(System::Windows::Forms::MouseEventArgs^ e)
{
    if (::Paint::IsSelectionActive && ::Paint::selectionRegion->IsVisible(e->Location))
    {
        isDragging = true;
        lastMousePosition = e->Location;
        if (!isActive) {
            isActive = true;
            System::Drawing::Rectangle bounds =
                System::Drawing::Rectangle::Truncate(::Paint::selectionRegion->GetBounds(
                    System::Drawing::Graphics::FromImage(::Paint::layersController->ActiveLayer->bitmap)));

            selectionBitmap = gcnew System::Drawing::Bitmap(bounds.Width, bounds.Height);

            System::Drawing::Graphics^ g = System::Drawing::Graphics::FromImage(selectionBitmap);
            g->DrawImage(::Paint::layersController->ActiveLayer->bitmap, -bounds.X, -bounds.Y);
            delete g;

            g = System::Drawing::Graphics::FromImage(::Paint::layersController->ActiveLayer->bitmap);
            g->CompositingMode = System::Drawing::Drawing2D::CompositingMode::SourceCopy;
            g->FillRegion(gcnew System::Drawing::SolidBrush(System::Drawing::Color::Transparent), ::Paint::selectionRegion);
            delete g;
        }
    }
}

System::Void TransformTool::OnMouseUp(System::Windows::Forms::MouseEventArgs^ e)
{
    if (isDragging) {
        isDragging = false;
    }
}

System::Drawing::Rectangle TransformTool::OnMouseMove(System::Windows::Forms::MouseEventArgs^ e)
{
    if (isDragging) {
        int translationX = e->Location.X - lastMousePosition.X;
        int translationY = e->Location.Y - lastMousePosition.Y;
        ::Paint::selectionRegion->Translate(translationX, translationY);
        lastMousePosition = e->Location;
    }
    return System::Drawing::Rectangle();
}
