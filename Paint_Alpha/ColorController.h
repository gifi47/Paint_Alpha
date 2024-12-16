#pragma once
ref class ColorController
{
private:
	bool isPrimary = true;
	System::Drawing::Color primaryColor;
	System::Drawing::Color secondaryColor;

public:
	ColorController();

    property System::Drawing::Color ActiveColor {
		System::Drawing::Color get() {
			if (isPrimary)
				return primaryColor;
			return secondaryColor;
        }
		void set(System::Drawing::Color value) {
			if (isPrimary)
				primaryColor = value;
			else
				secondaryColor = value;
		}
    }

	property System::Drawing::Color SecondColor {
		System::Drawing::Color get() {
			if (isPrimary)
				return secondaryColor;
			return primaryColor;
		}
		void set(System::Drawing::Color value) {
			if (isPrimary)
				secondaryColor = value;
			else
				primaryColor = value;
		}
	}

	System::Void Swap();
	System::Void Select(bool isPrimary);
};

