#pragma once

#include "Logger.h"
#include "Layer.h"
#include "LayersController.h"
#include "LayerTab.h"
#include "PencilTool.h"
#include "RectangleTool.h"
#include "ColorPickerTool.h"
#include "BucketTool.h"
#include "EraserTool.h"
#include "Paint.h"
#include "FormCreateNew.h"
#include "FormPasteFromClipboard.h"
#include "FormLayerSettings.h"
#include "SelectionTool.h"
#include "TransformTool.h"
#include "PaintUserSettings.h"
#include "FormSettings.h"
#include "Util.h"

namespace paint {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panelMain;
	private: System::Windows::Forms::PictureBox^ pboxMain;

	private: System::Windows::Forms::Panel^ panelLayers;
	private: System::Windows::Forms::Button^ buttonAdd;
	private: System::Windows::Forms::Button^ buttonDelete;
	private: System::Windows::Forms::Button^ buttonMerge;
	private: System::Windows::Forms::Button^ buttonMoveUp;
	private: System::Windows::Forms::Button^ buttonMoveDown;

	private: System::Windows::Forms::ToolStrip^ toolStrip1;
	private: System::Windows::Forms::ToolStripButton^ ToolStripButtonCreateNew;
	private: System::Windows::Forms::ToolStripButton^ toolStripButtonOpen;

	private: System::Windows::Forms::ToolStripButton^ toolStripButtonSave;

	private: System::Windows::Forms::ToolStripButton^ печатьToolStripButton;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator;
	private: System::Windows::Forms::ToolStripButton^ ToolStripButtonCut;

	private: System::Windows::Forms::ToolStripButton^ ToolStripButtonCopy;
	private: System::Windows::Forms::ToolStripButton^ ToolStripButtonPaste;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator1;
	private: System::Windows::Forms::ToolStripButton^ справкаToolStripButton;
	private: System::Windows::Forms::ToolStripButton^ toolStripButtonPencilTool;
	private: System::Windows::Forms::ToolStripButton^ toolStripButtonBucketTool;
	private: System::Windows::Forms::ToolStripButton^ toolStripButtonRectangleTool;
	private: System::Windows::Forms::ToolStripButton^ toolStripButtonEraserTool;

	private: System::Windows::Forms::ToolStripButton^ toolStripButton5;
	private: System::Windows::Forms::ToolStripButton^ toolStripButtonColorPicker;
	private: System::Windows::Forms::ToolStripButton^ toolStripButtonText;

	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator2;
	private: System::Windows::Forms::ToolStripButton^ toolStripButtonCurrentColor;
	private: System::Windows::Forms::ToolStripTextBox^ toolStripTextBoxSize;
	private: System::Windows::Forms::ToolStripButton^ toolStripButtonMagnifyingGlassMinus;
	private: System::Windows::Forms::ToolStripButton^ toolStripButtonMagnifyingGlassPlus;
	private: System::Windows::Forms::ToolStripTextBox^ toolStripTextBoxScale;
	private: System::Windows::Forms::ToolStripButton^ toolStripButtonSelection;
	private: System::Windows::Forms::ToolStripButton^ toolStripButtonHideLayersTab;
	private: System::Windows::Forms::ToolStripButton^ toolStripButtonResize;
	private: System::Windows::Forms::ToolStripButton^ toolStripButtonTranslation;
	private: System::Windows::Forms::ToolStripButton^ toolStripButtonSettings;




