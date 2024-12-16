#pragma once

#include "Logger.h"
#include "Layer.h"
#include "LayersController.h"
#include "LayerTab.h"
#include "PencilTool.h"
#include "RectangleTool.h"
#include "ColorPickerTool.h"
#include "BucketTool.h"
#include "Paint.h"
#include "FormCreateNew.h"
#include "FormPasteFromClipboard.h"

namespace paint {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòğóêòîğà
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panelMain;
	private: System::Windows::Forms::PictureBox^ pboxMain;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panelLayers;
	private: System::Windows::Forms::Button^ buttonAdd;
	private: System::Windows::Forms::Button^ buttonDelete;
	private: System::Windows::Forms::Button^ buttonMerge;
	private: System::Windows::Forms::Button^ buttonMoveUp;
	private: System::Windows::Forms::Button^ buttonMoveDown;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::ToolStrip^ toolStrip1;
	private: System::Windows::Forms::ToolStripButton^ ToolStripButtonCreateNew;
	private: System::Windows::Forms::ToolStripButton^ îòêğûòüToolStripButton;
	private: System::Windows::Forms::ToolStripButton^ ñîõğàíèòüToolStripButton;
	private: System::Windows::Forms::ToolStripButton^ ïå÷àòüToolStripButton;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator;
	private: System::Windows::Forms::ToolStripButton^ âûğåçàòüToolStripButton;
	private: System::Windows::Forms::ToolStripButton^ ToolStripButtonCopy;
	private: System::Windows::Forms::ToolStripButton^ ToolStripButtonPaste;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator1;
	private: System::Windows::Forms::ToolStripButton^ ñïğàâêàToolStripButton;
	private: System::Windows::Forms::ToolStripButton^ toolStripButtonPencilTool;
	private: System::Windows::Forms::ToolStripButton^ toolStripButtonBucketTool;
	private: System::Windows::Forms::ToolStripButton^ toolStripButtonRectangleTool;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton4;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton5;
	private: System::Windows::Forms::ToolStripButton^ toolStripButtonColorPicker;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton7;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator2;
	private: System::Windows::Forms::ToolStripButton^ toolStripButtonCurrentColor;
	private: System::Windows::Forms::ToolStripTextBox^ toolStripTextBoxSize;
	private: System::Windows::Forms::ToolStripButton^ toolStripButtonMagnifyingGlassMinus;
	private: System::Windows::Forms::ToolStripButton^ toolStripButtonMagnifyingGlassPlus;
	private: System::Windows::Forms::ToolStripTextBox^ toolStripTextBoxScale;
	private: System::Windows::Forms::ToolStripButton^ toolStripButtonSelection;

	private: System::ComponentModel::IContainer^ components;

