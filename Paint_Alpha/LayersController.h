#pragma once
ref class Layer;
enum class AnchorImageMode;

ref class LayersController
{
public:
	LayersController();
	System::Void SelectLayer(int id);
	System::Void AddLayer();
	System::Void DeleteLayer(int id);
	System::Void MergeLayers(int first, int second);
	System::Void MoveLayer(int id, int to);

	System::Void DrawTopLayers(System::Drawing::Graphics^ graphics);
	System::Void DrawSelectedLayer(System::Drawing::Graphics^ graphics);
	System::Void DrawBottomLayers(System::Drawing::Graphics^ graphics);

	System::Void Resize();
	System::Void Resize(AnchorImageMode resizeMode);

	System::Void DeleteAllLayers();

	System::Void PackLayers();
	System::Void PackBottomLayers();
	System::Void PackTopLayers();

	int activeLayer = 0;
	System::Collections::Generic::List<Layer^>^ layers = gcnew System::Collections::Generic::List<Layer^>();
	System::Drawing::Bitmap^ topLayersPacked;
	System::Drawing::Bitmap^ bottomLayersPacked;

	property Layer^ ActiveLayer {
		Layer^ get() {
			return layers[activeLayer];
		}
	}
};