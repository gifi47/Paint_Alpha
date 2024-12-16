#include "ColorController.h"

ColorController::ColorController()
{
    primaryColor = System::Drawing::Color::Black;
    secondaryColor = System::Drawing::Color::White;
}

System::Void ColorController::Swap()
{
    System::Drawing::Color temp = primaryColor;
    primaryColor = secondaryColor;
    secondaryColor = temp;
}

System::Void ColorController::Select(bool isPrimary)
{
    this->isPrimary = isPrimary;
}
