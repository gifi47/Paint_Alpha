#include "SelectionTool.h"
#include "Paint.h"

SelectionTool::SelectionTool()
{
    pen = gcnew System::Drawing::Pen(System::Drawing::Color::Black, 6);
    pen->DashStyle = System::Drawing::Drawing2D::DashStyle::Dash;
}

System::Void SelectionTool::DrawGizmo(System::Drawing::Graphics^ g, float scale)
{
    int x = System::Math::Min(pointStart.X, temporaryPoint.X);
    int y = System::Math::Min(pointStart.Y, temporaryPoint.Y);
    int width = System::Math::Abs(pointStart.X - temporaryPoint.X);
    int height = System::Math::Abs(pointStart.Y - temporaryPoint.Y);
    g->DrawRectangle(pen, x * scale, y * scale, width * scale, height * scale);
}

System::Void SelectionTool::DrawPreview(System::Drawing::Graphics^ g)
{
    int x = System::Math::Min(pointStart.X, temporaryPoint.X);
    int y = System::Math::Min(pointStart.Y, temporaryPoint.Y);
    int width = System::Math::Abs(pointStart.X - temporaryPoint.X);
    int height = System::Math::Abs(pointStart.Y - temporaryPoint.Y);
    g->DrawRectangle(pen, x, y, width, height);
}

System::Void SelectionTool::OnMouseDown(System::Windows::Forms::MouseEventArgs^ e)
{
    pointStart = e->Location;
    temporaryPoint = e->Location;
}

System::Void SelectionTool::OnMouseUp(System::Windows::Forms::MouseEventArgs^ e)
{
    int x = System::Math::Min(pointStart.X, e->X);
    int y = System::Math::Min(pointStart.Y, e->Y);
    int width = System::Math::Abs(pointStart.X - e->X);
    int height = System::Math::Abs(pointStart.Y - e->Y);
    ::Paint::selectionRegion = gcnew System::Drawing::Region(System::Drawing::Rectangle(x, y, width, height));
}

System::Drawing::Rectangle SelectionTool::OnMouseMove(System::Windows::Forms::MouseEventArgs^ e)
{
    temporaryPoint = e->Location;
    return System::Drawing::Rectangle();
}
