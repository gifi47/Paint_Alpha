#include "Layer.h"
#include "Paint.h"

Layer::Layer() {
	bitmap = gcnew System::Drawing::Bitmap(Paint::canvasSize.Width, Paint::canvasSize.Height);
}

void Layer::Resize(AnchorImageMode anchorMode) {
    System::Drawing::Bitmap^ resizedBitmap = gcnew System::Drawing::Bitmap(::Paint::canvasSize.Width, ::Paint::canvasSize.Height);
    System::Drawing::Graphics^ graphics = System::Drawing::Graphics::FromImage(resizedBitmap);

    int offsetX = 0, offsetY = 0;

    switch (anchorMode)
    {
    case AnchorImageMode::TopLeft:
        offsetX = 0;
        offsetY = 0;
        break;

    case AnchorImageMode::Top:
        offsetX = (::Paint::canvasSize.Width - this->bitmap->Width) / 2;
        offsetY = 0;
        break;

    case AnchorImageMode::TopRight:
        offsetX = ::Paint::canvasSize.Width - this->bitmap->Width;
        offsetY = 0;
        break;

    case AnchorImageMode::Right:
        offsetX = ::Paint::canvasSize.Width - this->bitmap->Width;
        offsetY = (::Paint::canvasSize.Height - this->bitmap->Height) / 2;
        break;

    case AnchorImageMode::BottomRight:
        offsetX = ::Paint::canvasSize.Width - this->bitmap->Width;
        offsetY = ::Paint::canvasSize.Height - this->bitmap->Height;
        break;

    case AnchorImageMode::Bottom:
        offsetX = (::Paint::canvasSize.Width - this->bitmap->Width) / 2;
        offsetY = ::Paint::canvasSize.Height - this->bitmap->Height;
        break;

    case AnchorImageMode::BottomLeft:
        offsetX = 0;
        offsetY = ::Paint::canvasSize.Height - this->bitmap->Height;
        break;

    case AnchorImageMode::Left:
        offsetX = 0;
        offsetY = (::Paint::canvasSize.Height - this->bitmap->Height) / 2;
        break;

    case AnchorImageMode::Center:
        offsetX = (::Paint::canvasSize.Width - this->bitmap->Width) / 2;
        offsetY = (::Paint::canvasSize.Height - this->bitmap->Height) / 2;
        break;

    case AnchorImageMode::Strech:
        // Resize to fill the new size
        graphics->DrawImage(this->bitmap, 0, 0, ::Paint::canvasSize.Width, ::Paint::canvasSize.Height);
        delete graphics;
        this->bitmap = resizedBitmap;
        return;

    default:
        break;
    }

    // Clear the background
    graphics->Clear(System::Drawing::Color::Transparent);

    // Draw the original image at the calculated position
    graphics->DrawImage(this->bitmap, offsetX, offsetY, this->bitmap->Width, this->bitmap->Height);

    // Update the bitmap with the resized version
    delete graphics;
    this->bitmap = resizedBitmap;
}