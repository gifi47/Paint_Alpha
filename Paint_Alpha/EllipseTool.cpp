#include "EllipseTool.h"
#include "Paint.h"

EllipseTool::EllipseTool()
{
    pen = gcnew System::Drawing::Pen(System::Drawing::Color::Black, 1);
}

System::Void EllipseTool::OnMouseDown(System::Windows::Forms::MouseEventArgs^ e)
{
    pen->Color = Paint::colorController->ActiveColor;
    pen->Width = Paint::thickness;
    pointStart = e->Location;
    temporaryPoint = e->Location;
}

System::Void EllipseTool::OnMouseUp(System::Windows::Forms::MouseEventArgs^ e)
{
    System::Drawing::Graphics^ graphics = System::Drawing::Graphics::FromImage(Paint::layersController->ActiveLayer->bitmap);
    int width = System::Math::Abs(pointStart.X - e->X);
    int height = System::Math::Abs(pointStart.Y - e->Y);

    int x = pointStart.X;
    int y = pointStart.Y;
    if ((System::Windows::Forms::Control::ModifierKeys & System::Windows::Forms::Keys::Shift) == System::Windows::Forms::Keys::Shift) {
        bool temp = false;
        if (pointStart.X > e->X) {
            x = e->X;
            temp = true;
        }
        if (pointStart.Y > e->Y) {
            y = e->Y;
            if (height > width)
                y += (height - width);
        }
        if (height > width)
            height = width;
        if (temp) {
            if (width > height)
                x += (width - height);
        }
        if (width > height)
            width = height;
    }
    else {
        if (pointStart.X > e->X) {
            x = e->X;
        }
        if (pointStart.Y > e->Y) {
            y = e->Y;
        }
    }
    graphics->DrawEllipse(pen, x, y, width, height);
    delete graphics;
}

System::Drawing::Rectangle EllipseTool::OnMouseMove(System::Windows::Forms::MouseEventArgs^ e)
{
    int x1 = System::Math::Min(System::Math::Min(pointStart.X, e->X), temporaryPoint.X) - ::Paint::thickness;
    int y1 = System::Math::Min(System::Math::Min(pointStart.Y, e->Y), temporaryPoint.Y) - ::Paint::thickness;
    int x2 = System::Math::Max(System::Math::Max(pointStart.X, e->X), temporaryPoint.X) + ::Paint::thickness;
    int y2 = System::Math::Max(System::Math::Max(pointStart.Y, e->Y), temporaryPoint.Y) + ::Paint::thickness;

    temporaryPoint = e->Location;
    return System::Drawing::Rectangle::FromLTRB(x1, y1, x2, y2);
}

System::Void EllipseTool::DrawPreview(System::Drawing::Graphics^ g)
{
    g->PixelOffsetMode = System::Drawing::Drawing2D::PixelOffsetMode::None;
    int width = System::Math::Abs(pointStart.X - temporaryPoint.X);
    int height = System::Math::Abs(pointStart.Y - temporaryPoint.Y);

    int x = pointStart.X;
    int y = pointStart.Y;
    if ((System::Windows::Forms::Control::ModifierKeys & System::Windows::Forms::Keys::Shift) == System::Windows::Forms::Keys::Shift) {
        bool temp = false;
        if (pointStart.X > temporaryPoint.X) {
            x = temporaryPoint.X;
            temp = true;
        }
        if (pointStart.Y > temporaryPoint.Y) {
            y = temporaryPoint.Y;
            if (height > width)
                y += (height - width);
        }
        if (height > width)
            height = width;
        if (temp) {
            if (width > height)
                x += (width - height);
        }
        if (width > height)
            width = height;
    }
    else {
        if (pointStart.X > temporaryPoint.X) {
            x = temporaryPoint.X;
        }
        if (pointStart.Y > temporaryPoint.Y) {
            y = temporaryPoint.Y;
        }
    }
    g->DrawEllipse(pen, x, y, width, height);
}