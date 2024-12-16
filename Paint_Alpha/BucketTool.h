#pragma once
#include "Tool.h"
#include "Paint.h"
#include "queue"
ref class BucketTool :
    public Tool
{
public:
    System::Void DrawPreview(System::Drawing::Graphics^ g) override;
    System::Void OnMouseDown(System::Windows::Forms::MouseEventArgs^ e) override;
    System::Void OnMouseUp(System::Windows::Forms::MouseEventArgs^ e) override;
    System::Void OnTick() override;
    System::Void OnMouseMove(System::Windows::Forms::MouseEventArgs^ e) override;
};

