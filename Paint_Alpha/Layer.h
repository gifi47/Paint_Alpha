#pragma once

enum class AnchorImageMode {
	TopLeft,
	Top,
	TopRight,
	Right,
	BottomRight,
	Bottom,
	BottomLeft,
	Left,
	Center,
	Strech
};

ref class Layer
{
public:
	System::Drawing::Bitmap^ bitmap;
	float opacity;
	Layer();
	void Resize(AnchorImageMode anchorMode);
};