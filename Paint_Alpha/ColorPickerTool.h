#pragma once
#include "Tool.h"
#include "Paint.h"

ref class ColorPickerTool : 
	public Tool
{
public:
	System::Windows::Forms::ToolStripButton^ colorSelector;

	System::Void DrawPreview(System::Drawing::Graphics^ g) override;
	System::Void OnMouseDown(System::Windows::Forms::MouseEventArgs^ e) override;
	System::Void OnMouseUp(System::Windows::Forms::MouseEventArgs^ e) override;
	System::Void OnTick() override;
	System::Void OnMouseMove(System::Windows::Forms::MouseEventArgs^ e) override;
};

