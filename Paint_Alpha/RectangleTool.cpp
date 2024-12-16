#include "RectangleTool.h"

RectangleTool::RectangleTool()
{
    pen = gcnew System::Drawing::Pen(System::Drawing::Color::Black, 1);
}

System::Void RectangleTool::OnMouseDown(System::Windows::Forms::MouseEventArgs^ e)
{
    pen->Color = Paint::colorController->ActiveColor;
    pen->Width = Paint::thickness;
    pointStart = e->Location;
    temporaryPoint = e->Location;
}

System::Void RectangleTool::OnMouseUp(System::Windows::Forms::MouseEventArgs^ e)
{
    System::Drawing::Graphics^ graphics = System::Drawing::Graphics::FromImage(Paint::layersController->ActiveLayer->bitmap);
    int x = System::Math::Min(pointStart.X, e->X);
    int y = System::Math::Min(pointStart.Y, e->Y);
    int width = System::Math::Abs(pointStart.X - e->X);
    int height = System::Math::Abs(pointStart.Y - e->Y);
    graphics->DrawRectangle(pen, x, y, width, height);
    delete graphics;
}

System::Void RectangleTool::OnTick()
{
    /*System::Drawing::Graphics^ graphics = System::Drawing::Graphics::FromImage(Paint::layersController->ActiveLayer->bitmap);
    int x = System::Math::Min(pointStart.X, temporaryPoint.X);
    int y = System::Math::Min(pointStart.Y, temporaryPoint.Y);
    int width = System::Math::Abs(pointStart.X - temporaryPoint.Y);
    int height = System::Math::Abs(pointStart.Y - temporaryPoint.Y);
    graphics->DrawRectangle(pen, x, y, width, height);
    delete graphics;*/
}

System::Void RectangleTool::OnMouseMove(System::Windows::Forms::MouseEventArgs^ e)
{
    temporaryPoint = e->Location;
}

System::Void RectangleTool::DrawPreview(System::Drawing::Graphics^ g)
{
    int x = System::Math::Min(pointStart.X, temporaryPoint.X);
    int y = System::Math::Min(pointStart.Y, temporaryPoint.Y);
    int width = System::Math::Abs(pointStart.X - temporaryPoint.X);
    int height = System::Math::Abs(pointStart.Y - temporaryPoint.Y);
    g->DrawRectangle(pen, x, y, width, height);
}
