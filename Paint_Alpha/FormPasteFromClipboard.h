#pragma once

namespace paint {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для FormPasteFromClipboard
	/// </summary>
	public ref class FormPasteFromClipboard : public System::Windows::Forms::Form
	{
	public:
		FormPasteFromClipboard(void)
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
		~FormPasteFromClipboard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonCancel;
	private: System::Windows::Forms::Button^ buttonIncreaseSize;
	protected:

	private: System::Windows::Forms::Button^ buttonKeepSize;

	private: System::Windows::Forms::Label^ label1;

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
			this->buttonCancel = (gcnew System::Windows::Forms::Button());
			this->buttonIncreaseSize = (gcnew System::Windows::Forms::Button());
			this->buttonKeepSize = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// buttonCancel
			// 
			this->buttonCancel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->buttonCancel->Location = System::Drawing::Point(25, 268);
			this->buttonCancel->Name = L"buttonCancel";
			this->buttonCancel->Size = System::Drawing::Size(191, 64);
			this->buttonCancel->TabIndex = 9;
			this->buttonCancel->Text = L"Отмена";
			this->buttonCancel->UseVisualStyleBackColor = true;
			this->buttonCancel->Click += gcnew System::EventHandler(this, &FormPasteFromClipboard::buttonCancel_Click);
			// 
			// buttonIncreaseSize
			// 
			this->buttonIncreaseSize->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->buttonIncreaseSize->Location = System::Drawing::Point(25, 121);
			this->buttonIncreaseSize->Name = L"buttonIncreaseSize";
			this->buttonIncreaseSize->Size = System::Drawing::Size(317, 112);
			this->buttonIncreaseSize->TabIndex = 8;
			this->buttonIncreaseSize->Text = L"Увеличить размер";
			this->buttonIncreaseSize->UseVisualStyleBackColor = true;
			this->buttonIncreaseSize->Click += gcnew System::EventHandler(this, &FormPasteFromClipboard::buttonIncreaseSize_Click);
			// 
			// buttonKeepSize
			// 
			this->buttonKeepSize->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->buttonKeepSize->Location = System::Drawing::Point(361, 121);
			this->buttonKeepSize->Name = L"buttonKeepSize";
			this->buttonKeepSize->Size = System::Drawing::Size(316, 112);
			this->buttonKeepSize->TabIndex = 10;
			this->buttonKeepSize->Text = L"Сохранить размер полотна";
			this->buttonKeepSize->UseVisualStyleBackColor = true;
			this->buttonKeepSize->Click += gcnew System::EventHandler(this, &FormPasteFromClipboard::buttonKeepSize_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->label1->Location = System::Drawing::Point(18, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(664, 80);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Вставляемое изображение больше \r\nразмера полотна, выберите действие:";
			// 
			// FormPasteFromClipboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(699, 358);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->buttonKeepSize);
			this->Controls->Add(this->buttonCancel);
			this->Controls->Add(this->buttonIncreaseSize);
			this->Name = L"FormPasteFromClipboard";
			this->Text = L"Вставка";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public:
		enum class PasteMode
		{
			KeepSize,
			IncreaseSize
		};
		PasteMode pasteMode = PasteMode::KeepSize;
	private: System::Void buttonCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		DialogResult = System::Windows::Forms::DialogResult::Cancel;
	}
	private: System::Void buttonIncreaseSize_Click(System::Object^ sender, System::EventArgs^ e) {
		pasteMode = PasteMode::IncreaseSize;
		DialogResult = System::Windows::Forms::DialogResult::OK;
	}
	private: System::Void buttonKeepSize_Click(System::Object^ sender, System::EventArgs^ e) {
		pasteMode = PasteMode::KeepSize;
		DialogResult = System::Windows::Forms::DialogResult::OK;
	}

};
}
