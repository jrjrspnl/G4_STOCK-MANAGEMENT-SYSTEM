#pragma once

namespace G4STOCKMANAGEMENTSYSTEM {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ORDERS
	/// </summary>
	public ref class ORDERS : public System::Windows::Forms::Form
	{
	public:
		ORDERS(void)
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
		~ORDERS()
		{
			if (components)
			{
				delete components;
			}
		}
    private: System::Windows::Forms::Panel^ panel2;
    protected:
    private: ComponentFactory::Krypton::Toolkit::KryptonComboBox^ kryptonComboBox1;

    private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton2;
    private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton1;
    private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton3;
    private: System::Windows::Forms::Label^ label1;
    private: ComponentFactory::Krypton::Toolkit::KryptonComboBox^ kryptonComboBox2;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Label^ label2;
    private: ComponentFactory::Krypton::Toolkit::KryptonNumericUpDown^ kryptonNumericUpDown1;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::Panel^ panel1;
    private: System::Windows::Forms::Label^ label9;
    private: ComponentFactory::Krypton::Toolkit::KryptonDataGridView^ kryptonDataGridView1;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
    private: System::Windows::Forms::Panel^ panel3;
    private: ComponentFactory::Krypton::Toolkit::KryptonDataGridView^ kryptonDataGridView2;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column10;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column11;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column12;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column13;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column14;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column15;
    private: System::Windows::Forms::Label^ label8;
    private: System::Windows::Forms::Label^ label13;
    private: System::Windows::Forms::Label^ label14;
    private: System::Windows::Forms::Label^ label12;
    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::Label^ label10;
    private: System::Windows::Forms::Label^ label11;
    private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton5;
    private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton4;

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
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->kryptonButton3 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->kryptonButton1 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->kryptonButton2 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->kryptonNumericUpDown1 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonNumericUpDown());
            this->kryptonComboBox2 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonComboBox());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->kryptonComboBox1 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonComboBox());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->kryptonDataGridView1 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonDataGridView());
            this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->panel3 = (gcnew System::Windows::Forms::Panel());
            this->kryptonButton5 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->kryptonButton4 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->label13 = (gcnew System::Windows::Forms::Label());
            this->label14 = (gcnew System::Windows::Forms::Label());
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->label11 = (gcnew System::Windows::Forms::Label());
            this->kryptonDataGridView2 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonDataGridView());
            this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Column12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Column13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Column14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Column15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->panel2->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kryptonComboBox2))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kryptonComboBox1))->BeginInit();
            this->panel1->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kryptonDataGridView1))->BeginInit();
            this->panel3->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kryptonDataGridView2))->BeginInit();
            this->SuspendLayout();
            // 
            // panel2
            // 
            this->panel2->BackColor = System::Drawing::Color::White;
            this->panel2->Controls->Add(this->label7);
            this->panel2->Controls->Add(this->kryptonButton3);
            this->panel2->Controls->Add(this->kryptonButton1);
            this->panel2->Controls->Add(this->label6);
            this->panel2->Controls->Add(this->label5);
            this->panel2->Controls->Add(this->kryptonButton2);
            this->panel2->Controls->Add(this->kryptonNumericUpDown1);
            this->panel2->Controls->Add(this->kryptonComboBox2);
            this->panel2->Controls->Add(this->label4);
            this->panel2->Controls->Add(this->label3);
            this->panel2->Controls->Add(this->label2);
            this->panel2->Controls->Add(this->kryptonComboBox1);
            this->panel2->Controls->Add(this->label1);
            this->panel2->Location = System::Drawing::Point(24, 17);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(448, 264);
            this->panel2->TabIndex = 21;
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->BackColor = System::Drawing::Color::White;
            this->label7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label7->Location = System::Drawing::Point(235, 93);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(22, 17);
            this->label7->TabIndex = 28;
            this->label7->Text = L"10";
            // 
            // kryptonButton3
            // 
            this->kryptonButton3->Location = System::Drawing::Point(253, 203);
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
            // kryptonButton1
            // 
            this->kryptonButton1->Cursor = System::Windows::Forms::Cursors::Arrow;
            this->kryptonButton1->Location = System::Drawing::Point(140, 203);
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
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->BackColor = System::Drawing::Color::White;
            this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label6->Location = System::Drawing::Point(232, 34);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(57, 17);
            this->label6->TabIndex = 27;
            this->label6->Text = L"Tinapay";
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->BackColor = System::Drawing::Color::White;
            this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label5->Location = System::Drawing::Point(21, 123);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(67, 16);
            this->label5->TabIndex = 26;
            this->label5->Text = L"Quantity:";
            // 
            // kryptonButton2
            // 
            this->kryptonButton2->Location = System::Drawing::Point(23, 203);
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
            // kryptonNumericUpDown1
            // 
            this->kryptonNumericUpDown1->Location = System::Drawing::Point(23, 144);
            this->kryptonNumericUpDown1->Name = L"kryptonNumericUpDown1";
            this->kryptonNumericUpDown1->Size = System::Drawing::Size(177, 26);
            this->kryptonNumericUpDown1->StateActive->Back->Color1 = System::Drawing::Color::WhiteSmoke;
            this->kryptonNumericUpDown1->StateActive->Border->Color1 = System::Drawing::Color::LightGray;
            this->kryptonNumericUpDown1->StateActive->Border->Color2 = System::Drawing::Color::LightGray;
            this->kryptonNumericUpDown1->StateActive->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonNumericUpDown1->StateActive->Border->Rounding = 5;
            this->kryptonNumericUpDown1->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonNumericUpDown1->TabIndex = 25;
            // 
            // kryptonComboBox2
            // 
            this->kryptonComboBox2->DropDownWidth = 117;
            this->kryptonComboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Admin", L"Employee" });
            this->kryptonComboBox2->Location = System::Drawing::Point(23, 90);
            this->kryptonComboBox2->Name = L"kryptonComboBox2";
            this->kryptonComboBox2->Size = System::Drawing::Size(177, 25);
            this->kryptonComboBox2->StateActive->ComboBox->Back->Color1 = System::Drawing::Color::WhiteSmoke;
            this->kryptonComboBox2->StateActive->ComboBox->Border->Color1 = System::Drawing::Color::LightGray;
            this->kryptonComboBox2->StateActive->ComboBox->Border->Color2 = System::Drawing::Color::LightGray;
            this->kryptonComboBox2->StateActive->ComboBox->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonComboBox2->StateActive->ComboBox->Border->Rounding = 5;
            this->kryptonComboBox2->TabIndex = 23;
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->BackColor = System::Drawing::Color::White;
            this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label4->Location = System::Drawing::Point(20, 71);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(77, 16);
            this->label4->TabIndex = 22;
            this->label4->Text = L"Product ID:";
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->BackColor = System::Drawing::Color::White;
            this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->Location = System::Drawing::Point(235, 73);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(43, 16);
            this->label3->TabIndex = 21;
            this->label3->Text = L"Price:";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->BackColor = System::Drawing::Color::White;
            this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->Location = System::Drawing::Point(232, 17);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(60, 16);
            this->label2->TabIndex = 20;
            this->label2->Text = L"Product:";
            // 
            // kryptonComboBox1
            // 
            this->kryptonComboBox1->DropDownWidth = 117;
            this->kryptonComboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Admin", L"Employee" });
            this->kryptonComboBox1->Location = System::Drawing::Point(23, 34);
            this->kryptonComboBox1->Name = L"kryptonComboBox1";
            this->kryptonComboBox1->Size = System::Drawing::Size(177, 25);
            this->kryptonComboBox1->StateActive->ComboBox->Back->Color1 = System::Drawing::Color::WhiteSmoke;
            this->kryptonComboBox1->StateActive->ComboBox->Border->Color1 = System::Drawing::Color::LightGray;
            this->kryptonComboBox1->StateActive->ComboBox->Border->Color2 = System::Drawing::Color::LightGray;
            this->kryptonComboBox1->StateActive->ComboBox->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonComboBox1->StateActive->ComboBox->Border->Rounding = 5;
            this->kryptonComboBox1->TabIndex = 19;
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->BackColor = System::Drawing::Color::White;
            this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(21, 15);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(72, 16);
            this->label1->TabIndex = 5;
            this->label1->Text = L"Category:";
            // 
            // panel1
            // 
            this->panel1->BackColor = System::Drawing::Color::White;
            this->panel1->Controls->Add(this->kryptonDataGridView1);
            this->panel1->Controls->Add(this->label9);
            this->panel1->Location = System::Drawing::Point(24, 292);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(448, 289);
            this->panel1->TabIndex = 22;
            // 
            // kryptonDataGridView1
            // 
            this->kryptonDataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->kryptonDataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
                this->Column1,
                    this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column8, this->Column9
            });
            this->kryptonDataGridView1->Location = System::Drawing::Point(21, 52);
            this->kryptonDataGridView1->Name = L"kryptonDataGridView1";
            this->kryptonDataGridView1->Size = System::Drawing::Size(406, 220);
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
            this->kryptonDataGridView1->TabIndex = 18;
            // 
            // Column1
            // 
            this->Column1->HeaderText = L"ID";
            this->Column1->Name = L"Column1";
            this->Column1->Width = 75;
            // 
            // Column2
            // 
            this->Column2->HeaderText = L"ProductID";
            this->Column2->Name = L"Column2";
            this->Column2->Width = 75;
            // 
            // Column3
            // 
            this->Column3->HeaderText = L"ProductName";
            this->Column3->Name = L"Column3";
            this->Column3->Width = 75;
            // 
            // Column4
            // 
            this->Column4->HeaderText = L"Category";
            this->Column4->Name = L"Column4";
            this->Column4->Width = 75;
            // 
            // Column5
            // 
            this->Column5->HeaderText = L"Price";
            this->Column5->Name = L"Column5";
            this->Column5->Width = 75;
            // 
            // Column6
            // 
            this->Column6->HeaderText = L"Stock";
            this->Column6->Name = L"Column6";
            this->Column6->Width = 75;
            // 
            // Column7
            // 
            this->Column7->HeaderText = L"ImagePath";
            this->Column7->Name = L"Column7";
            this->Column7->Width = 75;
            // 
            // Column8
            // 
            this->Column8->HeaderText = L"Status";
            this->Column8->Name = L"Column8";
            this->Column8->Width = 75;
            // 
            // Column9
            // 
            this->Column9->HeaderText = L"Date";
            this->Column9->Name = L"Column9";
            this->Column9->Width = 83;
            // 
            // label9
            // 
            this->label9->AutoSize = true;
            this->label9->BackColor = System::Drawing::Color::Transparent;
            this->label9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label9->Location = System::Drawing::Point(19, 13);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(118, 23);
            this->label9->TabIndex = 15;
            this->label9->Text = L"All Products";
            // 
            // panel3
            // 
            this->panel3->BackColor = System::Drawing::Color::White;
            this->panel3->Controls->Add(this->kryptonButton5);
            this->panel3->Controls->Add(this->kryptonButton4);
            this->panel3->Controls->Add(this->label13);
            this->panel3->Controls->Add(this->label14);
            this->panel3->Controls->Add(this->label12);
            this->panel3->Controls->Add(this->textBox1);
            this->panel3->Controls->Add(this->label10);
            this->panel3->Controls->Add(this->label8);
            this->panel3->Controls->Add(this->label11);
            this->panel3->Controls->Add(this->kryptonDataGridView2);
            this->panel3->Location = System::Drawing::Point(481, 17);
            this->panel3->Name = L"panel3";
            this->panel3->Size = System::Drawing::Size(306, 570);
            this->panel3->TabIndex = 23;
            // 
            // kryptonButton5
            // 
            this->kryptonButton5->Cursor = System::Windows::Forms::Cursors::Arrow;
            this->kryptonButton5->Location = System::Drawing::Point(14, 502);
            this->kryptonButton5->Name = L"kryptonButton5";
            this->kryptonButton5->OverrideDefault->Back->Color1 = System::Drawing::Color::DodgerBlue;
            this->kryptonButton5->OverrideDefault->Back->Color2 = System::Drawing::Color::DodgerBlue;
            this->kryptonButton5->OverrideDefault->Border->Color1 = System::Drawing::Color::DodgerBlue;
            this->kryptonButton5->OverrideDefault->Border->Color2 = System::Drawing::Color::DodgerBlue;
            this->kryptonButton5->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonButton5->Size = System::Drawing::Size(277, 32);
            this->kryptonButton5->StateCommon->Back->Color1 = System::Drawing::Color::DodgerBlue;
            this->kryptonButton5->StateCommon->Back->Color2 = System::Drawing::Color::DodgerBlue;
            this->kryptonButton5->StateCommon->Border->Color1 = System::Drawing::Color::DodgerBlue;
            this->kryptonButton5->StateCommon->Border->Color2 = System::Drawing::Color::DodgerBlue;
            this->kryptonButton5->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonButton5->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::White;
            this->kryptonButton5->StateCommon->Content->ShortText->Color2 = System::Drawing::Color::White;
            this->kryptonButton5->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->kryptonButton5->TabIndex = 29;
            this->kryptonButton5->Values->Text = L"Receipt";
            // 
            // kryptonButton4
            // 
            this->kryptonButton4->Location = System::Drawing::Point(14, 448);
            this->kryptonButton4->Name = L"kryptonButton4";
            this->kryptonButton4->OverrideDefault->Back->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton4->OverrideDefault->Back->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton4->OverrideDefault->Border->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton4->OverrideDefault->Border->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton4->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonButton4->OverrideFocus->Back->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton4->OverrideFocus->Back->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton4->OverrideFocus->Border->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton4->OverrideFocus->Border->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton4->OverrideFocus->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonButton4->Size = System::Drawing::Size(277, 32);
            this->kryptonButton4->StateCommon->Back->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton4->StateCommon->Back->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton4->StateCommon->Border->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton4->StateCommon->Border->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton4->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonButton4->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::White;
            this->kryptonButton4->StateCommon->Content->ShortText->Color2 = System::Drawing::Color::White;
            this->kryptonButton4->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->kryptonButton4->StateDisabled->Back->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton4->StateDisabled->Back->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton4->StateDisabled->Border->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton4->StateDisabled->Border->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton4->StateDisabled->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonButton4->StateNormal->Back->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton4->StateNormal->Back->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton4->StateNormal->Border->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton4->StateNormal->Border->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton4->StateNormal->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonButton4->StatePressed->Back->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton4->StatePressed->Back->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton4->StatePressed->Border->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton4->StatePressed->Border->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton4->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonButton4->StatePressed->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->kryptonButton4->StateTracking->Back->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton4->StateTracking->Back->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton4->StateTracking->Border->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton4->StateTracking->Border->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton4->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonButton4->TabIndex = 29;
            this->kryptonButton4->Values->Text = L"Pay Now";
            // 
            // label13
            // 
            this->label13->AutoSize = true;
            this->label13->BackColor = System::Drawing::Color::White;
            this->label13->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label13->Location = System::Drawing::Point(11, 413);
            this->label13->Name = L"label13";
            this->label13->Size = System::Drawing::Size(40, 17);
            this->label13->TabIndex = 34;
            this->label13->Text = L"10.00";
            // 
            // label14
            // 
            this->label14->AutoSize = true;
            this->label14->BackColor = System::Drawing::Color::White;
            this->label14->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label14->Location = System::Drawing::Point(11, 393);
            this->label14->Name = L"label14";
            this->label14->Size = System::Drawing::Size(63, 16);
            this->label14->TabIndex = 33;
            this->label14->Text = L"Change:";
            // 
            // label12
            // 
            this->label12->AutoSize = true;
            this->label12->BackColor = System::Drawing::Color::White;
            this->label12->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label12->Location = System::Drawing::Point(11, 339);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(61, 16);
            this->label12->TabIndex = 32;
            this->label12->Text = L"Amount:";
            // 
            // textBox1
            // 
            this->textBox1->Location = System::Drawing::Point(14, 360);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(159, 20);
            this->textBox1->TabIndex = 31;
            // 
            // label10
            // 
            this->label10->AutoSize = true;
            this->label10->BackColor = System::Drawing::Color::White;
            this->label10->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label10->Location = System::Drawing::Point(11, 315);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(22, 17);
            this->label10->TabIndex = 30;
            this->label10->Text = L"10";
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->BackColor = System::Drawing::Color::Transparent;
            this->label8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label8->Location = System::Drawing::Point(10, 10);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(71, 23);
            this->label8->TabIndex = 19;
            this->label8->Text = L"Orders";
            // 
            // label11
            // 
            this->label11->AutoSize = true;
            this->label11->BackColor = System::Drawing::Color::White;
            this->label11->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label11->Location = System::Drawing::Point(11, 295);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(78, 16);
            this->label11->TabIndex = 29;
            this->label11->Text = L"Total Price:";
            // 
            // kryptonDataGridView2
            // 
            this->kryptonDataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->kryptonDataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
                this->dataGridViewTextBoxColumn1,
                    this->Column10, this->Column11, this->Column12, this->Column13, this->Column14, this->Column15
            });
            this->kryptonDataGridView2->Location = System::Drawing::Point(14, 44);
            this->kryptonDataGridView2->Name = L"kryptonDataGridView2";
            this->kryptonDataGridView2->Size = System::Drawing::Size(277, 220);
            this->kryptonDataGridView2->StateCommon->Background->Color1 = System::Drawing::Color::Gainsboro;
            this->kryptonDataGridView2->StateCommon->Background->Color2 = System::Drawing::Color::Gainsboro;
            this->kryptonDataGridView2->StateCommon->BackStyle = ComponentFactory::Krypton::Toolkit::PaletteBackStyle::GridBackgroundList;
            this->kryptonDataGridView2->StateCommon->DataCell->Back->Color1 = System::Drawing::Color::White;
            this->kryptonDataGridView2->StateCommon->DataCell->Back->Color2 = System::Drawing::Color::White;
            this->kryptonDataGridView2->StateCommon->HeaderColumn->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
            this->kryptonDataGridView2->StateCommon->HeaderColumn->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
            this->kryptonDataGridView2->StateCommon->HeaderColumn->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
            this->kryptonDataGridView2->StateCommon->HeaderColumn->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
            this->kryptonDataGridView2->StateCommon->HeaderColumn->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonDataGridView2->TabIndex = 19;
            // 
            // dataGridViewTextBoxColumn1
            // 
            this->dataGridViewTextBoxColumn1->HeaderText = L"ID";
            this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
            this->dataGridViewTextBoxColumn1->Width = 75;
            // 
            // Column10
            // 
            this->Column10->HeaderText = L"CID";
            this->Column10->Name = L"Column10";
            // 
            // Column11
            // 
            this->Column11->HeaderText = L"ProductName";
            this->Column11->Name = L"Column11";
            // 
            // Column12
            // 
            this->Column12->HeaderText = L"Category";
            this->Column12->Name = L"Column12";
            // 
            // Column13
            // 
            this->Column13->HeaderText = L"Price";
            this->Column13->Name = L"Column13";
            // 
            // Column14
            // 
            this->Column14->HeaderText = L"Quantity";
            this->Column14->Name = L"Column14";
            // 
            // Column15
            // 
            this->Column15->HeaderText = L"TotalPrice";
            this->Column15->Name = L"Column15";
            // 
            // ORDERS
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::WhiteSmoke;
            this->ClientSize = System::Drawing::Size(809, 605);
            this->Controls->Add(this->panel3);
            this->Controls->Add(this->panel1);
            this->Controls->Add(this->panel2);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
            this->Name = L"ORDERS";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"ORDERS";
            this->panel2->ResumeLayout(false);
            this->panel2->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kryptonComboBox2))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kryptonComboBox1))->EndInit();
            this->panel1->ResumeLayout(false);
            this->panel1->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kryptonDataGridView1))->EndInit();
            this->panel3->ResumeLayout(false);
            this->panel3->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kryptonDataGridView2))->EndInit();
            this->ResumeLayout(false);

        }
#pragma endregion
	};
}