	protected:

	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->panelMain = (gcnew System::Windows::Forms::Panel());
			this->pboxMain = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panelLayers = (gcnew System::Windows::Forms::Panel());
			this->buttonAdd = (gcnew System::Windows::Forms::Button());
			this->buttonDelete = (gcnew System::Windows::Forms::Button());
			this->buttonMerge = (gcnew System::Windows::Forms::Button());
			this->buttonMoveUp = (gcnew System::Windows::Forms::Button());
			this->buttonMoveDown = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->ToolStripButtonCreateNew = (gcnew System::Windows::Forms::ToolStripButton());
			this->îòêğûòüToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->ñîõğàíèòüToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->ïå÷àòüToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->ñïğàâêàToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->âûğåçàòüToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->ToolStripButtonCopy = (gcnew System::Windows::Forms::ToolStripButton());
			this->ToolStripButtonPaste = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripButtonSelection = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButtonPencilTool = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButtonBucketTool = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButtonRectangleTool = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton4 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton7 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton5 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButtonColorPicker = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripButtonCurrentColor = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripTextBoxSize = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->toolStripButtonMagnifyingGlassMinus = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButtonMagnifyingGlassPlus = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripTextBoxScale = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->panelMain->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pboxMain))->BeginInit();
			this->panelLayers->SuspendLayout();
			this->toolStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panelMain
			// 
			this->panelMain->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panelMain->AutoScroll = true;
			this->panelMain->Controls->Add(this->pboxMain);
			this->panelMain->Location = System::Drawing::Point(0, 36);
			this->panelMain->Name = L"panelMain";
			this->panelMain->Size = System::Drawing::Size(1072, 650);
			this->panelMain->TabIndex = 0;
			this->panelMain->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::panelMain_MouseDown);
			this->panelMain->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::panelMain_MouseMove);
			this->panelMain->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::panelMain_MouseUp);
			// 
			// pboxMain
			// 
			this->pboxMain->Location = System::Drawing::Point(3, 3);
			this->pboxMain->Name = L"pboxMain";
			this->pboxMain->Size = System::Drawing::Size(754, 562);
			this->pboxMain->TabIndex = 0;
			this->pboxMain->TabStop = false;
			this->pboxMain->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::pboxMain_Paint);
			this->pboxMain->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::pboxMain_MouseDown);
			this->pboxMain->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::pboxMain_MouseMove);
			this->pboxMain->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::pboxMain_MouseUp);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(28, 500);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(51, 20);
			this->label1->TabIndex = 2;
			this->label1->Text = L"label1";
			// 
			// panelLayers
			// 
			this->panelLayers->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panelLayers->AutoScroll = true;
			this->panelLayers->Controls->Add(this->label1);
			this->panelLayers->Location = System::Drawing::Point(1075, 36);
			this->panelLayers->Name = L"panelLayers";
			this->panelLayers->Size = System::Drawing::Size(300, 583);
			this->panelLayers->TabIndex = 4;
			// 
			// buttonAdd
			// 
			this->buttonAdd->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->buttonAdd->Location = System::Drawing::Point(1075, 626);
			this->buttonAdd->Name = L"buttonAdd";
			this->buttonAdd->Size = System::Drawing::Size(67, 60);
			this->buttonAdd->TabIndex = 5;
			this->buttonAdd->Text = L"Add";
			this->buttonAdd->UseVisualStyleBackColor = true;
			this->buttonAdd->Click += gcnew System::EventHandler(this, &Form1::buttonAdd_Click);
			// 
			// buttonDelete
			// 
			this->buttonDelete->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->buttonDelete->Location = System::Drawing::Point(1148, 626);
			this->buttonDelete->Name = L"buttonDelete";
			this->buttonDelete->Size = System::Drawing::Size(67, 60);
			this->buttonDelete->TabIndex = 6;
			this->buttonDelete->Text = L"Del";
			this->buttonDelete->UseVisualStyleBackColor = true;
			this->buttonDelete->Click += gcnew System::EventHandler(this, &Form1::buttonDelete_Click);
			// 
			// buttonMerge
			// 
			this->buttonMerge->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->buttonMerge->Location = System::Drawing::Point(1221, 625);
			this->buttonMerge->Name = L"buttonMerge";
			this->buttonMerge->Size = System::Drawing::Size(67, 60);
			this->buttonMerge->TabIndex = 7;
			this->buttonMerge->Text = L"Merge";
			this->buttonMerge->UseVisualStyleBackColor = true;
			this->buttonMerge->Click += gcnew System::EventHandler(this, &Form1::buttonMerge_Click);
			// 
			// buttonMoveUp
			// 
			this->buttonMoveUp->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->buttonMoveUp->Location = System::Drawing::Point(1294, 625);
			this->buttonMoveUp->Name = L"buttonMoveUp";
			this->buttonMoveUp->Size = System::Drawing::Size(81, 30);
			this->buttonMoveUp->TabIndex = 8;
			this->buttonMoveUp->Text = L"Move up";
			this->buttonMoveUp->UseVisualStyleBackColor = true;
			this->buttonMoveUp->Click += gcnew System::EventHandler(this, &Form1::buttonMoveUp_Click);
			// 
			// buttonMoveDown
			// 
			this->buttonMoveDown->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->buttonMoveDown->Location = System::Drawing::Point(1294, 656);
			this->buttonMoveDown->Name = L"buttonMoveDown";
			this->buttonMoveDown->Size = System::Drawing::Size(81, 30);
			this->buttonMoveDown->TabIndex = 9;
			this->buttonMoveDown->Text = L"Move dw";
			this->buttonMoveDown->UseVisualStyleBackColor = true;
			this->buttonMoveDown->Click += gcnew System::EventHandler(this, &Form1::buttonMoveDown_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 20;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// toolStrip1
			// 
			this->toolStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(24) {
				this->ToolStripButtonCreateNew,
					this->îòêğûòüToolStripButton, this->ñîõğàíèòüToolStripButton, this->ïå÷àòüToolStripButton, this->ñïğàâêàToolStripButton, this->toolStripSeparator,
					this->âûğåçàòüToolStripButton, this->ToolStripButtonCopy, this->ToolStripButtonPaste, this->toolStripSeparator1, this->toolStripButtonSelection,
					this->toolStripButtonPencilTool, this->toolStripButtonBucketTool, this->toolStripButtonRectangleTool, this->toolStripButton4,
					this->toolStripButton7, this->toolStripButton5, this->toolStripButtonColorPicker, this->toolStripSeparator2, this->toolStripButtonCurrentColor,
					this->toolStripTextBoxSize, this->toolStripButtonMagnifyingGlassMinus, this->toolStripButtonMagnifyingGlassPlus, this->toolStripTextBoxScale
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 0);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(1378, 33);
			this->toolStrip1->TabIndex = 12;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// ToolStripButtonCreateNew
			// 
			this->ToolStripButtonCreateNew->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->ToolStripButtonCreateNew->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ToolStripButtonCreateNew.Image")));
			this->ToolStripButtonCreateNew->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->ToolStripButtonCreateNew->Name = L"ToolStripButtonCreateNew";
			this->ToolStripButtonCreateNew->Size = System::Drawing::Size(34, 28);
			this->ToolStripButtonCreateNew->Text = L"&Ñîçäàòü";
			this->ToolStripButtonCreateNew->Click += gcnew System::EventHandler(this, &Form1::ToolStripButtonCreateNew_Click);
			// 
			// îòêğûòüToolStripButton
			// 
			this->îòêğûòüToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->îòêğûòüToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"îòêğûòüToolStripButton.Image")));
			this->îòêğûòüToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->îòêğûòüToolStripButton->Name = L"îòêğûòüToolStripButton";
			this->îòêğûòüToolStripButton->Size = System::Drawing::Size(34, 28);
			this->îòêğûòüToolStripButton->Text = L"&Îòêğûòü";
			// 
			// ñîõğàíèòüToolStripButton
			// 
			this->ñîõğàíèòüToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->ñîõğàíèòüToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ñîõğàíèòüToolStripButton.Image")));
			this->ñîõğàíèòüToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->ñîõğàíèòüToolStripButton->Name = L"ñîõğàíèòüToolStripButton";
			this->ñîõğàíèòüToolStripButton->Size = System::Drawing::Size(34, 28);
			this->ñîõğàíèòüToolStripButton->Text = L"&Ñîõğàíèòü";
			// 
			// ïå÷àòüToolStripButton
			// 
			this->ïå÷àòüToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->ïå÷àòüToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ïå÷àòüToolStripButton.Image")));
			this->ïå÷àòüToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->ïå÷àòüToolStripButton->Name = L"ïå÷àòüToolStripButton";
			this->ïå÷àòüToolStripButton->Size = System::Drawing::Size(34, 28);
			this->ïå÷àòüToolStripButton->Text = L"&Ïå÷àòü";
			// 
			// ñïğàâêàToolStripButton
			// 
			this->ñïğàâêàToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->ñïğàâêàToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ñïğàâêàToolStripButton.Image")));
			this->ñïğàâêàToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->ñïğàâêàToolStripButton->Name = L"ñïğàâêàToolStripButton";
			this->ñïğàâêàToolStripButton->Size = System::Drawing::Size(34, 28);
			this->ñïğàâêàToolStripButton->Text = L"Ñïğ&àâêà";
			// 
			// toolStripSeparator
			// 
			this->toolStripSeparator->Name = L"toolStripSeparator";
			this->toolStripSeparator->Size = System::Drawing::Size(6, 33);
			// 
			// âûğåçàòüToolStripButton
			// 
			this->âûğåçàòüToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->âûğåçàòüToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"âûğåçàòüToolStripButton.Image")));
			this->âûğåçàòüToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->âûğåçàòüToolStripButton->Name = L"âûğåçàòüToolStripButton";
			this->âûğåçàòüToolStripButton->Size = System::Drawing::Size(34, 28);
			this->âûğåçàòüToolStripButton->Text = L"Â&ûğåçàòü";
			// 
			// ToolStripButtonCopy
			// 
			this->ToolStripButtonCopy->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->ToolStripButtonCopy->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ToolStripButtonCopy.Image")));
			this->ToolStripButtonCopy->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->ToolStripButtonCopy->Name = L"ToolStripButtonCopy";
			this->ToolStripButtonCopy->Size = System::Drawing::Size(34, 28);
			this->ToolStripButtonCopy->Text = L"&Êîïèğîâàòü";
			this->ToolStripButtonCopy->Click += gcnew System::EventHandler(this, &Form1::ToolStripButtonCopy_Click);
			// 
			// ToolStripButtonPaste
			// 
			this->ToolStripButtonPaste->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->ToolStripButtonPaste->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ToolStripButtonPaste.Image")));
			this->ToolStripButtonPaste->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->ToolStripButtonPaste->Name = L"ToolStripButtonPaste";
			this->ToolStripButtonPaste->Size = System::Drawing::Size(34, 28);
			this->ToolStripButtonPaste->Text = L"Âñò&àâêà";
			this->ToolStripButtonPaste->Click += gcnew System::EventHandler(this, &Form1::ToolStripButtonPaste_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(6, 33);
			// 
			// toolStripButtonSelection
			// 
			this->toolStripButtonSelection->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButtonSelection->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButtonSelection.Image")));
			this->toolStripButtonSelection->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButtonSelection->Name = L"toolStripButtonSelection";
			this->toolStripButtonSelection->Size = System::Drawing::Size(34, 28);
			this->toolStripButtonSelection->Text = L"toolStripButtonSelection";
			this->toolStripButtonSelection->Click += gcnew System::EventHandler(this, &Form1::toolStripButtonSelection_Click);
			// 
			// toolStripButtonPencilTool
			// 
			this->toolStripButtonPencilTool->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButtonPencilTool->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButtonPencilTool.Image")));
			this->toolStripButtonPencilTool->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButtonPencilTool->Name = L"toolStripButtonPencilTool";
			this->toolStripButtonPencilTool->Size = System::Drawing::Size(34, 28);
			this->toolStripButtonPencilTool->Text = L"toolStripButton1";
			this->toolStripButtonPencilTool->ToolTipText = L"Êàğàíäàø";
			this->toolStripButtonPencilTool->Click += gcnew System::EventHandler(this, &Form1::toolStripButtonPencilTool_Click);
			// 
			// toolStripButtonBucketTool
			// 
			this->toolStripButtonBucketTool->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButtonBucketTool->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButtonBucketTool.Image")));
			this->toolStripButtonBucketTool->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButtonBucketTool->Name = L"toolStripButtonBucketTool";
			this->toolStripButtonBucketTool->Size = System::Drawing::Size(34, 28);
			this->toolStripButtonBucketTool->Text = L"toolStripButton2";
			this->toolStripButtonBucketTool->ToolTipText = L"Çàëèâêà";
			this->toolStripButtonBucketTool->Click += gcnew System::EventHandler(this, &Form1::toolStripButtonBucketTool_Click);
			// 
			// toolStripButtonRectangleTool
			// 
			this->toolStripButtonRectangleTool->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButtonRectangleTool->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButtonRectangleTool.Image")));
			this->toolStripButtonRectangleTool->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButtonRectangleTool->Name = L"toolStripButtonRectangleTool";
			this->toolStripButtonRectangleTool->Size = System::Drawing::Size(34, 28);
			this->toolStripButtonRectangleTool->Text = L"toolStripButton3";
			this->toolStripButtonRectangleTool->ToolTipText = L"Ïğÿìîóãîëüíèê";
			this->toolStripButtonRectangleTool->Click += gcnew System::EventHandler(this, &Form1::toolStripButtonRectangleTool_Click);
			// 
			// toolStripButton4
			// 
			this->toolStripButton4->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton4.Image")));
			this->toolStripButton4->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton4->Name = L"toolStripButton4";
			this->toolStripButton4->Size = System::Drawing::Size(34, 28);
			this->toolStripButton4->Text = L"toolStripButton4";
			this->toolStripButton4->ToolTipText = L"Ëàñòèê";
			// 
			// toolStripButton7
			// 
			this->toolStripButton7->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton7.Image")));
			this->toolStripButton7->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton7->Name = L"toolStripButton7";
			this->toolStripButton7->Size = System::Drawing::Size(34, 28);
			this->toolStripButton7->Text = L"toolStripButton7";
			this->toolStripButton7->ToolTipText = L"Òåêñò";
			// 
			// toolStripButton5
			// 
			this->toolStripButton5->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton5.Image")));
			this->toolStripButton5->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton5->Name = L"toolStripButton5";
			this->toolStripButton5->Size = System::Drawing::Size(34, 28);
			this->toolStripButton5->Text = L"toolStripButton5";
			this->toolStripButton5->ToolTipText = L"Ïğÿìàÿ";
			// 
			// toolStripButtonColorPicker
			// 
			this->toolStripButtonColorPicker->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButtonColorPicker->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButtonColorPicker.Image")));
			this->toolStripButtonColorPicker->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButtonColorPicker->Name = L"toolStripButtonColorPicker";
			this->toolStripButtonColorPicker->Size = System::Drawing::Size(34, 28);
			this->toolStripButtonColorPicker->Text = L"toolStripButton6";
			this->toolStripButtonColorPicker->ToolTipText = L"Ïèïåòêà";
			this->toolStripButtonColorPicker->Click += gcnew System::EventHandler(this, &Form1::toolStripButtonColorPicker_Click);
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(6, 33);
			// 
			// toolStripButtonCurrentColor
			// 
			this->toolStripButtonCurrentColor->BackColor = System::Drawing::SystemColors::Control;
			this->toolStripButtonCurrentColor->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButtonCurrentColor.BackgroundImage")));
			this->toolStripButtonCurrentColor->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->toolStripButtonCurrentColor->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButtonCurrentColor->ForeColor = System::Drawing::SystemColors::ControlText;
			this->toolStripButtonCurrentColor->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButtonCurrentColor.Image")));
			this->toolStripButtonCurrentColor->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButtonCurrentColor->Name = L"toolStripButtonCurrentColor";
			this->toolStripButtonCurrentColor->Size = System::Drawing::Size(34, 28);
			this->toolStripButtonCurrentColor->Text = L"toolStripButton8";
			this->toolStripButtonCurrentColor->ToolTipText = L"Öâåò";
			this->toolStripButtonCurrentColor->Click += gcnew System::EventHandler(this, &Form1::toolStripButtonCurrentColor_Click);
			// 
			// toolStripTextBoxSize
			// 
			this->toolStripTextBoxSize->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->toolStripTextBoxSize->Name = L"toolStripTextBoxSize";
			this->toolStripTextBoxSize->Size = System::Drawing::Size(100, 33);
			this->toolStripTextBoxSize->Text = L"1";
			this->toolStripTextBoxSize->TextChanged += gcnew System::EventHandler(this, &Form1::textBoxThickness_TextChanged);
			// 
			// toolStripButtonMagnifyingGlassMinus
			// 
			this->toolStripButtonMagnifyingGlassMinus->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButtonMagnifyingGlassMinus->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButtonMagnifyingGlassMinus.Image")));
			this->toolStripButtonMagnifyingGlassMinus->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButtonMagnifyingGlassMinus->Name = L"toolStripButtonMagnifyingGlassMinus";
			this->toolStripButtonMagnifyingGlassMinus->Size = System::Drawing::Size(34, 28);
			this->toolStripButtonMagnifyingGlassMinus->Text = L"toolStripButton1";
			this->toolStripButtonMagnifyingGlassMinus->Click += gcnew System::EventHandler(this, &Form1::toolStripButtonMagnifyingGlassMinus_Click);
			// 
			// toolStripButtonMagnifyingGlassPlus
			// 
			this->toolStripButtonMagnifyingGlassPlus->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButtonMagnifyingGlassPlus->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButtonMagnifyingGlassPlus.Image")));
			this->toolStripButtonMagnifyingGlassPlus->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButtonMagnifyingGlassPlus->Name = L"toolStripButtonMagnifyingGlassPlus";
			this->toolStripButtonMagnifyingGlassPlus->Size = System::Drawing::Size(34, 28);
			this->toolStripButtonMagnifyingGlassPlus->Text = L"toolStripButton2";
			this->toolStripButtonMagnifyingGlassPlus->Click += gcnew System::EventHandler(this, &Form1::toolStripButtonMagnifyingGlassPlus_Click);
			// 
			// toolStripTextBoxScale
			// 
			this->toolStripTextBoxScale->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->toolStripTextBoxScale->Name = L"toolStripTextBoxScale";
			this->toolStripTextBoxScale->Size = System::Drawing::Size(100, 33);
			this->toolStripTextBoxScale->Text = L"1";
			this->toolStripTextBoxScale->TextChanged += gcnew System::EventHandler(this, &Form1::toolStripTextBoxScale_TextChanged);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1378, 687);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->buttonMoveDown);
			this->Controls->Add(this->buttonMoveUp);
			this->Controls->Add(this->buttonMerge);
			this->Controls->Add(this->buttonDelete);
			this->Controls->Add(this->buttonAdd);
			this->Controls->Add(this->panelLayers);
			this->Controls->Add(this->panelMain);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L"Paint";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->panelMain->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pboxMain))->EndInit();
			this->panelLayers->ResumeLayout(false);
			this->panelLayers->PerformLayout();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		Logger^ logger;
		LayersController^ layersController;
		System::Collections::Generic::List<LayerTab^>^ layerTabs;
		ColorController^ colorController;

		Tool^ selectedTool;
		PencilTool^ pencilTool;
		RectangleTool^ rectangleTool;
		ColorPickerTool^ colorPickerTool;
		BucketTool^ bucketTool;
		bool IsToolActive = false;

		Brush^ backFillBrush = gcnew TextureBrush(Bitmap::FromFile(L"D:\\Projects\\Paint_Alpha\\Icons\\checkboardPattern2x2.png"), Drawing2D::WrapMode::Tile);

		float scale = 1.0f;

		
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
		logger = gcnew Logger(label1);
		layersController = gcnew LayersController();
		layerTabs = gcnew System::Collections::Generic::List<LayerTab^>();
		colorController = gcnew ColorController();

		::Paint::layersController = layersController;
		::Paint::colorController = colorController;
		::Paint::canvasSize = System::Drawing::Size(512, 512);
		
		pencilTool = gcnew PencilTool();
		rectangleTool = gcnew RectangleTool();
		colorPickerTool = gcnew ColorPickerTool();
		colorPickerTool->colorSelector = toolStripButtonCurrentColor;
		bucketTool = gcnew BucketTool();
		selectedTool = pencilTool;

		safe_cast<TextureBrush^>(backFillBrush)->ScaleTransform(3, 3);

		panelMain->AutoScrollPosition = System::Drawing::Point(0, 0);
		pboxMain->ClientSize = ::Paint::canvasSize;
		pboxMain->Location = Point(pboxMain->Size.Width / 2, pboxMain->Size.Height / 2);
		logger->Log(pboxMain->Location.ToString());
		pboxMain->ClientSize += System::Drawing::Size(pboxMain->ClientSize.Width / 2, pboxMain->ClientSize.Height / 2);
		
		System::Drawing::Bitmap^ background = gcnew System::Drawing::Bitmap(::Paint::canvasSize.Width, ::Paint::canvasSize.Height);
		System::Drawing::Graphics^ g = System::Drawing::Graphics::FromImage(background);
		g->FillRectangle(backFillBrush, 0, 0, background->Width, background->Height);
		//g->Clear(System::Drawing::Color::LightGray);

		toolStripButtonCurrentColor->BackColor = ::Paint::colorController->ActiveColor;

		delete g;
		pboxMain->Image = background;

		buttonAdd_Click(this, e);
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		System::Windows::Forms::ColorDialog^ cd = gcnew System::Windows::Forms::ColorDialog();
		if (cd->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			::Paint::colorController->ActiveColor = cd->Color;
			logger->Log(cd->Color.ToString());
		}
	}

	private: System::Void panelMain_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		IsToolActive = true;
		logger->Log(L"panelMain_MouseDown");
		System::Windows::Forms::MouseEventArgs^ r = 
			gcnew System::Windows::Forms::MouseEventArgs(e->Button, e->Clicks, (e->X - pboxMain->Location.X) / scale, 
				(e->Y - pboxMain->Location.Y) / scale, e->Delta);
		selectedTool->OnMouseDown(r);
		//if (dynamic_cast<BucketTool^>(selectedTool) == nullptr)
			timer1->Start();
		//PaintZoneMouseDown();
	}
	private: System::Void panelMain_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		IsToolActive = false;
		logger->Log(L"panelMain_MouseUp");
		System::Windows::Forms::MouseEventArgs^ r =
			gcnew System::Windows::Forms::MouseEventArgs(e->Button, e->Clicks, (e->X - pboxMain->Location.X) / scale,
				(e->Y - pboxMain->Location.Y) / scale, e->Delta);
		selectedTool->OnMouseUp(r);
		//if (dynamic_cast<BucketTool^>(selectedTool) != nullptr)
			//pboxMain->Invalidate();
		timer1->Stop();
		//PaintZoneMouseUp();
	}
	private: System::Void pboxMain_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		IsToolActive = true;
		logger->Log(L"pboxMain_MouseDown");
		System::Windows::Forms::MouseEventArgs^ r =
			gcnew System::Windows::Forms::MouseEventArgs(e->Button, e->Clicks, e->X / scale,
				e->Y / scale, e->Delta);
		selectedTool->OnMouseDown(r);
		//if (dynamic_cast<BucketTool^>(selectedTool) == nullptr)
		timer1->Start();
		//PaintZoneMouseDown();
	}
	private: System::Void pboxMain_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		IsToolActive = false;
		logger->Log(L"pboxMain_MouseUp");
		System::Windows::Forms::MouseEventArgs^ r =
			gcnew System::Windows::Forms::MouseEventArgs(e->Button, e->Clicks, e->X / scale,
				e->Y / scale, e->Delta);
		selectedTool->OnMouseUp(r);
		//if (dynamic_cast<BucketTool^>(selectedTool) != nullptr)
			//pboxMain->Invalidate();
		timer1->Stop();
		//PaintZoneMouseUp();
	}
	private: System::Void pboxMain_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (IsToolActive) {
			System::Windows::Forms::MouseEventArgs^ r =
				gcnew System::Windows::Forms::MouseEventArgs(e->Button, e->Clicks, e->X / scale,
					e->Y / scale, e->Delta);
			selectedTool->OnMouseMove(r);
		}
		//PaintMouseMove(e->X, e->Y, e->Button);
	}
	private: System::Void panelMain_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (IsToolActive) {
			System::Windows::Forms::MouseEventArgs^ r =
				gcnew System::Windows::Forms::MouseEventArgs(e->Button, e->Clicks, (e->X - pboxMain->Location.X) / scale,
					(e->Y - pboxMain->Location.Y) / scale, e->Delta);
			selectedTool->OnMouseMove(r);
		}
		//PaintMouseMove(e->X - pboxMain->Location.X, e->Y - pboxMain->Location.Y, e->Button);
	}

	private: System::Void pboxMain_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		//e->Graphics->SmoothingMode = System::Drawing::Drawing2D::SmoothingMode::AntiAlias;
		
		//logger->Log(e->ClipRectangle.ToString());
		if (scale < 1.0f)
			e->Graphics->InterpolationMode = System::Drawing::Drawing2D::InterpolationMode::HighQualityBicubic;
		else
			e->Graphics->InterpolationMode = System::Drawing::Drawing2D::InterpolationMode::NearestNeighbor;
		e->Graphics->CompositingQuality = System::Drawing::Drawing2D::CompositingQuality::HighSpeed;
		e->Graphics->SmoothingMode = System::Drawing::Drawing2D::SmoothingMode::None;
		e->Graphics->ScaleTransform(scale, scale);
		layersController->DrawBottomLayers(e->Graphics);
		layersController->DrawSelectedLayer(e->Graphics);
		
		if (IsToolActive) {
			selectedTool->DrawPreview(e->Graphics);
		
		}
		layersController->DrawTopLayers(e->Graphics);
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		auto openFileDialog = gcnew System::Windows::Forms::OpenFileDialog();
		if (openFileDialog->ShowDialog() != System::Windows::Forms::DialogResult::OK) {
			return;
		}
		if (!System::IO::File::Exists(openFileDialog->FileName)) {
			return;
		}
		System::Drawing::Bitmap^ overlapImg = gcnew System::Drawing::Bitmap(openFileDialog->FileName);
		layersController->layers[layersController->activeLayer]->bitmap = overlapImg;
		layersController->layers[layersController->activeLayer]->opacity = 1.0f;
	}
	System::Void buttonLayer_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		LayerTab^ layerTab = static_cast<LayerTab^>(sender);
		int layerId = layerTab->layerId;
		layersController->SelectLayer(layerId);
		layerTab->button1->BackgroundImage = layersController->layers[layerId]->bitmap;
	}

	private: System::Void buttonAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		panelLayers->AutoScrollPosition = System::Drawing::Point(0, 0);
		int layerId = layersController->layers->Count;
		layersController->AddLayer();
		LayerTab^ layerTab = gcnew LayerTab();
		layerTab->layerId = layerId;
		layerTab->SetName("Layer " + (layerTab->layerId + 1).ToString());
		layerTab->Location = System::Drawing::Point(0, layerId * layerTab->Size.Height);
		layerTab->buttonClick += gcnew System::EventHandler(this, &Form1::buttonLayer_Click);
		layerTab->button1->BackgroundImage = layersController->layers[layerId]->bitmap;
		panelLayers->Controls->Add(layerTab);
		//flowLayoutPanel1->Controls->Add(layerTab);
		layerTabs->Add(layerTab);
		return;
	}

	private: System::Void buttonMoveUp_Click(System::Object^ sender, System::EventArgs^ e) {
		int layerId = layersController->activeLayer;
		if (layerId + 1 == layersController->layers->Count) return;
		panelLayers->AutoScrollPosition = System::Drawing::Point(0, 0);

		layersController->MoveLayer(layerId, layerId + 1);
		layersController->SelectLayer(layerId + 1);	
		
		System::Drawing::Point location = layerTabs[layerId]->Location;
		LayerTab^ lt = layerTabs[layerId];
		layerTabs[layerId] = layerTabs[layerId + 1];
		layerTabs[layerId]->layerId = layerId;
		layerTabs[layerId + 1] = lt;
		lt->layerId = layerId + 1;
		lt->Location = layerTabs[layerId]->Location;
		layerTabs[layerId]->Location = location;
		pboxMain->Invalidate();
	}
	private: System::Void buttonMoveDown_Click(System::Object^ sender, System::EventArgs^ e) {
		int layerId = layersController->activeLayer;
		if (layerId - 1 < 0) return;
		panelLayers->AutoScrollPosition = System::Drawing::Point(0, 0);

		layersController->MoveLayer(layerId, layerId - 1);
		layersController->SelectLayer(layerId - 1);

		System::Drawing::Point location = layerTabs[layerId]->Location;
		LayerTab^ lt = layerTabs[layerId];
		layerTabs[layerId] = layerTabs[layerId - 1];
		layerTabs[layerId]->layerId = layerId;
		layerTabs[layerId - 1] = lt;
		lt->layerId = layerId - 1;
		lt->Location = layerTabs[layerId]->Location;
		layerTabs[layerId]->Location = location;
		pboxMain->Invalidate();
	}
	private: System::Void buttonMerge_Click(System::Object^ sender, System::EventArgs^ e) {
		int layerId = layersController->activeLayer;
		if (layerId - 1 < 0) return;
		panelLayers->AutoScrollPosition = System::Drawing::Point(0, 0);

		layersController->MergeLayers(layerId, layerId - 1);
		layersController->SelectLayer(layerId - 1);

		System::Drawing::Point location = layerTabs[layerId]->Location;
		panelLayers->Controls->Remove(layerTabs[layerId]);
		layerTabs->RemoveAt(layerId);

		for (int i = layerId; i < layerTabs->Count; i++) {
			layerTabs[i]->layerId = i;
			System::Drawing::Point predLocation = layerTabs[i]->Location;
			layerTabs[i]->Location = location;
			location = predLocation;
		}
		pboxMain->Invalidate();
	}
	private: System::Void buttonDelete_Click(System::Object^ sender, System::EventArgs^ e) {
		int layerId = layersController->activeLayer;
		//auto oldPos = panelLayers->AutoScrollPosition;
		//panelLayers->AutoScrollPosition = System::Drawing::Point(0, 0);

		layersController->DeleteLayer(layerId);
		layersController->SelectLayer(layerId - (layerId != 0));

		System::Drawing::Point location = layerTabs[layerId]->Location;
		panelLayers->Controls->Remove(layerTabs[layerId]);
		layerTabs->RemoveAt(layerId);

		for (int i = layerId; i < layerTabs->Count; i++) {
			layerTabs[i]->layerId = i;
			System::Drawing::Point predLocation = layerTabs[i]->Location;
			layerTabs[i]->Location = location;
			location = predLocation;
		}
		pboxMain->Invalidate();
	}

	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		selectedTool->OnTick();
		pboxMain->Invalidate();
	}
	private: System::Void buttonToolPencil_Click(System::Object^ sender, System::EventArgs^ e) {
		selectedTool = pencilTool;
	}
	private: System::Void buttonToolRectangle_Click(System::Object^ sender, System::EventArgs^ e) {
		selectedTool = rectangleTool;
	}
	private: System::Void textBoxThickness_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		int result = 1;
		try {
			result = System::Convert::ToInt32(((System::Windows::Forms::ToolStripTextBox^)sender)->Text);
		} 
		catch (...) {
			result = 1;
		}
		::Paint::thickness = result;
	}

	private: System::Void toolStripButtonCurrentColor_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::ColorDialog^ cd = gcnew System::Windows::Forms::ColorDialog();
		if (cd->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			::Paint::colorController->ActiveColor = cd->Color;
			logger->Log(cd->Color.ToString());
		}
		toolStripButtonCurrentColor->BackColor = ::Paint::colorController->ActiveColor;
	}
	private: System::Void toolStripButtonColorPicker_Click(System::Object^ sender, System::EventArgs^ e) {
		selectedTool = colorPickerTool;
		toolStripButtonCurrentColor->BackColor = ::Paint::colorController->ActiveColor;
	}
	private: System::Void toolStripButtonPencilTool_Click(System::Object^ sender, System::EventArgs^ e) {
		selectedTool = pencilTool;
	}
	private: System::Void toolStripButtonRectangleTool_Click(System::Object^ sender, System::EventArgs^ e) {
		selectedTool = rectangleTool;
	}
	private: System::Void toolStripButtonBucketTool_Click(System::Object^ sender, System::EventArgs^ e) {
		selectedTool = bucketTool;
	}
	private: System::Void toolStripButtonMagnifyingGlassMinus_Click(System::Object^ sender, System::EventArgs^ e) {
		scale -= 0.1f;
		if (scale <= 0.1f) scale = 0.1f;
		toolStripTextBoxScale->Text = scale.ToString("F1");
		UpdateScale();
	}
	private: System::Void toolStripButtonMagnifyingGlassPlus_Click(System::Object^ sender, System::EventArgs^ e) {
		scale += 0.1f;
		if (scale > 10.0f) scale = 1.1f;
		toolStripTextBoxScale->Text = scale.ToString("F1");
		UpdateScale();
	}

	private: void UpdateScale() {
		double hsvp = panelMain->HorizontalScroll->Value / 
			((double)panelMain->HorizontalScroll->Maximum - panelMain->HorizontalScroll->Minimum);
		double vsvp = panelMain->VerticalScroll->Value /
			((double)panelMain->VerticalScroll->Maximum - panelMain->VerticalScroll->Minimum);

		panelMain->AutoScrollPosition = System::Drawing::Point(0, 0);
		pboxMain->ClientSize = System::Drawing::Size(::Paint::canvasSize.Width * scale, ::Paint::canvasSize.Height * scale);
		pboxMain->Location = Point(pboxMain->Size.Width / 2, pboxMain->Size.Height / 2);
		logger->Log(pboxMain->Location.ToString());
		pboxMain->ClientSize += System::Drawing::Size(pboxMain->ClientSize.Width / 2, pboxMain->ClientSize.Height / 2);

		System::Drawing::Bitmap^ background = 
			gcnew System::Drawing::Bitmap(::Paint::canvasSize.Width * scale, ::Paint::canvasSize.Height * scale);
		System::Drawing::Graphics^ g = System::Drawing::Graphics::FromImage(background);
		//g->Clear(System::Drawing::Color::LightGray);
		g->FillRectangle(backFillBrush, 0, 0, background->Width, background->Height);

		toolStripButtonCurrentColor->BackColor = ::Paint::colorController->ActiveColor;

		delete g;
		pboxMain->Image = background;
		//pboxMain->Invalidate();

		panelMain->HorizontalScroll->Value = panelMain->HorizontalScroll->Minimum + 
			hsvp * ((double)panelMain->HorizontalScroll->Maximum - panelMain->HorizontalScroll->Minimum);
		panelMain->VerticalScroll->Value = panelMain->VerticalScroll->Minimum +
			vsvp * ((double)panelMain->VerticalScroll->Maximum - panelMain->VerticalScroll->Minimum);
		//panelMain->Scale(scale, scale);
		panelMain->Invalidate();
		//panelMain->	
	}
	private: System::Void ToolStripButtonCreateNew_Click(System::Object^ sender, System::EventArgs^ e) {
		FormCreateNew^ form = gcnew FormCreateNew(::Paint::canvasSize.Width, ::Paint::canvasSize.Height);
		if (form->ShowDialog() != Windows::Forms::DialogResult::OK) return;
		ResizeImage(form->SizeOfNewImage);
		// CLEAR ALL LAYERS
		/*::Paint::canvasSize = form->SizeOfNewImage;

		panelMain->AutoScrollPosition = System::Drawing::Point(0, 0);
		pboxMain->ClientSize = ::Paint::canvasSize;
		pboxMain->Location = Point(pboxMain->Size.Width / 2, pboxMain->Size.Height / 2);
		logger->Log(pboxMain->Location.ToString());
		pboxMain->ClientSize += System::Drawing::Size(pboxMain->ClientSize.Width / 2, pboxMain->ClientSize.Height / 2);

		System::Drawing::Bitmap^ background = gcnew System::Drawing::Bitmap(::Paint::canvasSize.Width, ::Paint::canvasSize.Height);
		System::Drawing::Graphics^ g = System::Drawing::Graphics::FromImage(background);
		//g->Clear(System::Drawing::Color::LightGray);
		g->FillRectangle(backFillBrush, 0, 0, background->Width, background->Height);

		toolStripButtonCurrentColor->BackColor = ::Paint::colorController->ActiveColor;

		delete g;
		pboxMain->Image = background;

		buttonAdd_Click(this, e);*/
	}
	void ResizeImage(System::Drawing::Size newSize) {
		::Paint::canvasSize = newSize;
		::Paint::layersController->Resize();

		panelMain->AutoScrollPosition = System::Drawing::Point(0, 0);
		pboxMain->ClientSize = ::Paint::canvasSize;
		pboxMain->Location = Point(pboxMain->Size.Width / 2, pboxMain->Size.Height / 2);
		logger->Log(pboxMain->Location.ToString());
		pboxMain->ClientSize += System::Drawing::Size(pboxMain->ClientSize.Width / 2, pboxMain->ClientSize.Height / 2);

		System::Drawing::Bitmap^ background = gcnew System::Drawing::Bitmap(::Paint::canvasSize.Width, ::Paint::canvasSize.Height);
		System::Drawing::Graphics^ g = System::Drawing::Graphics::FromImage(background);
		//g->Clear(System::Drawing::Color::LightGray);
		g->FillRectangle(backFillBrush, 0, 0, background->Width, background->Height);

		toolStripButtonCurrentColor->BackColor = ::Paint::colorController->ActiveColor;

		delete g;
		pboxMain->Image = background;
	}

	void ResizeCanvas(System::Drawing::Size newSize) {
		
	}
	private: System::Void toolStripTextBoxScale_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		float result = scale;
		try {
			result = System::Convert::ToSingle(((System::Windows::Forms::ToolStripTextBox^)sender)->Text);
		}
		catch (...) {
			result = scale;
		}
		if (scale != result) {
			if (result >= 0.1f && result < 10.0f) {
				scale = result;
				UpdateScale();
			}
		}
	}
	private: System::Void ToolStripButtonPaste_Click(System::Object^ sender, System::EventArgs^ e) {
		Image^ clipboardImage = nullptr;
		if (Clipboard::ContainsData("PNG")) // HANDLE TRANSPARENCY PNG IMAGE
		{
			Object^ data = Clipboard::GetDataObject()->GetData("PNG");
			System::IO::MemoryStream^ pngStream = (System::IO::MemoryStream^)data;
			clipboardImage = gcnew Bitmap(pngStream);
		}
		else if (Clipboard::ContainsImage()) // HANDLE WINDOWS DEFAULT OPAQUE BMP IMAGE
		{
			clipboardImage = Clipboard::GetImage();
		}
		else
		{
			MessageBox::Show("Â áóôåğå îáìåíà îòñóòñòâóåò èçîáğàæåíèå", "Îøèáêà", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		if (clipboardImage->Width > ::Paint::canvasSize.Width || clipboardImage->Height > ::Paint::canvasSize.Height) {
			FormPasteFromClipboard^ formPasteFromClipBoard = gcnew FormPasteFromClipboard();
			if (formPasteFromClipBoard->ShowDialog() != System::Windows::Forms::DialogResult::OK) return;
			if (formPasteFromClipBoard->pasteMode == FormPasteFromClipboard::PasteMode::IncreaseSize) {
				ResizeImage(clipboardImage->Size);
			}
		}
		// this adds new layer
		buttonAdd_Click(sender, e);
		::Paint::layersController->SelectLayer(::Paint::layersController->layers->Count - 1);
		Graphics^ g = Graphics::FromImage(::Paint::layersController->ActiveLayer->bitmap);
		g->DrawImage(clipboardImage, 0, 0, clipboardImage->Width, clipboardImage->Height);
		delete g;
	}
	private: System::Void ToolStripButtonCopy_Click(System::Object^ sender, System::EventArgs^ e) {
		
		DataObject^ dataObject = gcnew DataObject();

		System::IO::MemoryStream^ pngStream = gcnew System::IO::MemoryStream();
		pngStream->Position = 0;
		::Paint::layersController->ActiveLayer->bitmap->Save(pngStream, System::Drawing::Imaging::ImageFormat::Png);

		dataObject->SetData("PNG", false, pngStream);

		Bitmap^ dibBitmap = gcnew Bitmap(::Paint::layersController->ActiveLayer->bitmap->Width,
			::Paint::layersController->ActiveLayer->bitmap->Height, System::Drawing::Imaging::PixelFormat::Format32bppRgb);
		Graphics^ g = Graphics::FromImage(dibBitmap);
		g->Clear(Color::Black); // Default background color
		g->DrawImage(::Paint::layersController->ActiveLayer->bitmap, 0, 0);
		delete g;

		dataObject->SetData(DataFormats::Dib, true, dibBitmap);

		Clipboard::SetDataObject(dataObject, true);
	}
	private: System::Void toolStripButtonSelection_Click(System::Object^ sender, System::EventArgs^ e) {
	
	}
};
}
