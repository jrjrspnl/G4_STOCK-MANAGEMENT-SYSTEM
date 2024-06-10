#pragma once

namespace G4STOCKMANAGEMENTSYSTEM {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for USERS
	/// </summary>
	public ref class USERS : public System::Windows::Forms::Form
	{
	public:
		USERS(void)
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
		~USERS()
		{
			if (components)
			{
				delete components;
			}
		}
























	private: ComponentFactory::Krypton::Toolkit::KryptonDataGridView^ kryptonDataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Username;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Password;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Role;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Date;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label3;




	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: ComponentFactory::Krypton::Toolkit::KryptonComboBox^ kryptonComboBox1;
	private: System::Windows::Forms::Panel^ panel2;
	private: ComponentFactory::Krypton::Toolkit::KryptonTextBox^ kryptonTextBox1;
	private: ComponentFactory::Krypton::Toolkit::KryptonTextBox^ kryptonTextBox2;
	private: ComponentFactory::Krypton::Toolkit::KryptonTextBox^ kryptonTextBox4;
	private: ComponentFactory::Krypton::Toolkit::KryptonTextBox^ kryptonTextBox3;
    private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton5;
    private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton6;
    private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton7;
    private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton8;


































	protected:

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
            this->ID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Username = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Password = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Role = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Date = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->kryptonComboBox1 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonComboBox());
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            this->kryptonTextBox1 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonTextBox());
            this->kryptonTextBox2 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonTextBox());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->kryptonTextBox3 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonTextBox());
            this->kryptonTextBox4 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonTextBox());
            this->kryptonButton5 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->kryptonButton6 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->kryptonButton7 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->kryptonButton8 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kryptonDataGridView1))->BeginInit();
            this->panel1->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kryptonComboBox1))->BeginInit();
            this->panel2->SuspendLayout();
            this->SuspendLayout();
            // 
            // kryptonDataGridView1
            // 
            this->kryptonDataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->kryptonDataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
                this->ID,
                    this->Username, this->Password, this->Role, this->Date
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
            this->kryptonDataGridView1->TabIndex = 15;
            // 
            // ID
            // 
            this->ID->HeaderText = L"ID";
            this->ID->Name = L"ID";
            this->ID->Width = 135;
            // 
            // Username
            // 
            this->Username->HeaderText = L"Username";
            this->Username->Name = L"Username";
            this->Username->Width = 135;
            // 
            // Password
            // 
            this->Password->HeaderText = L"Password";
            this->Password->Name = L"Password";
            this->Password->Width = 135;
            // 
            // Role
            // 
            this->Role->HeaderText = L"Role";
            this->Role->Name = L"Role";
            this->Role->Width = 135;
            // 
            // Date
            // 
            this->Date->HeaderText = L"Date";
            this->Date->Name = L"Date";
            this->Date->Width = 143;
            // 
            // panel1
            // 
            this->panel1->BackColor = System::Drawing::Color::White;
            this->panel1->Controls->Add(this->label9);
            this->panel1->Location = System::Drawing::Point(24, 243);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(764, 347);
            this->panel1->TabIndex = 16;
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->BackColor = System::Drawing::Color::White;
            this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->Location = System::Drawing::Point(21, 141);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(39, 16);
            this->label3->TabIndex = 8;
            this->label3->Text = L"Role:";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->BackColor = System::Drawing::Color::White;
            this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->Location = System::Drawing::Point(20, 81);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(71, 16);
            this->label2->TabIndex = 6;
            this->label2->Text = L"Password:";
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->BackColor = System::Drawing::Color::White;
            this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(20, 20);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(75, 16);
            this->label1->TabIndex = 4;
            this->label1->Text = L"Username:";
            // 
            // kryptonComboBox1
            // 
            this->kryptonComboBox1->DropDownWidth = 117;
            this->kryptonComboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Admin", L"Employee" });
            this->kryptonComboBox1->Location = System::Drawing::Point(24, 160);
            this->kryptonComboBox1->Name = L"kryptonComboBox1";
            this->kryptonComboBox1->Size = System::Drawing::Size(192, 25);
            this->kryptonComboBox1->StateActive->ComboBox->Back->Color1 = System::Drawing::Color::WhiteSmoke;
            this->kryptonComboBox1->StateActive->ComboBox->Border->Color1 = System::Drawing::Color::LightGray;
            this->kryptonComboBox1->StateActive->ComboBox->Border->Color2 = System::Drawing::Color::LightGray;
            this->kryptonComboBox1->StateActive->ComboBox->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonComboBox1->StateActive->ComboBox->Border->Rounding = 5;
            this->kryptonComboBox1->TabIndex = 10;
            // 
            // panel2
            // 
            this->panel2->BackColor = System::Drawing::Color::White;
            this->panel2->Controls->Add(this->kryptonButton5);
            this->panel2->Controls->Add(this->kryptonButton6);
            this->panel2->Controls->Add(this->kryptonButton7);
            this->panel2->Controls->Add(this->kryptonButton8);
            this->panel2->Controls->Add(this->kryptonTextBox4);
            this->panel2->Controls->Add(this->kryptonTextBox3);
            this->panel2->Controls->Add(this->kryptonComboBox1);
            this->panel2->Controls->Add(this->label1);
            this->panel2->Controls->Add(this->label2);
            this->panel2->Controls->Add(this->label3);
            this->panel2->Location = System::Drawing::Point(24, 17);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(764, 208);
            this->panel2->TabIndex = 11;
            // 
            // kryptonTextBox1
            // 
            this->kryptonTextBox1->Location = System::Drawing::Point(18, 39);
            this->kryptonTextBox1->Name = L"kryptonTextBox1";
            this->kryptonTextBox1->Size = System::Drawing::Size(193, 27);
            this->kryptonTextBox1->StateActive->Back->Color1 = System::Drawing::Color::WhiteSmoke;
            this->kryptonTextBox1->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonTextBox1->StateCommon->Border->Rounding = 5;
            this->kryptonTextBox1->TabIndex = 0;
            // 
            // kryptonTextBox2
            // 
            this->kryptonTextBox2->Location = System::Drawing::Point(18, 100);
            this->kryptonTextBox2->Name = L"kryptonTextBox2";
            this->kryptonTextBox2->Size = System::Drawing::Size(193, 27);
            this->kryptonTextBox2->StateActive->Back->Color1 = System::Drawing::Color::WhiteSmoke;
            this->kryptonTextBox2->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonTextBox2->StateCommon->Border->Rounding = 5;
            this->kryptonTextBox2->TabIndex = 1;
            // 
            // label9
            // 
            this->label9->AutoSize = true;
            this->label9->BackColor = System::Drawing::Color::Transparent;
            this->label9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label9->Location = System::Drawing::Point(19, 13);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(140, 23);
            this->label9->TabIndex = 15;
            this->label9->Text = L"User\'s Records";
            // 
            // kryptonTextBox3
            // 
            this->kryptonTextBox3->Location = System::Drawing::Point(22, 39);
            this->kryptonTextBox3->Name = L"kryptonTextBox3";
            this->kryptonTextBox3->Size = System::Drawing::Size(194, 27);
            this->kryptonTextBox3->StateActive->Back->Color1 = System::Drawing::Color::WhiteSmoke;
            this->kryptonTextBox3->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonTextBox3->StateCommon->Border->Rounding = 5;
            this->kryptonTextBox3->TabIndex = 15;
            // 
            // kryptonTextBox4
            // 
            this->kryptonTextBox4->Location = System::Drawing::Point(23, 100);
            this->kryptonTextBox4->Name = L"kryptonTextBox4";
            this->kryptonTextBox4->Size = System::Drawing::Size(194, 27);
            this->kryptonTextBox4->StateActive->Back->Color1 = System::Drawing::Color::WhiteSmoke;
            this->kryptonTextBox4->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonTextBox4->StateCommon->Border->Rounding = 5;
            this->kryptonTextBox4->TabIndex = 16;
            // 
            // kryptonButton5
            // 
            this->kryptonButton5->Location = System::Drawing::Point(285, 125);
            this->kryptonButton5->Name = L"kryptonButton5";
            this->kryptonButton5->OverrideDefault->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
                static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
            this->kryptonButton5->OverrideDefault->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
                static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
            this->kryptonButton5->OverrideDefault->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
                static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
            this->kryptonButton5->OverrideDefault->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
                static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
            this->kryptonButton5->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonButton5->Size = System::Drawing::Size(85, 40);
            this->kryptonButton5->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
                static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
            this->kryptonButton5->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
                static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
            this->kryptonButton5->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
                static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
            this->kryptonButton5->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
                static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
            this->kryptonButton5->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonButton5->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::White;
            this->kryptonButton5->StateCommon->Content->ShortText->Color2 = System::Drawing::Color::White;
            this->kryptonButton5->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->kryptonButton5->TabIndex = 22;
            this->kryptonButton5->Values->Text = L"Update";
            // 
            // kryptonButton6
            // 
            this->kryptonButton6->Location = System::Drawing::Point(285, 60);
            this->kryptonButton6->Name = L"kryptonButton6";
            this->kryptonButton6->OverrideDefault->Back->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton6->OverrideDefault->Back->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton6->OverrideDefault->Border->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton6->OverrideDefault->Border->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton6->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonButton6->OverrideFocus->Back->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton6->OverrideFocus->Back->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton6->OverrideFocus->Border->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton6->OverrideFocus->Border->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton6->OverrideFocus->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonButton6->Size = System::Drawing::Size(85, 40);
            this->kryptonButton6->StateCommon->Back->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton6->StateCommon->Back->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton6->StateCommon->Border->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton6->StateCommon->Border->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton6->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonButton6->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::White;
            this->kryptonButton6->StateCommon->Content->ShortText->Color2 = System::Drawing::Color::White;
            this->kryptonButton6->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->kryptonButton6->StateDisabled->Back->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton6->StateDisabled->Back->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton6->StateDisabled->Border->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton6->StateDisabled->Border->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton6->StateDisabled->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonButton6->StateNormal->Back->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton6->StateNormal->Back->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton6->StateNormal->Border->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton6->StateNormal->Border->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton6->StateNormal->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonButton6->StatePressed->Back->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton6->StatePressed->Back->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton6->StatePressed->Border->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton6->StatePressed->Border->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton6->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonButton6->StatePressed->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->kryptonButton6->StateTracking->Back->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton6->StateTracking->Back->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton6->StateTracking->Border->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton6->StateTracking->Border->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->kryptonButton6->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonButton6->TabIndex = 21;
            this->kryptonButton6->Values->Text = L"Add";
            // 
            // kryptonButton7
            // 
            this->kryptonButton7->Cursor = System::Windows::Forms::Cursors::Arrow;
            this->kryptonButton7->Location = System::Drawing::Point(398, 60);
            this->kryptonButton7->Name = L"kryptonButton7";
            this->kryptonButton7->OverrideDefault->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)),
                static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
            this->kryptonButton7->OverrideDefault->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)),
                static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
            this->kryptonButton7->OverrideDefault->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)),
                static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
            this->kryptonButton7->OverrideDefault->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)),
                static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
            this->kryptonButton7->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonButton7->Size = System::Drawing::Size(85, 40);
            this->kryptonButton7->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)),
                static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
            this->kryptonButton7->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)),
                static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
            this->kryptonButton7->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)),
                static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
            this->kryptonButton7->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)),
                static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
            this->kryptonButton7->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonButton7->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::White;
            this->kryptonButton7->StateCommon->Content->ShortText->Color2 = System::Drawing::Color::White;
            this->kryptonButton7->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->kryptonButton7->TabIndex = 20;
            this->kryptonButton7->Values->Text = L"Delete";
            // 
            // kryptonButton8
            // 
            this->kryptonButton8->Location = System::Drawing::Point(398, 125);
            this->kryptonButton8->Name = L"kryptonButton8";
            this->kryptonButton8->OverrideDefault->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
            this->kryptonButton8->OverrideDefault->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
            this->kryptonButton8->OverrideDefault->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
            this->kryptonButton8->OverrideDefault->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
            this->kryptonButton8->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonButton8->Size = System::Drawing::Size(85, 40);
            this->kryptonButton8->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
            this->kryptonButton8->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
            this->kryptonButton8->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
            this->kryptonButton8->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
            this->kryptonButton8->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonButton8->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::White;
            this->kryptonButton8->StateCommon->Content->ShortText->Color2 = System::Drawing::Color::White;
            this->kryptonButton8->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->kryptonButton8->TabIndex = 19;
            this->kryptonButton8->Values->Text = L"CLEAR";
            // 
            // USERS
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::WhiteSmoke;
            this->ClientSize = System::Drawing::Size(809, 605);
            this->Controls->Add(this->kryptonDataGridView1);
            this->Controls->Add(this->panel1);
            this->Controls->Add(this->panel2);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
            this->Name = L"USERS";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"USERS";
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kryptonDataGridView1))->EndInit();
            this->panel1->ResumeLayout(false);
            this->panel1->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kryptonComboBox1))->EndInit();
            this->panel2->ResumeLayout(false);
            this->panel2->PerformLayout();
            this->ResumeLayout(false);

        }
#pragma endregion

	
};
}
