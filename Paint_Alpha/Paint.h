#pragma once
#include "Tool.h"
#include "PencilTool.h"
#include "ColorController.h"
#include "Logger.h"

static ref class Paint
{
private:
	static bool isSelectionActive = false;
public:
	static event System::Action^ onDeselect;
	static LayersController^ layersController;
	static ColorController^ colorController;
	static System::Drawing::Region^ selectionRegion;
	static property bool IsSelectionActive {
		bool get() {
			return isSelectionActive;
		}
		void set(bool value) {
			if (!value && isSelectionActive) {
				onDeselect();
			}
			isSelectionActive = value;
		}
	}
	static System::Drawing::Size canvasSize = System::Drawing::Size(512, 512);
	static int thickness = 1;
};

