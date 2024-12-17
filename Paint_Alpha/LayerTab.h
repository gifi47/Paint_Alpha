#pragma once
#include "FormLayerSettings.h"

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

	protected:


	public: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ labelLayerName;
	public:

	public:

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->labelLayerName = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button1->Location = System::Drawing::Point(16, 20);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(160, 110);
			this->button1->TabIndex = 2;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &LayerTab::button1_Click);
			// 
			// labelLayerName
			// 
			this->labelLayerName->AutoSize = true;
			this->labelLayerName->Location = System::Drawing::Point(198, 65);
			this->labelLayerName->Name = L"labelLayerName";
			this->labelLayerName->Size = System::Drawing::Size(61, 20);
			this->labelLayerName->TabIndex = 3;
			this->labelLayerName->Text = L"—лой 1";
			// 
			// LayerTab
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Controls->Add(this->labelLayerName);
			this->Controls->Add(this->button1);
			this->Name = L"LayerTab";
			this->Size = System::Drawing::Size(280, 150);
			this->DoubleClick += gcnew System::EventHandler(this, &LayerTab::LayerTab_DoubleClick);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:
		int layerId = 0;

		System::Void SetName(System::String^ text) {
			labelLayerName->Text = text;
		}
		System::String^ GetName() {
			return labelLayerName->Text;
		}

		event System::EventHandler^ buttonClick;
		event System::EventHandler^ formDoubleClick;
		

	private: 
		System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			buttonClick(this, e);
		}
		System::Void LayerTab_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
			formDoubleClick(this, e);
		}
};
}
