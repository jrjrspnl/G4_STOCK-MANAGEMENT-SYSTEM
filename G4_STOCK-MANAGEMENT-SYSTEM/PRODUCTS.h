#pragma once

namespace G4STOCKMANAGEMENTSYSTEM {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for PRODUCTS
	/// </summary>
	public ref class PRODUCTS : public System::Windows::Forms::Form
	{
	public:
		PRODUCTS(void)
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
		~PRODUCTS()
		{
			if (components)
			{
				delete components;
			}
		}
	private: ComponentFactory::Krypton::Toolkit::KryptonDataGridView^ kryptonDataGridView1;
	protected:





	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Panel^ panel2;


	private: ComponentFactory::Krypton::Toolkit::KryptonComboBox^ kryptonComboBox1;






	private: System::Windows::Forms::Label^ label3;
	private: ComponentFactory::Krypton::Toolkit::KryptonComboBox^ kryptonComboBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label6;
	private: ComponentFactory::Krypton::Toolkit::KryptonTextBox^ kryptonTextBox5;
	private: System::Windows::Forms::Label^ label5;
	private: ComponentFactory::Krypton::Toolkit::KryptonTextBox^ kryptonTextBox4;
	private: System::Windows::Forms::Label^ label2;
	private: ComponentFactory::Krypton::Toolkit::KryptonTextBox^ kryptonTextBox2;
	private: System::Windows::Forms::Label^ label1;
	private: ComponentFactory::Krypton::Toolkit::KryptonTextBox^ kryptonTextBox1;
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton5;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
    private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton8;
    private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton6;
    private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton9;
    private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton7;














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
            this->kryptonDataGridView1 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonDataGridView());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            this->kryptonComboBox1 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonComboBox());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->kryptonTextBox1 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonTextBox());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->kryptonTextBox2 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonTextBox());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->kryptonTextBox4 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonTextBox());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->kryptonTextBox5 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonTextBox());
            this->kryptonComboBox2 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonComboBox());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->kryptonButton5 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->kryptonButton6 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->kryptonButton7 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->kryptonButton8 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->kryptonButton9 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kryptonDataGridView1))->BeginInit();
            this->panel1->SuspendLayout();
            this->panel2->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kryptonComboBox1))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kryptonComboBox2))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            this->SuspendLayout();
            // 
            // kryptonDataGridView1
            // 
            this->kryptonDataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->kryptonDataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
                this->Column1,
                    this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column8, this->Column9
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
            this->kryptonDataGridView1->TabIndex = 17;
            // 
            // panel1
            // 
            this->panel1->BackColor = System::Drawing::Color::White;
            this->panel1->Controls->Add(this->label9);
            this->panel1->Location = System::Drawing::Point(24, 243);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(764, 347);
            this->panel1->TabIndex = 18;
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
            // panel2
            // 
            this->panel2->BackColor = System::Drawing::Color::White;
            this->panel2->Controls->Add(this->kryptonButton8);
            this->panel2->Controls->Add(this->kryptonButton6);
            this->panel2->Controls->Add(this->kryptonButton9);
            this->panel2->Controls->Add(this->kryptonButton5);
            this->panel2->Controls->Add(this->kryptonButton7);
            this->panel2->Controls->Add(this->pictureBox1);
            this->panel2->Controls->Add(this->kryptonComboBox2);
            this->panel2->Controls->Add(this->kryptonTextBox5);
            this->panel2->Controls->Add(this->kryptonTextBox4);
            this->panel2->Controls->Add(this->kryptonTextBox2);
            this->panel2->Controls->Add(this->kryptonTextBox1);
            this->panel2->Controls->Add(this->kryptonComboBox1);
            this->panel2->Controls->Add(this->label3);
            this->panel2->Controls->Add(this->label1);
            this->panel2->Controls->Add(this->label2);
            this->panel2->Controls->Add(this->label4);
            this->panel2->Controls->Add(this->label5);
            this->panel2->Controls->Add(this->label6);
            this->panel2->Location = System::Drawing::Point(24, 17);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(764, 208);
            this->panel2->TabIndex = 19;
            // 
            // kryptonComboBox1
            // 
            this->kryptonComboBox1->DropDownWidth = 117;
            this->kryptonComboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Admin", L"Employee" });
            this->kryptonComboBox1->Location = System::Drawing::Point(23, 42);
            this->kryptonComboBox1->Name = L"kryptonComboBox1";
            this->kryptonComboBox1->Size = System::Drawing::Size(157, 25);
            this->kryptonComboBox1->StateActive->ComboBox->Back->Color1 = System::Drawing::Color::WhiteSmoke;
            this->kryptonComboBox1->StateActive->ComboBox->Border->Color1 = System::Drawing::Color::LightGray;
            this->kryptonComboBox1->StateActive->ComboBox->Border->Color2 = System::Drawing::Color::LightGray;
            this->kryptonComboBox1->StateActive->ComboBox->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonComboBox1->StateActive->ComboBox->Border->Rounding = 5;
            this->kryptonComboBox1->TabIndex = 10;
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->BackColor = System::Drawing::Color::White;
            this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->Location = System::Drawing::Point(21, 23);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(115, 16);
            this->label3->TabIndex = 8;
            this->label3->Text = L"Select Category:";
            // 
            // kryptonTextBox1
            // 
            this->kryptonTextBox1->Location = System::Drawing::Point(24, 96);
            this->kryptonTextBox1->Name = L"kryptonTextBox1";
            this->kryptonTextBox1->Size = System::Drawing::Size(156, 27);
            this->kryptonTextBox1->StateActive->Back->Color1 = System::Drawing::Color::WhiteSmoke;
            this->kryptonTextBox1->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonTextBox1->StateCommon->Border->Rounding = 5;
            this->kryptonTextBox1->TabIndex = 15;
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->BackColor = System::Drawing::Color::White;
            this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(22, 77);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(77, 16);
            this->label1->TabIndex = 16;
            this->label1->Text = L"Product ID:";
            // 
            // kryptonTextBox2
            // 
            this->kryptonTextBox2->Location = System::Drawing::Point(24, 151);
            this->kryptonTextBox2->Name = L"kryptonTextBox2";
            this->kryptonTextBox2->Size = System::Drawing::Size(156, 27);
            this->kryptonTextBox2->StateActive->Back->Color1 = System::Drawing::Color::WhiteSmoke;
            this->kryptonTextBox2->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonTextBox2->StateCommon->Border->Rounding = 5;
            this->kryptonTextBox2->TabIndex = 17;
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->BackColor = System::Drawing::Color::White;
            this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->Location = System::Drawing::Point(22, 132);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(103, 16);
            this->label2->TabIndex = 18;
            this->label2->Text = L"Product Name:";
            // 
            // kryptonTextBox4
            // 
            this->kryptonTextBox4->Location = System::Drawing::Point(213, 96);
            this->kryptonTextBox4->Name = L"kryptonTextBox4";
            this->kryptonTextBox4->Size = System::Drawing::Size(156, 27);
            this->kryptonTextBox4->StateActive->Back->Color1 = System::Drawing::Color::WhiteSmoke;
            this->kryptonTextBox4->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonTextBox4->StateCommon->Border->Rounding = 5;
            this->kryptonTextBox4->TabIndex = 19;
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->BackColor = System::Drawing::Color::White;
            this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label5->Location = System::Drawing::Point(211, 77);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(46, 16);
            this->label5->TabIndex = 20;
            this->label5->Text = L"Stock:";
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->BackColor = System::Drawing::Color::White;
            this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label6->Location = System::Drawing::Point(212, 23);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(43, 16);
            this->label6->TabIndex = 24;
            this->label6->Text = L"Price:";
            // 
            // kryptonTextBox5
            // 
            this->kryptonTextBox5->Location = System::Drawing::Point(214, 42);
            this->kryptonTextBox5->Name = L"kryptonTextBox5";
            this->kryptonTextBox5->Size = System::Drawing::Size(156, 27);
            this->kryptonTextBox5->StateActive->Back->Color1 = System::Drawing::Color::WhiteSmoke;
            this->kryptonTextBox5->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonTextBox5->StateCommon->Border->Rounding = 5;
            this->kryptonTextBox5->TabIndex = 23;
            // 
            // kryptonComboBox2
            // 
            this->kryptonComboBox2->DropDownWidth = 117;
            this->kryptonComboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Admin", L"Employee" });
            this->kryptonComboBox2->Location = System::Drawing::Point(212, 152);
            this->kryptonComboBox2->Name = L"kryptonComboBox2";
            this->kryptonComboBox2->Size = System::Drawing::Size(156, 25);
            this->kryptonComboBox2->StateActive->ComboBox->Back->Color1 = System::Drawing::Color::WhiteSmoke;
            this->kryptonComboBox2->StateActive->ComboBox->Border->Color1 = System::Drawing::Color::LightGray;
            this->kryptonComboBox2->StateActive->ComboBox->Border->Color2 = System::Drawing::Color::LightGray;
            this->kryptonComboBox2->StateActive->ComboBox->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonComboBox2->StateActive->ComboBox->Border->Rounding = 5;
            this->kryptonComboBox2->TabIndex = 26;
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->BackColor = System::Drawing::Color::White;
            this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label4->Location = System::Drawing::Point(210, 133);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(49, 16);
            this->label4->TabIndex = 25;
            this->label4->Text = L"Status:";
            // 
            // pictureBox1
            // 
            this->pictureBox1->BackColor = System::Drawing::Color::Gainsboro;
            this->pictureBox1->Location = System::Drawing::Point(410, 42);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(100, 88);
            this->pictureBox1->TabIndex = 27;
            this->pictureBox1->TabStop = false;
            // 
            // kryptonButton5
            // 
            this->kryptonButton5->Location = System::Drawing::Point(418, 141);
            this->kryptonButton5->Name = L"kryptonButton5";
            this->kryptonButton5->Size = System::Drawing::Size(85, 27);
            this->kryptonButton5->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(82)),
                static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->kryptonButton5->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(82)),
                static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->kryptonButton5->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(82)),
                static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->kryptonButton5->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(82)),
                static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->kryptonButton5->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonButton5->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::White;
            this->kryptonButton5->StateCommon->Content->ShortText->Color2 = System::Drawing::Color::White;
            this->kryptonButton5->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->kryptonButton5->TabIndex = 28;
            this->kryptonButton5->Values->Text = L"Import";
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
            // kryptonButton6
            // 
            this->kryptonButton6->Location = System::Drawing::Point(552, 120);
            this->kryptonButton6->Name = L"kryptonButton6";
            this->kryptonButton6->OverrideDefault->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
                static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
            this->kryptonButton6->OverrideDefault->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
                static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
            this->kryptonButton6->OverrideDefault->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
                static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
            this->kryptonButton6->OverrideDefault->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
                static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
            this->kryptonButton6->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonButton6->Size = System::Drawing::Size(85, 40);
            this->kryptonButton6->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
                static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
            this->kryptonButton6->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
                static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
            this->kryptonButton6->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
                static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
            this->kryptonButton6->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
                static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
            this->kryptonButton6->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonButton6->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::White;
            this->kryptonButton6->StateCommon->Content->ShortText->Color2 = System::Drawing::Color::White;
            this->kryptonButton6->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->kryptonButton6->TabIndex = 23;
            this->kryptonButton6->Values->Text = L"Update";
            // 
            // kryptonButton7
            // 
            this->kryptonButton7->Location = System::Drawing::Point(552, 59);
            this->kryptonButton7->Name = L"kryptonButton7";
            this->kryptonButton7->OverrideDefault->Back->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton7->OverrideDefault->Back->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton7->OverrideDefault->Border->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton7->OverrideDefault->Border->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton7->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonButton7->OverrideFocus->Back->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton7->OverrideFocus->Back->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton7->OverrideFocus->Border->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton7->OverrideFocus->Border->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton7->OverrideFocus->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonButton7->Size = System::Drawing::Size(85, 40);
            this->kryptonButton7->StateCommon->Back->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton7->StateCommon->Back->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton7->StateCommon->Border->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton7->StateCommon->Border->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton7->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonButton7->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::White;
            this->kryptonButton7->StateCommon->Content->ShortText->Color2 = System::Drawing::Color::White;
            this->kryptonButton7->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->kryptonButton7->StateDisabled->Back->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton7->StateDisabled->Back->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton7->StateDisabled->Border->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton7->StateDisabled->Border->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton7->StateDisabled->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonButton7->StateNormal->Back->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton7->StateNormal->Back->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton7->StateNormal->Border->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton7->StateNormal->Border->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton7->StateNormal->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonButton7->StatePressed->Back->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton7->StatePressed->Back->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton7->StatePressed->Border->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton7->StatePressed->Border->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton7->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonButton7->StatePressed->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->kryptonButton7->StateTracking->Back->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton7->StateTracking->Back->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton7->StateTracking->Border->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton7->StateTracking->Border->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton7->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonButton7->TabIndex = 22;
            this->kryptonButton7->Values->Text = L"Add";
            // 
            // kryptonButton8
            // 
            this->kryptonButton8->Cursor = System::Windows::Forms::Cursors::Arrow;
            this->kryptonButton8->Location = System::Drawing::Point(654, 59);
            this->kryptonButton8->Name = L"kryptonButton8";
            this->kryptonButton8->OverrideDefault->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)),
                static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
            this->kryptonButton8->OverrideDefault->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)),
                static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
            this->kryptonButton8->OverrideDefault->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)),
                static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
            this->kryptonButton8->OverrideDefault->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)),
                static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
            this->kryptonButton8->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonButton8->Size = System::Drawing::Size(85, 40);
            this->kryptonButton8->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)),
                static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
            this->kryptonButton8->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)),
                static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
            this->kryptonButton8->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)),
                static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
            this->kryptonButton8->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)),
                static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
            this->kryptonButton8->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonButton8->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::White;
            this->kryptonButton8->StateCommon->Content->ShortText->Color2 = System::Drawing::Color::White;
            this->kryptonButton8->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->kryptonButton8->TabIndex = 21;
            this->kryptonButton8->Values->Text = L"Delete";
            // 
            // kryptonButton9
            // 
            this->kryptonButton9->Location = System::Drawing::Point(654, 120);
            this->kryptonButton9->Name = L"kryptonButton9";
            this->kryptonButton9->OverrideDefault->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
            this->kryptonButton9->OverrideDefault->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
            this->kryptonButton9->OverrideDefault->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
            this->kryptonButton9->OverrideDefault->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
            this->kryptonButton9->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonButton9->Size = System::Drawing::Size(85, 40);
            this->kryptonButton9->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
            this->kryptonButton9->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
            this->kryptonButton9->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
            this->kryptonButton9->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
            this->kryptonButton9->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonButton9->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::White;
            this->kryptonButton9->StateCommon->Content->ShortText->Color2 = System::Drawing::Color::White;
            this->kryptonButton9->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->kryptonButton9->TabIndex = 20;
            this->kryptonButton9->Values->Text = L"CLEAR";
            // 
            // PRODUCTS
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::WhiteSmoke;
            this->ClientSize = System::Drawing::Size(809, 605);
            this->Controls->Add(this->panel2);
            this->Controls->Add(this->kryptonDataGridView1);
            this->Controls->Add(this->panel1);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
            this->Name = L"PRODUCTS";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"PRODUCTS";
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kryptonDataGridView1))->EndInit();
            this->panel1->ResumeLayout(false);
            this->panel1->PerformLayout();
            this->panel2->ResumeLayout(false);
            this->panel2->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kryptonComboBox1))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kryptonComboBox2))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            this->ResumeLayout(false);

        }
#pragma endregion
	};
}
