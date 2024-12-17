#pragma once
#include "Tool.h"
#include "Layer.h"
#include "LayersController.h"
#include "Paint.h"

ref class PencilTool :
    public Tool
{
private:
    System::Collections::Generic::List<System::Drawing::Point>^ points = gcnew System::Collections::Generic::List<System::Drawing::Point>();
    System::Drawing::Pen^ pen;

public:
    PencilTool();

    System::Void OnMouseDown(System::Windows::Forms::MouseEventArgs^ e) override;
    System::Void OnMouseUp(System::Windows::Forms::MouseEventArgs^ e) override;
    System::Drawing::Rectangle OnMouseMove(System::Windows::Forms::MouseEventArgs^ e) override;
    System::Void DrawPreview(System::Drawing::Graphics^ g) override;
};

