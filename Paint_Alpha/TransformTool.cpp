#include "TransformTool.h"
#include "Paint.h"

System::Void TransformTool::DrawPreview(System::Drawing::Graphics^ g)
{
    System::Drawing::Rectangle bounds =
        System::Drawing::Rectangle::Truncate(::Paint::selectionRegion->GetBounds(
            System::Drawing::Graphics::FromImage(::Paint::layersController->ActiveLayer->bitmap)));
    //auto originalClip = g->Clip->Clone();
    auto state = g->Save();
    g->SetClip(::Paint::selectionRegion, System::Drawing::Drawing2D::CombineMode::Intersect);
    //g->CompositingMode = System::Drawing::Drawing2D::CompositingMode::SourceCopy;
    g->DrawImage(selectionBitmap, bounds.Left, bounds.Top);
    g->Restore(state);
}

System::Void TransformTool::OnMouseDown(System::Windows::Forms::MouseEventArgs^ e)
{
    if (::Paint::selectionRegion->IsVisible(e->Location))
    {
        isDragging = true;
        lastMousePosition = e->Location;

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

System::Void TransformTool::OnMouseUp(System::Windows::Forms::MouseEventArgs^ e)
{
    if (isDragging) {
        isDragging = false;
        System::Drawing::Rectangle bounds =
            System::Drawing::Rectangle::Truncate(::Paint::selectionRegion->GetBounds(
                System::Drawing::Graphics::FromImage(::Paint::layersController->ActiveLayer->bitmap)));
        System::Drawing::Graphics^ g = System::Drawing::Graphics::FromImage(::Paint::layersController->ActiveLayer->bitmap);

        g->SetClip(::Paint::selectionRegion, System::Drawing::Drawing2D::CombineMode::Intersect);
        g->CompositingMode = System::Drawing::Drawing2D::CompositingMode::SourceCopy;
        g->DrawImage(selectionBitmap, bounds.Left, bounds.Top);
        delete g;
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
