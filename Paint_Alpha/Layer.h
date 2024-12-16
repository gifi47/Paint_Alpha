#pragma once

ref class Layer
{
public:
	System::Drawing::Bitmap^ bitmap;
	float opacity;
	Layer();
	void Resize();
};