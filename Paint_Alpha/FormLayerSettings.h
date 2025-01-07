#pragma once

namespace paint {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для FormLayerSettings
	/// </summary>
	public ref class FormLayerSettings : public System::Windows::Forms::Form
	{
	public:
		FormLayerSettings(System::String^ layerName, float opacity)
		{
			this->layerName = layerName;
			this->opacity = opacity;
			int value = opacity * 255;
			InitializeComponent();
			this->textBox1->Text = layerName;
			this->trackBarOpacity->Value = value;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { value, 0, 0, 0 });
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~FormLayerSettings()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ buttonOK;
	private: System::Windows::Forms::Button^ buttonCancel;


	private: System::Windows::Forms::TrackBar^ trackBarOpacity;

	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Label^ label2;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormLayerSettings::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->buttonOK = (gcnew System::Windows::Forms::Button());
			this->buttonCancel = (gcnew System::Windows::Forms::Button());
			this->trackBarOpacity = (gcnew System::Windows::Forms::TrackBar());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBarOpacity))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->textBox1->Location = System::Drawing::Point(12, 71);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(527, 48);
			this->textBox1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->label1->Location = System::Drawing::Point(12, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(269, 40);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Название слоя";
			// 
			// buttonOK
			// 
			this->buttonOK->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->buttonOK->Location = System::Drawing::Point(359, 282);
			this->buttonOK->Name = L"buttonOK";
			this->buttonOK->Size = System::Drawing::Size(180, 80);
			this->buttonOK->TabIndex = 2;
			this->buttonOK->Text = L"ОК";
			this->buttonOK->UseVisualStyleBackColor = true;
			this->buttonOK->Click += gcnew System::EventHandler(this, &FormLayerSettings::buttonOK_Click);
			// 
			// buttonCancel
			// 
			this->buttonCancel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->buttonCancel->Location = System::Drawing::Point(12, 282);
			this->buttonCancel->Name = L"buttonCancel";
			this->buttonCancel->Size = System::Drawing::Size(180, 80);
			this->buttonCancel->TabIndex = 3;
			this->buttonCancel->Text = L"Отмена";
			this->buttonCancel->UseVisualStyleBackColor = true;
			this->buttonCancel->Click += gcnew System::EventHandler(this, &FormLayerSettings::buttonCancel_Click);
			// 
			// trackBarOpacity
			// 
			this->trackBarOpacity->Location = System::Drawing::Point(30, 198);
			this->trackBarOpacity->Maximum = 255;
			this->trackBarOpacity->Name = L"trackBarOpacity";
			this->trackBarOpacity->Size = System::Drawing::Size(387, 69);
			this->trackBarOpacity->TabIndex = 4;
			this->trackBarOpacity->Value = 255;
			this->trackBarOpacity->Scroll += gcnew System::EventHandler(this, &FormLayerSettings::trackBarOpacity_Scroll);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->numericUpDown1->Location = System::Drawing::Point(423, 198);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 255, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(93, 48);
			this->numericUpDown1->TabIndex = 5;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 255, 0, 0, 0 });
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &FormLayerSettings::numericUpDown1_ValueChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->label2->Location = System::Drawing::Point(12, 149);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(253, 40);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Прозрачность";
			// 
			// FormLayerSettings
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(551, 374);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->trackBarOpacity);
			this->Controls->Add(this->buttonCancel);
			this->Controls->Add(this->buttonOK);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"FormLayerSettings";
			this->Text = L"Параметры слоя";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBarOpacity))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:
		System::String^ layerName;
		float opacity;
	private: System::Void buttonOK_Click(System::Object^ sender, System::EventArgs^ e) {
		opacity = trackBarOpacity->Value / 255.0f;
		layerName = textBox1->Text;
		DialogResult = System::Windows::Forms::DialogResult::OK;
	}
	private: System::Void buttonCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		DialogResult = System::Windows::Forms::DialogResult::Cancel;
	}
	private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		trackBarOpacity->Value = System::Convert::ToInt32(numericUpDown1->Value);
	}
	private: System::Void trackBarOpacity_Scroll(System::Object^ sender, System::EventArgs^ e) {
		numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { trackBarOpacity->Value, 0, 0, 0 });
	}
};
}
