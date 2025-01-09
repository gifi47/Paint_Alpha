#pragma once
#include "Tool.h"
ref class EllipseTool :
    public Tool
{
private:
    System::Drawing::Pen^ pen;
    System::Drawing::Point pointStart;
    System::Drawing::Point temporaryPoint;

public:
    EllipseTool();
    // Унаследовано через Tool
    System::Void OnMouseDown(System::Windows::Forms::MouseEventArgs^ e) override;
    System::Void OnMouseUp(System::Windows::Forms::MouseEventArgs^ e) override;
    System::Drawing::Rectangle OnMouseMove(System::Windows::Forms::MouseEventArgs^ e) override;
    System::Void DrawPreview(System::Drawing::Graphics^ g) override;
};

