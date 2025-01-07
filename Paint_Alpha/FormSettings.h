#pragma once
#include "PaintUserSettings.h"

namespace paint {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для FormSettings
	/// </summary>
	public ref class FormSettings : public System::Windows::Forms::Form
	{
	public:
		FormSettings(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~FormSettings()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBoxPaste;
	protected:

	private: System::Windows::Forms::RadioButton^ radioButtonActiveLayer;
	private: System::Windows::Forms::RadioButton^ radioButtonNewLayer;
	private: System::Windows::Forms::CheckBox^ checkBoxShowLayersPanel;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ radioButtonNoOffset;
	private: System::Windows::Forms::RadioButton^ radioButtonOffset;
	private: System::Windows::Forms::Button^ buttonConfirm;
	private: System::Windows::Forms::Button^ buttonCancel;






	protected:





	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormSettings::typeid));
			this->groupBoxPaste = (gcnew System::Windows::Forms::GroupBox());
			this->radioButtonActiveLayer = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonNewLayer = (gcnew System::Windows::Forms::RadioButton());
			this->checkBoxShowLayersPanel = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButtonNoOffset = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonOffset = (gcnew System::Windows::Forms::RadioButton());
			this->buttonConfirm = (gcnew System::Windows::Forms::Button());
			this->buttonCancel = (gcnew System::Windows::Forms::Button());
			this->groupBoxPaste->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBoxPaste
			// 
			this->groupBoxPaste->Controls->Add(this->radioButtonActiveLayer);
			this->groupBoxPaste->Controls->Add(this->radioButtonNewLayer);
			this->groupBoxPaste->Location = System::Drawing::Point(12, 88);
			this->groupBoxPaste->Name = L"groupBoxPaste";
			this->groupBoxPaste->Size = System::Drawing::Size(333, 95);
			this->groupBoxPaste->TabIndex = 0;
			this->groupBoxPaste->TabStop = false;
			this->groupBoxPaste->Text = L"Вставка изображений";
			// 
			// radioButtonActiveLayer
			// 
			this->radioButtonActiveLayer->AutoSize = true;
			this->radioButtonActiveLayer->Location = System::Drawing::Point(7, 25);
			this->radioButtonActiveLayer->Name = L"radioButtonActiveLayer";
			this->radioButtonActiveLayer->Size = System::Drawing::Size(172, 24);
			this->radioButtonActiveLayer->TabIndex = 1;
			this->radioButtonActiveLayer->TabStop = true;
			this->radioButtonActiveLayer->Text = L"На активный слой";
			this->radioButtonActiveLayer->UseVisualStyleBackColor = true;
			// 
			// radioButtonNewLayer
			// 
			this->radioButtonNewLayer->AutoSize = true;
			this->radioButtonNewLayer->Location = System::Drawing::Point(7, 55);
			this->radioButtonNewLayer->Name = L"radioButtonNewLayer";
			this->radioButtonNewLayer->Size = System::Drawing::Size(305, 24);
			this->radioButtonNewLayer->TabIndex = 0;
			this->radioButtonNewLayer->TabStop = true;
			this->radioButtonNewLayer->Text = L"Создавать новый слой при вставке";
			this->radioButtonNewLayer->UseVisualStyleBackColor = true;
			// 
			// checkBoxShowLayersPanel
			// 
			this->checkBoxShowLayersPanel->AutoSize = true;
			this->checkBoxShowLayersPanel->Location = System::Drawing::Point(19, 58);
			this->checkBoxShowLayersPanel->Name = L"checkBoxShowLayersPanel";
			this->checkBoxShowLayersPanel->Size = System::Drawing::Size(216, 24);
			this->checkBoxShowLayersPanel->TabIndex = 1;
			this->checkBoxShowLayersPanel->Text = L"Показать панель слоёв";
			this->checkBoxShowLayersPanel->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButtonNoOffset);
			this->groupBox1->Controls->Add(this->radioButtonOffset);
			this->groupBox1->Location = System::Drawing::Point(12, 189);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(333, 95);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Область для рисования";
			// 
			// radioButtonNoOffset
			// 
			this->radioButtonNoOffset->AutoSize = true;
			this->radioButtonNoOffset->Location = System::Drawing::Point(7, 25);
			this->radioButtonNoOffset->Name = L"radioButtonNoOffset";
			this->radioButtonNoOffset->Size = System::Drawing::Size(263, 24);
			this->radioButtonNoOffset->TabIndex = 1;
			this->radioButtonNoOffset->TabStop = true;
			this->radioButtonNoOffset->Text = L"Нет отступов от краёв холста";
			this->radioButtonNoOffset->UseVisualStyleBackColor = true;
			// 
			// radioButtonOffset
			// 
			this->radioButtonOffset->AutoSize = true;
			this->radioButtonOffset->Location = System::Drawing::Point(7, 55);
			this->radioButtonOffset->Name = L"radioButtonOffset";
			this->radioButtonOffset->Size = System::Drawing::Size(216, 24);
			this->radioButtonOffset->TabIndex = 0;
			this->radioButtonOffset->TabStop = true;
			this->radioButtonOffset->Text = L"Отступы от края холста";
			this->radioButtonOffset->UseVisualStyleBackColor = true;
			// 
			// buttonConfirm
			// 
			this->buttonConfirm->Location = System::Drawing::Point(245, 362);
			this->buttonConfirm->Name = L"buttonConfirm";
			this->buttonConfirm->Size = System::Drawing::Size(125, 50);
			this->buttonConfirm->TabIndex = 3;
			this->buttonConfirm->Text = L"Применить";
			this->buttonConfirm->UseVisualStyleBackColor = true;
			this->buttonConfirm->Click += gcnew System::EventHandler(this, &FormSettings::buttonConfirm_Click);
			// 
			// buttonCancel
			// 
			this->buttonCancel->Location = System::Drawing::Point(12, 362);
			this->buttonCancel->Name = L"buttonCancel";
			this->buttonCancel->Size = System::Drawing::Size(125, 50);
			this->buttonCancel->TabIndex = 4;
			this->buttonCancel->Text = L"Отмена";
			this->buttonCancel->UseVisualStyleBackColor = true;
			this->buttonCancel->Click += gcnew System::EventHandler(this, &FormSettings::buttonCancel_Click);
			// 
			// FormSettings
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(382, 424);
			this->Controls->Add(this->buttonCancel);
			this->Controls->Add(this->buttonConfirm);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->checkBoxShowLayersPanel);
			this->Controls->Add(this->groupBoxPaste);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"FormSettings";
			this->Text = L"Настройки";
			this->Load += gcnew System::EventHandler(this, &FormSettings::FormSettings_Load);
			this->groupBoxPaste->ResumeLayout(false);
			this->groupBoxPaste->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		PaintUserSettings^ userSettings;

	private: System::Void buttonConfirm_Click(System::Object^ sender, System::EventArgs^ e) {
		if (radioButtonActiveLayer->Checked) {
			userSettings->PasteOption = PasteMode::ToActiveLayer;
		}
		else if (radioButtonNewLayer->Checked) {
			userSettings->PasteOption = PasteMode::ToNewLayer;
		}
		
		if (radioButtonNoOffset->Checked) {
			userSettings->LayerOffsetOption = LayerOffset::Disabled;
		} 
		else if (radioButtonOffset->Checked) {
			userSettings->LayerOffsetOption = LayerOffset::Enabled;
		}

		userSettings->Save();
		DialogResult = System::Windows::Forms::DialogResult::OK;
	}
	private: System::Void buttonCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		DialogResult = System::Windows::Forms::DialogResult::Cancel;
	}
	private: System::Void FormSettings_Load(System::Object^ sender, System::EventArgs^ e) {
		userSettings = gcnew PaintUserSettings();
		
		checkBoxShowLayersPanel->DataBindings->Add(
			gcnew Binding("Checked", userSettings, "ShowLayersPanel")
		);
		
		userSettings->Reload();

		switch (userSettings->PasteOption) {
		case PasteMode::ToActiveLayer:
			radioButtonActiveLayer->Checked = true;
			break;
		case PasteMode::ToNewLayer:
			radioButtonNewLayer->Checked = true;
			break;
		}

		switch (userSettings->LayerOffsetOption) {
		case LayerOffset::Disabled:
			radioButtonNoOffset->Checked = true;
			break;
		case LayerOffset::Enabled:
			radioButtonOffset->Checked = true;
			break;
		}
	}
};
}
