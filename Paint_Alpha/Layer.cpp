#include "Layer.h"
#include "Paint.h"

Layer::Layer() {
	bitmap = gcnew System::Drawing::Bitmap(Paint::canvasSize.Width, Paint::canvasSize.Height);
}

void Layer::Resize() {
	bitmap = gcnew System::Drawing::Bitmap(bitmap, Paint::canvasSize);
}