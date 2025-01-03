#pragma once
#include "Tool.h"
ref class SelectionTool :
    public Tool
{
public:
    System::Drawing::Pen^ pen;
    System::Drawing::Point pointStart;
    System::Drawing::Point temporaryPoint;

public:
    SelectionTool();
    System::Void DrawGizmo(System::Drawing::Graphics^ g, float scale);
    System::Void DrawPreview(System::Drawing::Graphics^ g) override;
    System::Void OnMouseDown(System::Windows::Forms::MouseEventArgs^ e) override;
    System::Void OnMouseUp(System::Windows::Forms::MouseEventArgs^ e) override;
    System::Drawing::Rectangle OnMouseMove(System::Windows::Forms::MouseEventArgs^ e) override;
};

