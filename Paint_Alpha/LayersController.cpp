#include "LayersController.h"
#include "Paint.h"
#include "Layer.h"

LayersController::LayersController()
{
	bottomLayersPacked = gcnew System::Drawing::Bitmap(Paint::canvasSize.Width, Paint::canvasSize.Height);
	topLayersPacked = gcnew System::Drawing::Bitmap(Paint::canvasSize.Width, Paint::canvasSize.Height);
}

System::Void LayersController::SelectLayer(int id) {
	if (id < 0 || id > layers->Count) return;
	activeLayer = id;

	PackLayers();
}

System::Void LayersController::AddLayer()
{
	Layer^ newLayer = gcnew Layer();
	newLayer->opacity = 1;
	layers->Add(newLayer);
}

System::Void LayersController::DeleteLayer(int id)
{
	layers->RemoveAt(id);
}

System::Void LayersController::MergeLayers(int first, int second)
{
	auto colorMatrix = gcnew System::Drawing::Imaging::ColorMatrix();
	auto imageAttr = gcnew System::Drawing::Imaging::ImageAttributes();
	colorMatrix->Matrix33 = layers[first]->opacity;
	imageAttr->SetColorMatrix(colorMatrix, System::Drawing::Imaging::ColorMatrixFlag::Default, System::Drawing::Imaging::ColorAdjustType::Bitmap);

	System::Drawing::Graphics^ graphics = System::Drawing::Graphics::FromImage(layers[second]->bitmap);
	System::Drawing::Rectangle rect(0, 0, layers[first]->bitmap->Width, layers[first]->bitmap->Height);
	graphics->DrawImage(layers[first]->bitmap, rect, 0, 0, layers[first]->bitmap->Width, layers[first]->bitmap->Height,
		System::Drawing::GraphicsUnit::Pixel, imageAttr);

	DeleteLayer(first);
	delete graphics;
}

System::Void LayersController::MoveLayer(int id, int to)
{
	Layer^ l = layers[id];
	layers->RemoveAt(id);
	layers->Insert(to, l);
}

System::Void LayersController::DrawBottomLayers(System::Drawing::Graphics^ graphics)
{
	System::Drawing::Rectangle rect(0, 0, bottomLayersPacked->Width, bottomLayersPacked->Height);
	graphics->DrawImage(bottomLayersPacked, rect, 0, 0, bottomLayersPacked->Width, bottomLayersPacked->Height,
		System::Drawing::GraphicsUnit::Pixel);
}

System::Void LayersController::DrawTopLayers(System::Drawing::Graphics^ graphics, System::Drawing::Rectangle^ destRect, System::Drawing::Rectangle^ imageRect)
{
	graphics->DrawImage(topLayersPacked, *destRect, imageRect->X, imageRect->Y, imageRect->Width, imageRect->Height,
		System::Drawing::GraphicsUnit::Pixel);
}

System::Void LayersController::DrawBottomLayers(System::Drawing::Graphics^ graphics, System::Drawing::Rectangle^ destRect, System::Drawing::Rectangle^ imageRect)
{
	graphics->DrawImage(bottomLayersPacked, *destRect, imageRect->X, imageRect->Y, imageRect->Width, imageRect->Height,
		System::Drawing::GraphicsUnit::Pixel);
}

System::Void LayersController::DrawSelectedLayer(System::Drawing::Graphics^ graphics, System::Drawing::Rectangle^ destRect, System::Drawing::Rectangle^ imageRect)
{
	auto colorMatrix = gcnew System::Drawing::Imaging::ColorMatrix();
	auto imageAttr = gcnew System::Drawing::Imaging::ImageAttributes();
	colorMatrix->Matrix33 = layers[activeLayer]->opacity;
	imageAttr->SetColorMatrix(colorMatrix, System::Drawing::Imaging::ColorMatrixFlag::Default,
		System::Drawing::Imaging::ColorAdjustType::Bitmap);
	graphics->DrawImage(layers[activeLayer]->bitmap, *destRect, imageRect->X, imageRect->Y, imageRect->Width, imageRect->Height,
		System::Drawing::GraphicsUnit::Pixel, imageAttr);
}

System::Void LayersController::Resize()
{
	Resize(AnchorImageMode::Strech);
}

