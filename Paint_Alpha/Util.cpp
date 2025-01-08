#include "Util.h"

System::Void Util::CopyToClipboard(System::Drawing::Image^ sourceImage)
{
	System::Windows::Forms::DataObject^ dataObject = gcnew System::Windows::Forms::DataObject();

	System::IO::MemoryStream^ pngStream = gcnew System::IO::MemoryStream();
	pngStream->Position = 0;
	sourceImage->Save(pngStream, System::Drawing::Imaging::ImageFormat::Png);

	dataObject->SetData("PNG", false, pngStream);

	System::Drawing::Bitmap^ dibBitmap = gcnew System::Drawing::Bitmap(sourceImage->Width,
		sourceImage->Height, System::Drawing::Imaging::PixelFormat::Format32bppRgb);
	System::Drawing::Graphics^ g = System::Drawing::Graphics::FromImage(dibBitmap);
	g->Clear(System::Drawing::Color::White); // Default background color
	g->DrawImage(sourceImage, 0, 0);
	delete g;

	dataObject->SetData(System::Windows::Forms::DataFormats::Dib, true, dibBitmap);

	System::Windows::Forms::Clipboard::SetDataObject(dataObject, true);
}

float Util::ScrollScale(float scale, float delta, float scrollCf)
{
	if (delta < 0) {
		return scale * delta * scrollCf;
	}
	else {
		return scale * 0.45f * delta * scrollCf;
	}
}
