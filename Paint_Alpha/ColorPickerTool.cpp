#include "ColorPickerTool.h"

System::Void ColorPickerTool::DrawPreview(System::Drawing::Graphics^ g)
{
    return System::Void();
}

System::Void ColorPickerTool::OnMouseDown(System::Windows::Forms::MouseEventArgs^ e)
{
    Paint::colorController->ActiveColor = Paint::layersController->ActiveLayer->bitmap->GetPixel(e->X, e->Y);
    colorSelector->BackColor = Paint::colorController->ActiveColor;
}

System::Void ColorPickerTool::OnMouseUp(System::Windows::Forms::MouseEventArgs^ e)
{
    return System::Void();
}

System::Drawing::Rectangle ColorPickerTool::OnMouseMove(System::Windows::Forms::MouseEventArgs^ e)
{
    return System::Drawing::Rectangle(0, 0, 1, 1);
}
