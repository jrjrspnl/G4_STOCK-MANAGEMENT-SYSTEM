#pragma once

namespace G4STOCKMANAGEMENTSYSTEM {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CATEGORIES
	/// </summary>
	public ref class CATEGORIES : public System::Windows::Forms::Form
	{
	public:
		CATEGORIES(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CATEGORIES()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:




	private: System::Windows::Forms::Panel^ panel2;
	private: ComponentFactory::Krypton::Toolkit::KryptonTextBox^ kryptonTextBox2;

	private: System::Windows::Forms::Label^ label1;
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton4;
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton2;
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton1;
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton3;
	private: ComponentFactory::Krypton::Toolkit::KryptonDataGridView^ kryptonDataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CATEGORY;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DATE;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label9;
	private: ComponentFactory::Krypton::Toolkit::KryptonComboBox^ kryptonComboBox1;








	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            this->kryptonTextBox2 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonTextBox());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->kryptonButton4 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->kryptonButton2 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->kryptonButton1 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->kryptonButton3 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->kryptonDataGridView1 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonDataGridView());
            this->ID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->CATEGORY = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->DATE = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->kryptonComboBox1 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonComboBox());
            this->panel2->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kryptonDataGridView1))->BeginInit();
            this->panel1->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kryptonComboBox1))->BeginInit();
            this->SuspendLayout();
            // 
            // panel2
            // 
            this->panel2->BackColor = System::Drawing::Color::White;
            this->panel2->Controls->Add(this->kryptonComboBox1);
            this->panel2->Controls->Add(this->kryptonButton4);
            this->panel2->Controls->Add(this->kryptonButton2);
            this->panel2->Controls->Add(this->kryptonButton1);
            this->panel2->Controls->Add(this->kryptonButton3);
            this->panel2->Controls->Add(this->label1);
            this->panel2->Location = System::Drawing::Point(24, 17);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(764, 208);
            this->panel2->TabIndex = 20;
            // 
            // kryptonTextBox2
            // 
            this->kryptonTextBox2->Location = System::Drawing::Point(23, 44);
            this->kryptonTextBox2->Name = L"kryptonTextBox2";
            this->kryptonTextBox2->Size = System::Drawing::Size(193, 27);
            this->kryptonTextBox2->StateActive->Back->Color1 = System::Drawing::Color::WhiteSmoke;
            this->kryptonTextBox2->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonTextBox2->StateCommon->Border->Rounding = 5;
            this->kryptonTextBox2->TabIndex = 2;
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->BackColor = System::Drawing::Color::White;
            this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(21, 16);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(82, 16);
            this->label1->TabIndex = 5;
            this->label1->Text = L"Categories:";
            // 
            // kryptonButton4
            // 
            this->kryptonButton4->Location = System::Drawing::Point(40, 147);
            this->kryptonButton4->Name = L"kryptonButton4";
            this->kryptonButton4->OverrideDefault->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
                static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
            this->kryptonButton4->OverrideDefault->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
                static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
            this->kryptonButton4->OverrideDefault->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
                static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
            this->kryptonButton4->OverrideDefault->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
                static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
            this->kryptonButton4->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonButton4->Size = System::Drawing::Size(85, 40);
            this->kryptonButton4->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
                static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
            this->kryptonButton4->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
                static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
            this->kryptonButton4->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
                static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
            this->kryptonButton4->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
                static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
            this->kryptonButton4->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonButton4->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::White;
            this->kryptonButton4->StateCommon->Content->ShortText->Color2 = System::Drawing::Color::White;
            this->kryptonButton4->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->kryptonButton4->TabIndex = 18;
            this->kryptonButton4->Values->Text = L"Update";
            // 
            // kryptonButton2
            // 
            this->kryptonButton2->Location = System::Drawing::Point(40, 82);
            this->kryptonButton2->Name = L"kryptonButton2";
            this->kryptonButton2->OverrideDefault->Back->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton2->OverrideDefault->Back->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton2->OverrideDefault->Border->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton2->OverrideDefault->Border->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton2->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonButton2->OverrideFocus->Back->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton2->OverrideFocus->Back->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton2->OverrideFocus->Border->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton2->OverrideFocus->Border->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton2->OverrideFocus->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonButton2->Size = System::Drawing::Size(85, 40);
            this->kryptonButton2->StateCommon->Back->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton2->StateCommon->Back->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton2->StateCommon->Border->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton2->StateCommon->Border->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton2->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonButton2->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::White;
            this->kryptonButton2->StateCommon->Content->ShortText->Color2 = System::Drawing::Color::White;
            this->kryptonButton2->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->kryptonButton2->StateDisabled->Back->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton2->StateDisabled->Back->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton2->StateDisabled->Border->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton2->StateDisabled->Border->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton2->StateDisabled->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonButton2->StateNormal->Back->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton2->StateNormal->Back->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton2->StateNormal->Border->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton2->StateNormal->Border->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton2->StateNormal->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonButton2->StatePressed->Back->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton2->StatePressed->Back->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton2->StatePressed->Border->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton2->StatePressed->Border->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton2->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonButton2->StatePressed->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->kryptonButton2->StateTracking->Back->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton2->StateTracking->Back->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton2->StateTracking->Border->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton2->StateTracking->Border->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton2->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonButton2->TabIndex = 17;
            this->kryptonButton2->Values->Text = L"Add";
            // 
            // kryptonButton1
            // 
            this->kryptonButton1->Cursor = System::Windows::Forms::Cursors::Arrow;
            this->kryptonButton1->Location = System::Drawing::Point(153, 82);
            this->kryptonButton1->Name = L"kryptonButton1";
            this->kryptonButton1->OverrideDefault->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)),
                static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
            this->kryptonButton1->OverrideDefault->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)),
                static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
            this->kryptonButton1->OverrideDefault->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)),
                static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
            this->kryptonButton1->OverrideDefault->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)),
                static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
            this->kryptonButton1->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonButton1->Size = System::Drawing::Size(85, 40);
            this->kryptonButton1->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)),
                static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
            this->kryptonButton1->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)),
                static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
            this->kryptonButton1->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)),
                static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
            this->kryptonButton1->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)),
                static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
            this->kryptonButton1->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonButton1->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::White;
            this->kryptonButton1->StateCommon->Content->ShortText->Color2 = System::Drawing::Color::White;
            this->kryptonButton1->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->kryptonButton1->TabIndex = 16;
            this->kryptonButton1->Values->Text = L"Delete";
            // 
            // kryptonButton3
            // 
            this->kryptonButton3->Location = System::Drawing::Point(153, 147);
            this->kryptonButton3->Name = L"kryptonButton3";
            this->kryptonButton3->OverrideDefault->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
            this->kryptonButton3->OverrideDefault->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
            this->kryptonButton3->OverrideDefault->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
            this->kryptonButton3->OverrideDefault->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
            this->kryptonButton3->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonButton3->Size = System::Drawing::Size(85, 40);
            this->kryptonButton3->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
            this->kryptonButton3->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
            this->kryptonButton3->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
            this->kryptonButton3->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
            this->kryptonButton3->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonButton3->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::White;
            this->kryptonButton3->StateCommon->Content->ShortText->Color2 = System::Drawing::Color::White;
            this->kryptonButton3->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->kryptonButton3->TabIndex = 15;
            this->kryptonButton3->Values->Text = L"CLEAR";
            // 
            // kryptonDataGridView1
            // 
            this->kryptonDataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->kryptonDataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
                this->ID,
                    this->CATEGORY, this->DATE
            });
            this->kryptonDataGridView1->Location = System::Drawing::Point(41, 292);
            this->kryptonDataGridView1->Name = L"kryptonDataGridView1";
            this->kryptonDataGridView1->Size = System::Drawing::Size(722, 284);
            this->kryptonDataGridView1->StateCommon->Background->Color1 = System::Drawing::Color::Gainsboro;
            this->kryptonDataGridView1->StateCommon->Background->Color2 = System::Drawing::Color::Gainsboro;
            this->kryptonDataGridView1->StateCommon->BackStyle = ComponentFactory::Krypton::Toolkit::PaletteBackStyle::GridBackgroundList;
            this->kryptonDataGridView1->StateCommon->DataCell->Back->Color1 = System::Drawing::Color::White;
            this->kryptonDataGridView1->StateCommon->DataCell->Back->Color2 = System::Drawing::Color::White;
            this->kryptonDataGridView1->StateCommon->HeaderColumn->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
            this->kryptonDataGridView1->StateCommon->HeaderColumn->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
            this->kryptonDataGridView1->StateCommon->HeaderColumn->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
            this->kryptonDataGridView1->StateCommon->HeaderColumn->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
            this->kryptonDataGridView1->StateCommon->HeaderColumn->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonDataGridView1->TabIndex = 21;
            // 
            // ID
            // 
            this->ID->HeaderText = L"ID";
            this->ID->Name = L"ID";
            this->ID->Width = 238;
            // 
            // CATEGORY
            // 
            this->CATEGORY->HeaderText = L"CATEGORY";
            this->CATEGORY->Name = L"CATEGORY";
            this->CATEGORY->Width = 238;
            // 
            // DATE
            // 
            this->DATE->HeaderText = L"DATE";
            this->DATE->Name = L"DATE";
            this->DATE->Width = 244;
            // 
            // panel1
            // 
            this->panel1->BackColor = System::Drawing::Color::White;
            this->panel1->Controls->Add(this->label9);
            this->panel1->Location = System::Drawing::Point(24, 243);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(764, 347);
            this->panel1->TabIndex = 22;
            // 
            // label9
            // 
            this->label9->AutoSize = true;
            this->label9->BackColor = System::Drawing::Color::Transparent;
            this->label9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label9->Location = System::Drawing::Point(19, 13);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(141, 23);
            this->label9->TabIndex = 19;
            this->label9->Text = L"All Categories";
            // 
            // kryptonComboBox1
            // 
            this->kryptonComboBox1->DropDownWidth = 117;
            this->kryptonComboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Admin", L"Employee" });
            this->kryptonComboBox1->Location = System::Drawing::Point(23, 35);
            this->kryptonComboBox1->Name = L"kryptonComboBox1";
            this->kryptonComboBox1->Size = System::Drawing::Size(237, 25);
            this->kryptonComboBox1->StateActive->ComboBox->Back->Color1 = System::Drawing::Color::WhiteSmoke;
            this->kryptonComboBox1->StateActive->ComboBox->Border->Color1 = System::Drawing::Color::LightGray;
            this->kryptonComboBox1->StateActive->ComboBox->Border->Color2 = System::Drawing::Color::LightGray;
            this->kryptonComboBox1->StateActive->ComboBox->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonComboBox1->StateActive->ComboBox->Border->Rounding = 5;
            this->kryptonComboBox1->TabIndex = 19;
            // 
            // CATEGORIES
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::WhiteSmoke;
            this->ClientSize = System::Drawing::Size(809, 605);
            this->Controls->Add(this->kryptonDataGridView1);
            this->Controls->Add(this->panel2);
            this->Controls->Add(this->panel1);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
            this->Name = L"CATEGORIES";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"CATEGORIES";
            this->panel2->ResumeLayout(false);
            this->panel2->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kryptonDataGridView1))->EndInit();
            this->panel1->ResumeLayout(false);
            this->panel1->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kryptonComboBox1))->EndInit();
            this->ResumeLayout(false);

        }
#pragma endregion
	};
}
