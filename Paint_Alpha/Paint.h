#pragma once
#include "Tool.h"
#include "PencilTool.h"
#include "ColorController.h"
#include "Logger.h"

static ref class Paint
{
public:
	static LayersController^ layersController;
	static ColorController^ colorController;
	static System::Drawing::Region^ selectionRegion;
	static System::Drawing::Size canvasSize = System::Drawing::Size(512, 512);
	static int thickness = 1;
};