System::Void LayersController::Resize(AnchorImageMode resizeMode)
{
	topLayersPacked = gcnew System::Drawing::Bitmap(topLayersPacked, Paint::canvasSize);
	bottomLayersPacked = gcnew System::Drawing::Bitmap(topLayersPacked, Paint::canvasSize);
	for each (Layer ^ layer in layers) {
		layer->Resize(resizeMode);
	}
	PackLayers();
}

System::Void LayersController::DeleteAllLayers()
{
	activeLayer = 0;
	layers->Clear();
}

System::Void LayersController::PackLayers()
{
	PackBottomLayers();
	PackTopLayers();
}

System::Void LayersController::PackBottomLayers()
{
	auto colorMatrix = gcnew System::Drawing::Imaging::ColorMatrix();
	auto imageAttr = gcnew System::Drawing::Imaging::ImageAttributes();

	System::Drawing::Graphics^ bottomGraphics = System::Drawing::Graphics::FromImage(bottomLayersPacked);
	bottomGraphics->Clear(System::Drawing::Color::Transparent);
	for (int i = 0; i < activeLayer; i++) {
		colorMatrix->Matrix33 = layers[i]->opacity;

		imageAttr->SetColorMatrix(colorMatrix, System::Drawing::Imaging::ColorMatrixFlag::Default, System::Drawing::Imaging::ColorAdjustType::Bitmap);

		System::Drawing::Rectangle rect(0, 0, layers[i]->bitmap->Width, layers[i]->bitmap->Height);
		bottomGraphics->DrawImage(layers[i]->bitmap, rect, 0, 0, layers[i]->bitmap->Width, layers[i]->bitmap->Height,
			System::Drawing::GraphicsUnit::Pixel, imageAttr);
	}

	delete bottomGraphics;
}

System::Void LayersController::PackTopLayers()
{
	auto colorMatrix = gcnew System::Drawing::Imaging::ColorMatrix();
	auto imageAttr = gcnew System::Drawing::Imaging::ImageAttributes();

	System::Drawing::Graphics^ topGraphics = System::Drawing::Graphics::FromImage(topLayersPacked);
	topGraphics->Clear(System::Drawing::Color::Transparent);
	for (int i = activeLayer + 1; i < layers->Count; i++) {
		colorMatrix->Matrix33 = layers[i]->opacity;

		imageAttr->SetColorMatrix(colorMatrix, System::Drawing::Imaging::ColorMatrixFlag::Default, System::Drawing::Imaging::ColorAdjustType::Bitmap);

		System::Drawing::Rectangle rect(0, 0, layers[i]->bitmap->Width, layers[i]->bitmap->Height);
		topGraphics->DrawImage(layers[i]->bitmap, rect, 0, 0, layers[i]->bitmap->Width, layers[i]->bitmap->Height,
			System::Drawing::GraphicsUnit::Pixel, imageAttr);
	}

	delete topGraphics;
}

System::Void LayersController::DrawTopLayers(System::Drawing::Graphics^ graphics)
{
	System::Drawing::Rectangle rect(0, 0, topLayersPacked->Width, topLayersPacked->Height);
	graphics->DrawImage(topLayersPacked, rect, 0, 0, topLayersPacked->Width, topLayersPacked->Height,
		System::Drawing::GraphicsUnit::Pixel);
}

System::Void LayersController::DrawSelectedLayer(System::Drawing::Graphics^ graphics)
{
	auto colorMatrix = gcnew System::Drawing::Imaging::ColorMatrix();
	auto imageAttr = gcnew System::Drawing::Imaging::ImageAttributes();
	colorMatrix->Matrix33 = layers[activeLayer]->opacity;
	imageAttr->SetColorMatrix(colorMatrix, System::Drawing::Imaging::ColorMatrixFlag::Default,
		System::Drawing::Imaging::ColorAdjustType::Bitmap);

	System::Drawing::Rectangle rect(0, 0, layers[activeLayer]->bitmap->Width, layers[activeLayer]->bitmap->Height);
	graphics->DrawImage(layers[activeLayer]->bitmap, rect, 0, 0, layers[activeLayer]->bitmap->Width, layers[activeLayer]->bitmap->Height,
		System::Drawing::GraphicsUnit::Pixel, imageAttr);
}