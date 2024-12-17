#include "PencilTool.h"

PencilTool::PencilTool()
{
    pen = gcnew System::Drawing::Pen(System::Drawing::Color::Black, 1);
}

System::Void PencilTool::OnMouseDown(System::Windows::Forms::MouseEventArgs^ e)
{
    pen->Color = Paint::colorController->ActiveColor;
    pen->Width = Paint::thickness;
    points->Add(e->Location);
    //pen->CompoundArray = gcnew array<float>{ 0, 0.33, 0.44, 0.5, 0.75, 1.0};
    pen->StartCap = System::Drawing::Drawing2D::LineCap::Round;
    pen->EndCap = System::Drawing::Drawing2D::LineCap::Round;
}

System::Void PencilTool::OnMouseUp(System::Windows::Forms::MouseEventArgs^ e)
{
    points->Clear();
}

System::Drawing::Rectangle PencilTool::OnMouseMove(System::Windows::Forms::MouseEventArgs^ e)
{
    points->Add(e->Location);

    if (points->Count > 1) {
        System::Drawing::Graphics^ graphics = System::Drawing::Graphics::FromImage(Paint::layersController->ActiveLayer->bitmap);
        graphics->DrawLines(pen, points->ToArray());
        int del = points->Count - 10;
        if (del > 0)
            points->RemoveRange(0, del);
        delete graphics;
    }
    int x = System::Math::Min(points[0].X, e->X) - Paint::thickness;
    int y = System::Math::Min(points[0].Y, e->Y) - Paint::thickness;
    int width = System::Math::Abs(points[0].X - e->X) + Paint::thickness * 2;
    int height = System::Math::Abs(points[0].Y - e->Y) + Paint::thickness * 2;
    return System::Drawing::Rectangle(x, y, width, height);
}

System::Void PencilTool::DrawPreview(System::Drawing::Graphics^ g)
{
    return System::Void();
}
