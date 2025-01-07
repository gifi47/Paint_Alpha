#pragma once
#include "Tool.h"
ref class TransformTool :
    public Tool
{
private:
    bool isDragging = false;
    bool isActive = false;
    System::Drawing::Point lastMousePosition;
    System::Drawing::Bitmap^ selectionBitmap;

public:
    System::Void PasteImage(System::Drawing::Image^ image);
    System::Void ApplyTransformation();
    System::Void CancelTransformation();
    System::Void Delete();
    System::Void Translate(int x, int y);

    // Унаследовано через Tool
    System::Void DrawPreview(System::Drawing::Graphics^ g) override;
    System::Void OnMouseDown(System::Windows::Forms::MouseEventArgs^ e) override;
    System::Void OnMouseUp(System::Windows::Forms::MouseEventArgs^ e) override;
    System::Drawing::Rectangle OnMouseMove(System::Windows::Forms::MouseEventArgs^ e) override;

    property bool IsActive {
        bool get() {
            return isActive;
        }
    };

    property System::Drawing::Bitmap^ SelectionBitmap {
        System::Drawing::Bitmap^ get() {
            return selectionBitmap;
        }
    };
};