#include "EraserTool.h"
#include "Paint.h"

EraserTool::EraserTool()
{
    brush = gcnew System::Drawing::SolidBrush(System::Drawing::Color::FromArgb(0, 0, 0, 0));
}

System::Void EraserTool::DrawPreview(System::Drawing::Graphics^ g)
{
    return System::Void();
}

System::Void EraserTool::OnMouseDown(System::Windows::Forms::MouseEventArgs^ e)
{
    return System::Void();
}

System::Void EraserTool::OnMouseUp(System::Windows::Forms::MouseEventArgs^ e)
{
    return System::Void();
}

System::Drawing::Rectangle EraserTool::OnMouseMove(System::Windows::Forms::MouseEventArgs^ e)
{
    System::Drawing::Graphics^ graphics = 
        System::Drawing::Graphics::FromImage(::Paint::layersController->ActiveLayer->bitmap);

    graphics->CompositingMode = System::Drawing::Drawing2D::CompositingMode::SourceCopy;
    System::Drawing::Rectangle rect(e->X - ::Paint::thickness, e->Y - ::Paint::thickness, ::Paint::thickness * 3, ::Paint::thickness * 3);
    graphics->FillRectangle(brush, rect);

    delete graphics;

    return rect;
}
