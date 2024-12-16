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

System::Void PencilTool::OnTick()
{
    
    if (points->Count > 1) {
        System::Drawing::Graphics^ graphics = System::Drawing::Graphics::FromImage(Paint::layersController->ActiveLayer->bitmap);
        graphics->DrawLines(pen, points->ToArray());
        //graphics->Draw
        int del = points->Count - 10;
        if (del > 0)
            points->RemoveRange(0, del);
        delete graphics;
    }

}

System::Void PencilTool::OnMouseMove(System::Windows::Forms::MouseEventArgs^ e)
{
    points->Add(e->Location);
}

System::Void PencilTool::DrawPreview(System::Drawing::Graphics^ g)
{
    /*if (points->Count < 2) return;
    int x = System::Math::Min(points[0].X, points[points->Count - 1].X);
    int y = System::Math::Min(points[0].Y, points[points->Count - 1].Y);
    int width = System::Math::Abs(points[0].X - points[points->Count - 1].X);
    int height = System::Math::Abs(points[0].Y - points[points->Count - 1].Y);
    g->DrawEllipse(pen, x, y, width, height);
    */
}