	private: System::ComponentModel::IContainer^ components;

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->panelMain = (gcnew System::Windows::Forms::Panel());
			this->pboxMain = (gcnew System::Windows::Forms::PictureBox());
			this->panelLayers = (gcnew System::Windows::Forms::Panel());
			this->buttonAdd = (gcnew System::Windows::Forms::Button());
			this->buttonDelete = (gcnew System::Windows::Forms::Button());
			this->buttonMerge = (gcnew System::Windows::Forms::Button());
			this->buttonMoveUp = (gcnew System::Windows::Forms::Button());
			this->buttonMoveDown = (gcnew System::Windows::Forms::Button());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->ToolStripButtonCreateNew = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButtonOpen = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButtonSave = (gcnew System::Windows::Forms::ToolStripButton());
			this->печатьToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->справкаToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripButtonResize = (gcnew System::Windows::Forms::ToolStripButton());
			this->ToolStripButtonCut = (gcnew System::Windows::Forms::ToolStripButton());
			this->ToolStripButtonCopy = (gcnew System::Windows::Forms::ToolStripButton());
			this->ToolStripButtonPaste = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripButtonSelection = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButtonTranslation = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButtonPencilTool = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButtonBucketTool = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButtonRectangleTool = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButtonEraserTool = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButtonText = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton5 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButtonColorPicker = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripButtonCurrentColor = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripTextBoxSize = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->toolStripButtonMagnifyingGlassMinus = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButtonMagnifyingGlassPlus = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripTextBoxScale = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->toolStripButtonHideLayersTab = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButtonSettings = (gcnew System::Windows::Forms::ToolStripButton());
			this->panelMain->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pboxMain))->BeginInit();
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
			// panelLayers
			// 
			this->panelLayers->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panelLayers->AutoScroll = true;
			this->panelLayers->Location = System::Drawing::Point(1075, 36);
			this->panelLayers->Name = L"panelLayers";
			this->panelLayers->Size = System::Drawing::Size(300, 583);
			this->panelLayers->TabIndex = 4;
			// 
			// buttonAdd
			// 
			this->buttonAdd->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->buttonAdd->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonAdd.BackgroundImage")));
			this->buttonAdd->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->buttonAdd->Location = System::Drawing::Point(1075, 626);
			this->buttonAdd->Name = L"buttonAdd";
			this->buttonAdd->Size = System::Drawing::Size(67, 60);
			this->buttonAdd->TabIndex = 5;
			this->buttonAdd->UseVisualStyleBackColor = true;
			this->buttonAdd->Click += gcnew System::EventHandler(this, &Form1::buttonAdd_Click);
			// 
			// buttonDelete
			// 
			this->buttonDelete->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->buttonDelete->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonDelete.BackgroundImage")));
			this->buttonDelete->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->buttonDelete->Location = System::Drawing::Point(1148, 626);
			this->buttonDelete->Name = L"buttonDelete";
			this->buttonDelete->Size = System::Drawing::Size(67, 60);
			this->buttonDelete->TabIndex = 6;
			this->buttonDelete->UseVisualStyleBackColor = true;
			this->buttonDelete->Click += gcnew System::EventHandler(this, &Form1::buttonDelete_Click);
			// 
			// buttonMerge
			// 
			this->buttonMerge->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->buttonMerge->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonMerge.BackgroundImage")));
			this->buttonMerge->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->buttonMerge->Location = System::Drawing::Point(1221, 625);
			this->buttonMerge->Name = L"buttonMerge";
			this->buttonMerge->Size = System::Drawing::Size(67, 60);
			this->buttonMerge->TabIndex = 7;
			this->buttonMerge->UseVisualStyleBackColor = true;
			this->buttonMerge->Click += gcnew System::EventHandler(this, &Form1::buttonMerge_Click);
			// 
			// buttonMoveUp
			// 
			this->buttonMoveUp->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->buttonMoveUp->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonMoveUp.BackgroundImage")));
			this->buttonMoveUp->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->buttonMoveUp->Location = System::Drawing::Point(1294, 625);
			this->buttonMoveUp->Name = L"buttonMoveUp";
			this->buttonMoveUp->Size = System::Drawing::Size(81, 30);
			this->buttonMoveUp->TabIndex = 8;
			this->buttonMoveUp->UseVisualStyleBackColor = true;
			this->buttonMoveUp->Click += gcnew System::EventHandler(this, &Form1::buttonMoveUp_Click);
			// 
			// buttonMoveDown
			// 
			this->buttonMoveDown->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->buttonMoveDown->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonMoveDown.BackgroundImage")));
			this->buttonMoveDown->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->buttonMoveDown->Location = System::Drawing::Point(1294, 656);
			this->buttonMoveDown->Name = L"buttonMoveDown";
			this->buttonMoveDown->Size = System::Drawing::Size(81, 30);
			this->buttonMoveDown->TabIndex = 9;
			this->buttonMoveDown->UseVisualStyleBackColor = true;
			this->buttonMoveDown->Click += gcnew System::EventHandler(this, &Form1::buttonMoveDown_Click);
			// 
			// toolStrip1
			// 
			this->toolStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(28) {
				this->ToolStripButtonCreateNew,
					this->toolStripButtonOpen, this->toolStripButtonSave, this->печатьToolStripButton, this->справкаToolStripButton, this->toolStripSeparator,
					this->toolStripButtonResize, this->ToolStripButtonCut, this->ToolStripButtonCopy, this->ToolStripButtonPaste, this->toolStripSeparator1,
					this->toolStripButtonSelection, this->toolStripButtonTranslation, this->toolStripButtonPencilTool, this->toolStripButtonBucketTool,
					this->toolStripButtonRectangleTool, this->toolStripButtonEraserTool, this->toolStripButtonText, this->toolStripButton5, this->toolStripButtonColorPicker,
					this->toolStripSeparator2, this->toolStripButtonCurrentColor, this->toolStripTextBoxSize, this->toolStripButtonMagnifyingGlassMinus,
					this->toolStripButtonMagnifyingGlassPlus, this->toolStripTextBoxScale, this->toolStripButtonHideLayersTab, this->toolStripButtonSettings
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
			this->ToolStripButtonCreateNew->Text = L"&Создать";
			this->ToolStripButtonCreateNew->Click += gcnew System::EventHandler(this, &Form1::ToolStripButtonCreateNew_Click);
			// 
			// toolStripButtonOpen
			// 
			this->toolStripButtonOpen->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButtonOpen->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButtonOpen.Image")));
			this->toolStripButtonOpen->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButtonOpen->Name = L"toolStripButtonOpen";
			this->toolStripButtonOpen->Size = System::Drawing::Size(34, 28);
			this->toolStripButtonOpen->Text = L"&Открыть";
			this->toolStripButtonOpen->Click += gcnew System::EventHandler(this, &Form1::toolStripButtonOpen_Click);
			// 
			// toolStripButtonSave
			// 
			this->toolStripButtonSave->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButtonSave->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButtonSave.Image")));
			this->toolStripButtonSave->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButtonSave->Name = L"toolStripButtonSave";
			this->toolStripButtonSave->Size = System::Drawing::Size(34, 28);
			this->toolStripButtonSave->Text = L"&Сохранить";
			this->toolStripButtonSave->Click += gcnew System::EventHandler(this, &Form1::toolStripButtonSave_Click);
			// 
			// печатьToolStripButton
			// 
			this->печатьToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->печатьToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"печатьToolStripButton.Image")));
			this->печатьToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->печатьToolStripButton->Name = L"печатьToolStripButton";
			this->печатьToolStripButton->Size = System::Drawing::Size(34, 28);
			this->печатьToolStripButton->Text = L"&Печать";
			// 
			// справкаToolStripButton
			// 
			this->справкаToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->справкаToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"справкаToolStripButton.Image")));
			this->справкаToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->справкаToolStripButton->Name = L"справкаToolStripButton";
			this->справкаToolStripButton->Size = System::Drawing::Size(34, 28);
			this->справкаToolStripButton->Text = L"Спр&авка";
			// 
			// toolStripSeparator
			// 
			this->toolStripSeparator->Name = L"toolStripSeparator";
			this->toolStripSeparator->Size = System::Drawing::Size(6, 33);
			// 
			// toolStripButtonResize
			// 
			this->toolStripButtonResize->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButtonResize->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButtonResize.Image")));
			this->toolStripButtonResize->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButtonResize->Name = L"toolStripButtonResize";
			this->toolStripButtonResize->Size = System::Drawing::Size(34, 28);
			this->toolStripButtonResize->Text = L"toolStripButton1";
			this->toolStripButtonResize->ToolTipText = L"Изменить размер";
			this->toolStripButtonResize->Click += gcnew System::EventHandler(this, &Form1::toolStripButtonResize_Click);
			// 
			// ToolStripButtonCut
			// 
			this->ToolStripButtonCut->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->ToolStripButtonCut->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ToolStripButtonCut.Image")));
			this->ToolStripButtonCut->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->ToolStripButtonCut->Name = L"ToolStripButtonCut";
			this->ToolStripButtonCut->Size = System::Drawing::Size(34, 28);
			this->ToolStripButtonCut->Text = L"В&ырезать";
			this->ToolStripButtonCut->Click += gcnew System::EventHandler(this, &Form1::ToolStripButtonCut_Click);
			// 
			// ToolStripButtonCopy
			// 
			this->ToolStripButtonCopy->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->ToolStripButtonCopy->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ToolStripButtonCopy.Image")));
			this->ToolStripButtonCopy->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->ToolStripButtonCopy->Name = L"ToolStripButtonCopy";
			this->ToolStripButtonCopy->Size = System::Drawing::Size(34, 28);
			this->ToolStripButtonCopy->Text = L"&Копировать";
			this->ToolStripButtonCopy->Click += gcnew System::EventHandler(this, &Form1::ToolStripButtonCopy_Click);
			// 
			// ToolStripButtonPaste
			// 
			this->ToolStripButtonPaste->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->ToolStripButtonPaste->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ToolStripButtonPaste.Image")));
			this->ToolStripButtonPaste->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->ToolStripButtonPaste->Name = L"ToolStripButtonPaste";
			this->ToolStripButtonPaste->Size = System::Drawing::Size(34, 28);
			this->ToolStripButtonPaste->Text = L"Вст&авка";
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
			this->toolStripButtonSelection->ToolTipText = L"Прямоугольное выделение";
			this->toolStripButtonSelection->Click += gcnew System::EventHandler(this, &Form1::toolStripButtonSelection_Click);
			// 
			// toolStripButtonTranslation
			// 
			this->toolStripButtonTranslation->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButtonTranslation->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButtonTranslation.Image")));
			this->toolStripButtonTranslation->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButtonTranslation->Name = L"toolStripButtonTranslation";
			this->toolStripButtonTranslation->Size = System::Drawing::Size(34, 28);
			this->toolStripButtonTranslation->Text = L"toolStripButton1";
			this->toolStripButtonTranslation->ToolTipText = L"Перемещение";
			this->toolStripButtonTranslation->Click += gcnew System::EventHandler(this, &Form1::toolStripButtonTranslation_Click);
			// 
			// toolStripButtonPencilTool
			// 
			this->toolStripButtonPencilTool->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButtonPencilTool->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButtonPencilTool.Image")));
			this->toolStripButtonPencilTool->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButtonPencilTool->Name = L"toolStripButtonPencilTool";
			this->toolStripButtonPencilTool->Size = System::Drawing::Size(34, 28);
			this->toolStripButtonPencilTool->Text = L"toolStripButton1";
			this->toolStripButtonPencilTool->ToolTipText = L"Карандаш";
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
			this->toolStripButtonBucketTool->ToolTipText = L"Заливка";
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
			this->toolStripButtonRectangleTool->ToolTipText = L"Прямоугольник";
			this->toolStripButtonRectangleTool->Click += gcnew System::EventHandler(this, &Form1::toolStripButtonRectangleTool_Click);
			// 
			// toolStripButtonEraserTool
			// 
			this->toolStripButtonEraserTool->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButtonEraserTool->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButtonEraserTool.Image")));
			this->toolStripButtonEraserTool->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButtonEraserTool->Name = L"toolStripButtonEraserTool";
			this->toolStripButtonEraserTool->Size = System::Drawing::Size(34, 28);
			this->toolStripButtonEraserTool->Text = L"Стёрка";
			this->toolStripButtonEraserTool->ToolTipText = L"Ластик";
			this->toolStripButtonEraserTool->Click += gcnew System::EventHandler(this, &Form1::toolStripButton4_Click);
			// 
			// toolStripButtonText
			// 
			this->toolStripButtonText->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButtonText->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButtonText.Image")));
			this->toolStripButtonText->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButtonText->Name = L"toolStripButtonText";
			this->toolStripButtonText->Size = System::Drawing::Size(34, 28);
			this->toolStripButtonText->Text = L"toolStripButton7";
			this->toolStripButtonText->ToolTipText = L"Текст";
			// 
			// toolStripButton5
			// 
			this->toolStripButton5->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton5.Image")));
			this->toolStripButton5->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton5->Name = L"toolStripButton5";
			this->toolStripButton5->Size = System::Drawing::Size(34, 28);
			this->toolStripButton5->Text = L"toolStripButton5";
			this->toolStripButton5->ToolTipText = L"Прямая";
			// 
			// toolStripButtonColorPicker
			// 
			this->toolStripButtonColorPicker->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButtonColorPicker->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButtonColorPicker.Image")));
			this->toolStripButtonColorPicker->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButtonColorPicker->Name = L"toolStripButtonColorPicker";
			this->toolStripButtonColorPicker->Size = System::Drawing::Size(34, 28);
			this->toolStripButtonColorPicker->Text = L"toolStripButton6";
			this->toolStripButtonColorPicker->ToolTipText = L"Пипетка";
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
			this->toolStripButtonCurrentColor->ToolTipText = L"Цвет";
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
			this->toolStripButtonMagnifyingGlassMinus->ToolTipText = L"Уменьшить масштаб";
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
			this->toolStripButtonMagnifyingGlassPlus->ToolTipText = L"Увеличить масштаб";
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
			// toolStripButtonHideLayersTab
			// 
			this->toolStripButtonHideLayersTab->Alignment = System::Windows::Forms::ToolStripItemAlignment::Right;
			this->toolStripButtonHideLayersTab->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButtonHideLayersTab->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButtonHideLayersTab.Image")));
			this->toolStripButtonHideLayersTab->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButtonHideLayersTab->Name = L"toolStripButtonHideLayersTab";
			this->toolStripButtonHideLayersTab->Size = System::Drawing::Size(34, 28);
			this->toolStripButtonHideLayersTab->Text = L"toolStripButtonHideLayersTab";
			this->toolStripButtonHideLayersTab->ToolTipText = L"Скрыть/Показать слои";
			this->toolStripButtonHideLayersTab->Click += gcnew System::EventHandler(this, &Form1::toolStripButtonHideLayersTab_Click);
			// 
			// toolStripButtonSettings
			// 
			this->toolStripButtonSettings->Alignment = System::Windows::Forms::ToolStripItemAlignment::Right;
			this->toolStripButtonSettings->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButtonSettings->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButtonSettings.Image")));
			this->toolStripButtonSettings->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButtonSettings->Name = L"toolStripButtonSettings";
			this->toolStripButtonSettings->Size = System::Drawing::Size(34, 28);
			this->toolStripButtonSettings->Text = L"toolStripButtonSettings";
			this->toolStripButtonSettings->ToolTipText = L"Настройки";
			this->toolStripButtonSettings->Click += gcnew System::EventHandler(this, &Form1::toolStripButtonSettings_Click);
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
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Form1::Form1_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->panelMain->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pboxMain))->EndInit();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		LayersController^ layersController;
		System::Collections::Generic::List<LayerTab^>^ layerTabs;
		ColorController^ colorController;

		Tool^ selectedTool;
		PencilTool^ pencilTool;
		RectangleTool^ rectangleTool;
		ColorPickerTool^ colorPickerTool;
		BucketTool^ bucketTool;
		EraserTool^ eraserTool;
		SelectionTool^ selectionTool;
		TransformTool^ transformTool;

		bool IsToolActive = false;

		bool IsSelectionActive = false;

		Brush^ backFillBrush = gcnew TextureBrush(Bitmap::FromFile(L"D:\\Projects\\Paint_Alpha\\Icons\\checkboardPattern2x2.png"), Drawing2D::WrapMode::Tile);

		float scale = 1.0f;

		PaintUserSettings^ userSettings;
		
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
		userSettings = gcnew PaintUserSettings();
		userSettings->Reload();

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
		eraserTool = gcnew EraserTool();
		selectionTool = gcnew SelectionTool();
		transformTool = gcnew TransformTool();

		selectedTool = pencilTool;

		safe_cast<TextureBrush^>(backFillBrush)->ScaleTransform(3, 3);

		panelMain->AutoScrollPosition = System::Drawing::Point(0, 0);
		pboxMain->ClientSize = ::Paint::canvasSize;
		if (userSettings->LayerOffsetOption == LayerOffset::Enabled) {
			pboxMain->Location = Point(pboxMain->Size.Width / 2, pboxMain->Size.Height / 2);
			pboxMain->ClientSize += System::Drawing::Size(pboxMain->ClientSize.Width / 2, pboxMain->ClientSize.Height / 2);
		}
		else {
			pboxMain->Location = Point(0, 0);
		}

		toolStripButtonCurrentColor->BackColor = ::Paint::colorController->ActiveColor;

		buttonAdd_Click(this, e);
		SetLayersPanelVisibility(userSettings->ShowLayersPanel);
	}

	private: System::Void panelMain_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		IsToolActive = true;
		System::Windows::Forms::MouseEventArgs^ r = 
			gcnew System::Windows::Forms::MouseEventArgs(e->Button, e->Clicks, (e->X - pboxMain->Location.X) / scale, 
				(e->Y - pboxMain->Location.Y) / scale, e->Delta);

		selectedTool->OnMouseDown(r);
	}
	private: System::Void panelMain_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		IsToolActive = false;
		System::Windows::Forms::MouseEventArgs^ r =
			gcnew System::Windows::Forms::MouseEventArgs(e->Button, e->Clicks, (e->X - pboxMain->Location.X) / scale,
				(e->Y - pboxMain->Location.Y) / scale, e->Delta);
		selectedTool->OnMouseUp(r);
		pboxMain->Invalidate(GetVisibleCanvasRect());
	}
	private: System::Void pboxMain_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		IsToolActive = true;
		System::Windows::Forms::MouseEventArgs^ r =
			gcnew System::Windows::Forms::MouseEventArgs(e->Button, e->Clicks, e->X / scale,
				e->Y / scale, e->Delta);

		selectedTool->OnMouseDown(r);
	}
	private: System::Void pboxMain_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		IsToolActive = false;
		System::Windows::Forms::MouseEventArgs^ r =
			gcnew System::Windows::Forms::MouseEventArgs(e->Button, e->Clicks, e->X / scale,
				e->Y / scale, e->Delta);
		selectedTool->OnMouseUp(r);

		pboxMain->Invalidate(GetVisibleCanvasRect());
	}
	private: System::Void pboxMain_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (IsToolActive) {
			System::Windows::Forms::MouseEventArgs^ r =
				gcnew System::Windows::Forms::MouseEventArgs(e->Button, e->Clicks, e->X / scale,
					e->Y / scale, e->Delta);
			System::Drawing::Rectangle updateRect = selectedTool->OnMouseMove(r);
			if (scale >= 1.0f) {
				updateRect.Width *= scale;
				updateRect.Height *= scale;
				updateRect.X *= scale;
				updateRect.Y *= scale;
				pboxMain->Invalidate(updateRect);
			}
			else pboxMain->Invalidate();
		}
	}
	private: System::Void panelMain_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (IsToolActive) {
			System::Windows::Forms::MouseEventArgs^ r =
				gcnew System::Windows::Forms::MouseEventArgs(e->Button, e->Clicks, (e->X - pboxMain->Location.X) / scale,
					(e->Y - pboxMain->Location.Y) / scale, e->Delta);
			System::Drawing::Rectangle updateRect = selectedTool->OnMouseMove(r);
			if (scale >= 1.0f) {
				updateRect.Width *= scale;
				updateRect.Height *= scale;
				updateRect.X *= scale;
				updateRect.Y *= scale;
				pboxMain->Invalidate(updateRect);
			}
			else pboxMain->Invalidate();
		}
	}

	System::Drawing::Rectangle GetVisibleCanvasRect() {
		System::Drawing::Rectangle rect(0, 0, ::Paint::canvasSize.Width * scale, ::Paint::canvasSize.Height * scale);
		if (pboxMain->Location.X < 0) rect.X = -pboxMain->Location.X;
		if (pboxMain->Location.Y < 0) rect.Y = -pboxMain->Location.Y;
		if (rect.Width > panelMain->ClientSize.Width)
		{
			if (-pboxMain->Location.X + panelMain->ClientSize.Width > rect.Width) 
				rect.Width = rect.Width + pboxMain->Location.X;
			else 
				rect.Width = panelMain->ClientSize.Width;
		}
		if (rect.Height > panelMain->ClientSize.Height)
		{
			if (-pboxMain->Location.Y + panelMain->ClientSize.Height > rect.Height)
				rect.Height = rect.Height + pboxMain->Location.Y;
			else
				rect.Height = panelMain->ClientSize.Height;
		}
		return rect;
	}

	System::Void FillBackground(System::Drawing::Graphics^ graphics) {
		graphics->FillRectangle(backFillBrush, GetVisibleCanvasRect());
	}

	private: System::Void pboxMain_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		FillBackground(e->Graphics);

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

		/*if (IsSelectionActive) {
			e->Graphics->ResetTransform();
			selectionTool->DrawGizmo(e->Graphics, scale);
			//e->Graphics->CompositingMode = System::Drawing::Drawing2D::CompositingMode::SourceCopy;
			//e->Graphics->FillEllipse(gcnew System::Drawing::SolidBrush(Color::Red));
		}*/

		if (::Paint::selectionRegion != nullptr) {
			e->Graphics->ResetTransform();
			e->Graphics->FillRegion(gcnew System::Drawing::SolidBrush(System::Drawing::Color::FromArgb(128, System::Drawing::Color::AliceBlue)), ::Paint::selectionRegion);
			Rectangle bounds = Rectangle::Truncate(::Paint::selectionRegion->GetBounds(e->Graphics));
			e->Graphics->DrawRectangle(selectionTool->pen, bounds.Left * scale, bounds.Top * scale, bounds.Width * scale, bounds.Height * scale);
		}
	}
	System::Void buttonLayer_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		LayerTab^ layerTab = static_cast<LayerTab^>(sender);
		int layerId = layerTab->layerId;
		layersController->SelectLayer(layerId);
		layerTab->button1->BackgroundImage = layersController->layers[layerId]->bitmap;
	}
	System::Void formLayerDoubleClick(System::Object^ sender, System::EventArgs^ e) {
		LayerTab^ layerTab = static_cast<LayerTab^>(sender);
		int layerId = layerTab->layerId;
		FormLayerSettings^ formLayerSetings = gcnew FormLayerSettings(layerTab->GetName(), 
			::Paint::layersController->layers[layerId]->opacity);
		if (formLayerSetings->ShowDialog() != System::Windows::Forms::DialogResult::OK) return;
		layerTab->SetName(formLayerSetings->layerName);
		::Paint::layersController->layers[layerId]->opacity = formLayerSetings->opacity;
	}

	private: System::Void buttonAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		panelLayers->AutoScrollPosition = System::Drawing::Point(0, 0);
		int layerId = layersController->layers->Count;
		layersController->AddLayer();
		LayerTab^ layerTab = gcnew LayerTab();
		layerTab->layerId = layerId;
		layerTab->SetName("Слой " + (layerTab->layerId + 1).ToString());
		layerTab->Location = System::Drawing::Point(0, layerId * layerTab->Size.Height);
		layerTab->buttonClick += gcnew System::EventHandler(this, &Form1::buttonLayer_Click);
		layerTab->formDoubleClick += gcnew System::EventHandler(this, &Form1::formLayerDoubleClick);
		layerTab->button1->BackgroundImage = layersController->layers[layerId]->bitmap;
		panelLayers->Controls->Add(layerTab);
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
		if (::Paint::layersController->layers->Count < 2) return;
		int layerId = layersController->activeLayer;

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

	System::Void ClearAllLayers() {
		panelLayers->AutoScrollPosition = System::Drawing::Point(0, 0);
		panelLayers->Controls->Clear();
		layerTabs->Clear();
		::Paint::layersController->DeleteAllLayers();

		layersController->AddLayer();
		LayerTab^ layerTab = gcnew LayerTab();
		layerTab->layerId = 0;
		layerTab->SetName("Слой " + (layerTab->layerId + 1).ToString());
		layerTab->Location = System::Drawing::Point(0, 0 * layerTab->Size.Height);
		layerTab->buttonClick += gcnew System::EventHandler(this, &Form1::buttonLayer_Click);
		layerTab->formDoubleClick += gcnew System::EventHandler(this, &Form1::formLayerDoubleClick);
		layerTab->button1->BackgroundImage = layersController->layers[0]->bitmap;
		panelLayers->Controls->Add(layerTab);
		layerTabs->Add(layerTab);
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
		}
		toolStripButtonCurrentColor->BackColor = ::Paint::colorController->ActiveColor;
	}
	private: System::Void buttonToolPencil_Click(System::Object^ sender, System::EventArgs^ e) {
		selectedTool = pencilTool;
	}
	private: System::Void buttonToolRectangle_Click(System::Object^ sender, System::EventArgs^ e) {
		selectedTool = rectangleTool;
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
	private: System::Void toolStripButtonSelection_Click(System::Object^ sender, System::EventArgs^ e) {
		IsSelectionActive = !IsSelectionActive;
		selectedTool = selectionTool;
	}
	private: System::Void toolStripButton4_Click(System::Object^ sender, System::EventArgs^ e) {
		selectedTool = eraserTool;
	}
	private: System::Void toolStripButtonTranslation_Click(System::Object^ sender, System::EventArgs^ e) {
		selectedTool = transformTool;
	}
	private: System::Void toolStripButtonMagnifyingGlassMinus_Click(System::Object^ sender, System::EventArgs^ e) {
		scale -= 0.1f;
		if (scale <= 0.1f) scale = 0.1f;
		toolStripTextBoxScale->Text = scale.ToString("F1");
		UpdateScale();
	}
	private: System::Void toolStripButtonMagnifyingGlassPlus_Click(System::Object^ sender, System::EventArgs^ e) {
		scale += 0.1f;
		if (scale > 16.0f) scale = 16.0f;
		toolStripTextBoxScale->Text = scale.ToString("F1");
		UpdateScale();
	}

	private: void UpdateScale() {
		float percentX = (panelMain->AutoScrollPosition.X * -1.0) / panelMain->ClientSize.Width;
		float percentY = (panelMain->AutoScrollPosition.Y * -1.0) / panelMain->ClientSize.Height;

		panelMain->AutoScrollPosition = System::Drawing::Point(0, 0);

		pboxMain->ClientSize = System::Drawing::Size(::Paint::canvasSize.Width * scale, ::Paint::canvasSize.Height * scale);
		if (userSettings->LayerOffsetOption == LayerOffset::Enabled) {
			pboxMain->Location = Point(pboxMain->Size.Width / 2, pboxMain->Size.Height / 2);
			pboxMain->ClientSize += System::Drawing::Size(pboxMain->ClientSize.Width / 2, pboxMain->ClientSize.Height / 2);
		}
		else {
			pboxMain->Location = Point(0, 0);
		}

		toolStripButtonCurrentColor->BackColor = ::Paint::colorController->ActiveColor;
		panelMain->AutoScrollPosition = System::Drawing::Point(panelMain->ClientSize.Width * percentX, panelMain->ClientSize.Height * percentY);
	}
	private: System::Void ToolStripButtonCreateNew_Click(System::Object^ sender, System::EventArgs^ e) {
		FormCreateNew^ form = gcnew FormCreateNew(::Paint::canvasSize.Width, ::Paint::canvasSize.Height);
		if (form->ShowDialog() != Windows::Forms::DialogResult::OK) return;
		toolStripTextBoxScale->Text = "1";
		ClearAllLayers();
		ResizeImage(form->SizeOfNewImage);
		panelMain->Invalidate();
	}
	void ResizeImage(System::Drawing::Size newSize) {
		::Paint::canvasSize = newSize;
		::Paint::layersController->Resize();

		panelMain->AutoScrollPosition = System::Drawing::Point(0, 0);
		pboxMain->ClientSize = ::Paint::canvasSize;
		if (userSettings->LayerOffsetOption == LayerOffset::Enabled) {
			pboxMain->Location = Point(pboxMain->Size.Width / 2, pboxMain->Size.Height / 2);
			pboxMain->ClientSize += System::Drawing::Size(pboxMain->ClientSize.Width / 2, pboxMain->ClientSize.Height / 2);
		}
		else {
			pboxMain->Location = Point(0, 0);
		}

		toolStripButtonCurrentColor->BackColor = ::Paint::colorController->ActiveColor;
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
		else if (Clipboard::ContainsFileDropList()) // COPY FROM FILE EXPLORER
		{
			auto fileList = Clipboard::GetFileDropList();

			if (fileList->Count > 0)
			{
				String^ filePath = fileList[0];

				String^ extension = System::IO::Path::GetExtension(filePath)->ToLower();
				if (extension == ".jpg" || extension == ".jpeg" || extension == ".png" ||
					extension == ".bmp" || extension == ".gif")
				{
					try
					{
						clipboardImage = Image::FromFile(filePath);
					}
					catch (Exception^ ex)
					{
						MessageBox::Show("Ошибка загрузки изображения", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
				}
				else
				{
					MessageBox::Show("Формат загружаемого файла не поддерживается", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
			else
			{
				MessageBox::Show("В буфере обмена отсутствует изображение", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
		}
		else
		{
			MessageBox::Show("В буфере обмена отсутствует изображение", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
		AddImage(clipboardImage, userSettings->PasteOption == PasteMode::ToNewLayer);
		
	}
	System::Void AddImage(System::Drawing::Image^ image, bool createLayer) {
		if (image->Width > ::Paint::canvasSize.Width || image->Height > ::Paint::canvasSize.Height) {
			FormPasteFromClipboard^ formPasteFromClipBoard = gcnew FormPasteFromClipboard();
			if (formPasteFromClipBoard->ShowDialog() != System::Windows::Forms::DialogResult::OK) return;
			if (formPasteFromClipBoard->pasteMode == FormPasteFromClipboard::PasteMode::IncreaseSize) {
				ResizeImage(image->Size);
			}
		}
		if (createLayer)
		{
			// this adds new layer
			buttonAdd_Click(this, gcnew System::EventArgs);
			::Paint::layersController->SelectLayer(::Paint::layersController->layers->Count - 1);
		}
		Graphics^ g = Graphics::FromImage(::Paint::layersController->ActiveLayer->bitmap);
		g->DrawImage(image, 0, 0, image->Width, image->Height);
		delete g;
	}
	private: System::Void ToolStripButtonCopy_Click(System::Object^ sender, System::EventArgs^ e) {
		if (::Paint::selectionRegion == nullptr)
		{
			Util::CopyToClipboard(::Paint::layersController->ActiveLayer->bitmap);
		}
		else 
		{
			System::Drawing::Rectangle bounds =
				System::Drawing::Rectangle::Truncate(::Paint::selectionRegion->GetBounds(
					System::Drawing::Graphics::FromImage(::Paint::layersController->ActiveLayer->bitmap)));

			System::Drawing::Bitmap^ selectionBitmap = gcnew System::Drawing::Bitmap(bounds.Width, bounds.Height);

			Graphics^ g = Graphics::FromImage(selectionBitmap);
			g->DrawImage(::Paint::layersController->ActiveLayer->bitmap, -bounds.X, -bounds.Y);
			delete g;

			Util::CopyToClipboard(selectionBitmap);
		}
	}
	
	private: System::Void toolStripButtonHideLayersTab_Click(System::Object^ sender, System::EventArgs^ e) {
		userSettings->ShowLayersPanel = !userSettings->ShowLayersPanel;
		SetLayersPanelVisibility(userSettings->ShowLayersPanel);
	}
	System::Void SetLayersPanelVisibility(bool value) {
		if (value) {
			if (!panelLayers->Visible) panelMain->Size = System::Drawing::Size(panelMain->Size.Width - panelLayers->Width, panelMain->Size.Height);
			panelLayers->Visible = true;
			buttonAdd->Visible = true;
			buttonDelete->Visible = true;
			buttonMerge->Visible = true;
			buttonMoveUp->Visible = true;
			buttonMoveDown->Visible = true;
		}
		else {
			if (panelLayers->Visible) panelMain->Size = System::Drawing::Size(panelMain->Size.Width + panelLayers->Width, panelMain->Size.Height);
			panelLayers->Visible = false;
			buttonAdd->Visible = false;
			buttonDelete->Visible = false;
			buttonMerge->Visible = false;
			buttonMoveUp->Visible = false;
			buttonMoveDown->Visible = false;
		}
	}

	private: System::Void toolStripButtonSave_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::SaveFileDialog^ saveDialog = gcnew System::Windows::Forms::SaveFileDialog();
		saveDialog->Filter = "PNG Files|*.png|JPEG Files|*.jpg|Bitmap Files|*.bmp|All Files|*.*";
		saveDialog->DefaultExt = "png";
		saveDialog->RestoreDirectory = true;

		if (saveDialog->ShowDialog() != System::Windows::Forms::DialogResult::OK) return;

		try {
			System::Drawing::Bitmap^ bitmap = gcnew System::Drawing::Bitmap(::Paint::canvasSize.Width, ::Paint::canvasSize.Height);
			System::Drawing::Graphics^ graphics = System::Drawing::Graphics::FromImage(bitmap);
			::Paint::layersController->DrawBottomLayers(graphics);
			::Paint::layersController->DrawSelectedLayer(graphics);
			::Paint::layersController->DrawTopLayers(graphics);
			delete graphics;

			bitmap->Save(saveDialog->FileName);
		}
		catch (System::Exception^ ex) {
			MessageBox::Show("Ошибка сохранения файла: " + ex->Message, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void toolStripButtonOpen_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::OpenFileDialog^ openDialog = gcnew System::Windows::Forms::OpenFileDialog();
		openDialog->Filter = "Image Files|*.png;*.jpg;*.bmp|All Files|*.*";
		openDialog->RestoreDirectory = true;

		if (openDialog->ShowDialog() != System::Windows::Forms::DialogResult::OK) return;

		try {
			System::Drawing::Image^ loadedImage = System::Drawing::Image::FromFile(openDialog->FileName);
			::Paint::canvasSize = System::Drawing::Size(loadedImage->Width, loadedImage->Height);
			ClearAllLayers();
			AddImage(loadedImage, false);
		}
		catch (System::Exception^ ex) {
			MessageBox::Show("Ошибка загрузки файла: " + ex->Message, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void toolStripButtonResize_Click(System::Object^ sender, System::EventArgs^ e) {
		FormCreateNew^ form = gcnew FormCreateNew(::Paint::canvasSize.Width, ::Paint::canvasSize.Height);
		form->Text = L"Размер изображения";
		if (form->ShowDialog() != Windows::Forms::DialogResult::OK) return;
		ResizeImage(form->SizeOfNewImage);
	}
	private: System::Void ToolStripButtonCut_Click(System::Object^ sender, System::EventArgs^ e) {
		if (::Paint::selectionRegion == nullptr) return;
		System::Drawing::Rectangle bounds = 
			System::Drawing::Rectangle::Truncate(::Paint::selectionRegion->GetBounds(
				System::Drawing::Graphics::FromImage(::Paint::layersController->ActiveLayer->bitmap)));

		System::Drawing::Bitmap^ selectionBitmap = gcnew System::Drawing::Bitmap(bounds.Width, bounds.Height);
		
		Graphics^ g = Graphics::FromImage(selectionBitmap);
		g->DrawImage(::Paint::layersController->ActiveLayer->bitmap, -bounds.X, -bounds.Y);
		delete g;

		Util::CopyToClipboard(selectionBitmap);

		System::Drawing::Graphics^ activeLayerG = System::Drawing::Graphics::FromImage(::Paint::layersController->ActiveLayer->bitmap);
		activeLayerG->CompositingMode = System::Drawing::Drawing2D::CompositingMode::SourceCopy;
		activeLayerG->FillRegion(gcnew System::Drawing::SolidBrush(System::Drawing::Color::Transparent), ::Paint::selectionRegion);
		delete activeLayerG;
		pboxMain->Invalidate(::Paint::selectionRegion);
	}

	protected: virtual bool ProcessCmdKey(Message% msg, Keys keyData) override
	{
		if (keyData == (Keys::Control | Keys::S)) // Ctrl + S
		{
			toolStripButtonSave_Click(toolStripButtonSave, gcnew System::EventArgs());
			return true; // Indicate the key press was handled
		}
		else if (keyData == (Keys::Control | Keys::O)) // Ctrl + O
		{
			toolStripButtonOpen_Click(toolStripButtonOpen, gcnew System::EventArgs());
			return true;
		}
		else if (keyData == (Keys::Control | Keys::V)) // Ctrl + V
		{
			ToolStripButtonPaste_Click(ToolStripButtonPaste, gcnew System::EventArgs());
			return true;
		}
		else if (keyData == (Keys::Control | Keys::C)) // Ctrl + C
		{
			ToolStripButtonCopy_Click(ToolStripButtonCopy, gcnew System::EventArgs());
			return true;
		}
		else if (keyData == (Keys::Control | Keys::X))
		{
			ToolStripButtonCut_Click(ToolStripButtonCut, gcnew System::EventArgs());
			return true;
		}
		return Form::ProcessCmdKey(msg, keyData);
	}
	private: System::Void toolStripButtonSettings_Click(System::Object^ sender, System::EventArgs^ e) {
		userSettings->Save();
		FormSettings^ form = gcnew FormSettings();
		form->ShowDialog();
		userSettings->Reload();
		SetLayersPanelVisibility(userSettings->ShowLayersPanel);
	}
	private: System::Void Form1_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		userSettings->Save();
	}
};
}
