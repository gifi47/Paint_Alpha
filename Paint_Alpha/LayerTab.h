#pragma once

namespace paint {

	/*using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;*/
	/// <summary>
	/// —водка дл€ LayerTab
	/// </summary>
	public ref class LayerTab : public System::Windows::Forms::UserControl
	{
	public:
		LayerTab(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~LayerTab()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TrackBar^ trackBar1;
	private: System::Windows::Forms::Label^ label1;
	public: System::Windows::Forms::Button^ button1;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			this->SuspendLayout();
			// 
			// trackBar1
			// 
			this->trackBar1->LargeChange = 10;
			this->trackBar1->Location = System::Drawing::Point(365, 80);
			this->trackBar1->Maximum = 100;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(219, 69);
			this->trackBar1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(442, 46);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(62, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Opacity";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(16, 20);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(280, 110);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Layer";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &LayerTab::button1_Click);
			// 
			// LayerTab
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->trackBar1);
			this->Name = L"LayerTab";
			this->Size = System::Drawing::Size(587, 152);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:
		int layerId = 0;
		System::Void SetName(System::String^ text) {
			button1->Text = text;
		}
		event System::EventHandler^ buttonClick;
	private: 
		System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			buttonClick(this, e);
		}
	};
}
