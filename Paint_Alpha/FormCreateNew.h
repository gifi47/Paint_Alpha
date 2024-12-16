#pragma once

namespace paint {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для FormCreateNew
	/// </summary>
	public ref class FormCreateNew : public System::Windows::Forms::Form
	{
	public:
		FormCreateNew(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
		FormCreateNew(int width, int height)
		{
			this->width = width;
			this->height = height;
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~FormCreateNew()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ labelWidth;
	private: System::Windows::Forms::Label^ labelHeight;
	protected:

	protected:

	private: System::Windows::Forms::NumericUpDown^ numericUpDownWidth;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownHeight;


	private: System::Windows::Forms::Button^ buttonOK;
	private: System::Windows::Forms::Button^ buttonCancel;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormCreateNew::typeid));
			this->labelWidth = (gcnew System::Windows::Forms::Label());
			this->labelHeight = (gcnew System::Windows::Forms::Label());
			this->numericUpDownWidth = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownHeight = (gcnew System::Windows::Forms::NumericUpDown());
			this->buttonOK = (gcnew System::Windows::Forms::Button());
			this->buttonCancel = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownWidth))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownHeight))->BeginInit();
			this->SuspendLayout();
			// 
			// labelWidth
			// 
			this->labelWidth->AutoSize = true;
			this->labelWidth->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelWidth->Location = System::Drawing::Point(99, 119);
			this->labelWidth->Name = L"labelWidth";
			this->labelWidth->Size = System::Drawing::Size(123, 37);
			this->labelWidth->TabIndex = 1;
			this->labelWidth->Text = L"Ширина";
			// 
			// labelHeight
			// 
			this->labelHeight->AutoSize = true;
			this->labelHeight->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelHeight->Location = System::Drawing::Point(98, 170);
			this->labelHeight->Name = L"labelHeight";
			this->labelHeight->Size = System::Drawing::Size(124, 37);
			this->labelHeight->TabIndex = 3;
			this->labelHeight->Text = L"Высота";
			// 
			// numericUpDownWidth
			// 
			this->numericUpDownWidth->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->numericUpDownWidth->Location = System::Drawing::Point(228, 113);
			this->numericUpDownWidth->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->numericUpDownWidth->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownWidth->Name = L"numericUpDownWidth";
			this->numericUpDownWidth->Size = System::Drawing::Size(172, 48);
			this->numericUpDownWidth->TabIndex = 4;
			this->numericUpDownWidth->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->numericUpDownWidth->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { width, 0, 0, 0 });
			// 
			// numericUpDownHeight
			// 
			this->numericUpDownHeight->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->numericUpDownHeight->Location = System::Drawing::Point(228, 170);
			this->numericUpDownHeight->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->numericUpDownHeight->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownHeight->Name = L"numericUpDownHeight";
			this->numericUpDownHeight->Size = System::Drawing::Size(172, 48);
			this->numericUpDownHeight->TabIndex = 5;
			this->numericUpDownHeight->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->numericUpDownHeight->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { height, 0, 0, 0 });
			// 
			// buttonOK
			// 
			this->buttonOK->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->buttonOK->Location = System::Drawing::Point(313, 311);
			this->buttonOK->Name = L"buttonOK";
			this->buttonOK->Size = System::Drawing::Size(191, 64);
			this->buttonOK->TabIndex = 6;
			this->buttonOK->Text = L"Ок";
			this->buttonOK->UseVisualStyleBackColor = true;
			this->buttonOK->Click += gcnew System::EventHandler(this, &FormCreateNew::buttonOK_Click);
			// 
			// buttonCancel
			// 
			this->buttonCancel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->buttonCancel->Location = System::Drawing::Point(12, 311);
			this->buttonCancel->Name = L"buttonCancel";
			this->buttonCancel->Size = System::Drawing::Size(191, 64);
			this->buttonCancel->TabIndex = 7;
			this->buttonCancel->Text = L"Отмена";
			this->buttonCancel->UseVisualStyleBackColor = true;
			this->buttonCancel->Click += gcnew System::EventHandler(this, &FormCreateNew::buttonCancel_Click);
			// 
			// FormCreateNew
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(516, 387);
			this->Controls->Add(this->buttonCancel);
			this->Controls->Add(this->buttonOK);
			this->Controls->Add(this->numericUpDownHeight);
			this->Controls->Add(this->numericUpDownWidth);
			this->Controls->Add(this->labelHeight);
			this->Controls->Add(this->labelWidth);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"FormCreateNew";
			this->Text = L"Создание";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownWidth))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownHeight))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:
		int width = 800;
		int height = 600;
		property System::Drawing::Size SizeOfNewImage {
			System::Drawing::Size get() {
				return System::Drawing::Size(width, height);
			}
		}
	private: System::Void buttonOK_Click(System::Object^ sender, System::EventArgs^ e) {
		width = System::Convert::ToInt32(numericUpDownWidth->Value);
		height = System::Convert::ToInt32(numericUpDownHeight->Value);
		DialogResult = System::Windows::Forms::DialogResult::OK;
	}
	private: System::Void buttonCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		DialogResult = System::Windows::Forms::DialogResult::Cancel;
	}
};
}
