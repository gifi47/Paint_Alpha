#pragma once
ref class Tool
{
public:
	System::Void virtual DrawPreview(System::Drawing::Graphics^ g) = 0;
	System::Void virtual OnMouseDown(System::Windows::Forms::MouseEventArgs^ e) = 0;
	System::Void virtual OnMouseUp(System::Windows::Forms::MouseEventArgs^ e) = 0;
	System::Void virtual OnTick() = 0;
	System::Void virtual OnMouseMove(System::Windows::Forms::MouseEventArgs^ e) = 0;
};

