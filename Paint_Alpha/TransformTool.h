#pragma once
#include "Tool.h"
ref class TransformTool :
    public Tool
{
private:
    bool isDragging = false;
    System::Drawing::Point lastMousePosition;
    System::Drawing::Bitmap^ selectionBitmap;

public:
    // Унаследовано через Tool
    System::Void DrawPreview(System::Drawing::Graphics^ g) override;
    System::Void OnMouseDown(System::Windows::Forms::MouseEventArgs^ e) override;
    System::Void OnMouseUp(System::Windows::Forms::MouseEventArgs^ e) override;
    System::Drawing::Rectangle OnMouseMove(System::Windows::Forms::MouseEventArgs^ e) override;
};

