#pragma once
static ref class Util
{
public:
	static System::Void CopyToClipboard(System::Drawing::Image^ sourceImage);
	static float ScrollScale(float scale, float delta, float scrollCf);
};