#pragma once

ref class Logger
{
public:
	Logger(System::Windows::Forms::Label^ label)
	{
		timer = gcnew System::Windows::Forms::Timer();
		this->label = label;
		timer->Interval = 1000;
		timer->Tick += gcnew System::EventHandler(this, &Logger::OnTick);
	};
	System::Windows::Forms::Timer^ timer;
	System::Windows::Forms::Label^ label;

	System::Void Log(System::String^ text) 
	{
		if (isEmpty) {
			isEmpty = false;
			timer->Start();
		}
		label->Text += text + L"\n";
	}


private:
	bool isEmpty = true;
	void OnTick(System::Object^ sender, System::EventArgs^ e) {
		if (label->Text->Length > 0) {
			int ind = label->Text->IndexOf(L'\n');
			if (ind == -1) {
				label->Text = L"";
				isEmpty = true;
				timer->Stop();
				return;
			}
			label->Text = label->Text->Substring(ind + 1);
		}
		else {
			isEmpty = true;
			timer->Stop();
		}
	}
};
