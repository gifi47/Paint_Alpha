#pragma once
#include "Tool.h"
ref class EraserTool :
    public Tool
{
private:
    System::Drawing::Brush^ brush;

public:
    EraserTool();
    System::Void DrawGizmo(System::Drawing::Graphics^ g, float scale, int x, int y);

    // ������������ ����� Tool
    System::Void DrawPreview(System::Drawing::Graphics^ g) override;
    System::Void OnMouseDown(System::Windows::Forms::MouseEventArgs^ e) override;
    System::Void OnMouseUp(System::Windows::Forms::MouseEventArgs^ e) override;
    System::Drawing::Rectangle OnMouseMove(System::Windows::Forms::MouseEventArgs^ e) override;
};

