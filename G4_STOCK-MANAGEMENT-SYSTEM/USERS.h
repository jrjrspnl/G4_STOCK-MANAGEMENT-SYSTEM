#pragma once
#include "UsersData.h"
#include <cliext\utility>
#using <System.Data.dll>

namespace G4STOCKMANAGEMENTSYSTEM {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace System::Data::SqlClient;

    /// <summary>
    /// Summary for USERS
    /// </summary>
    public ref class USERS : public System::Windows::Forms::Form
    {
        SqlConnection^ connection = gcnew SqlConnection("Data Source=(LocalDB)\\MSSQLLocalDB;AttachDbFilename=C:\\Users\\jimwiel\\Documents\\stock.mdf;Integrated Security=True;Connect Timeout=30");

    public:
        USERS(void)
        {
            InitializeComponent();
            displayAllUsersData();
            //
            //TODO: Add the constructor code here
            //
        }
        bool checkConnection()
        {
            if (connection->State == ConnectionState::Closed)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        void displayAllUsersData() {
            UsersData^ uData = gcnew UsersData();

            List<UsersData^>^ listData = uData->AllUsersData();
            Table_recordsUsers->DataSource = listData;

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
    private: ComponentFactory::Krypton::Toolkit::KryptonDataGridView^ Table_recordsUsers;
    protected:






























    private: System::Windows::Forms::Panel^ panel1;
    private: System::Windows::Forms::Label^ label9;
    private: System::Windows::Forms::Label^ label3;




    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label1;


    private: System::Windows::Forms::Panel^ panel2;
    private: ComponentFactory::Krypton::Toolkit::KryptonTextBox^ kryptonTextBox1;
    private: ComponentFactory::Krypton::Toolkit::KryptonTextBox^ kryptonTextBox2;
    private: ComponentFactory::Krypton::Toolkit::KryptonTextBox^ Txt_passUsers;

    private: ComponentFactory::Krypton::Toolkit::KryptonTextBox^ Txt_usernUsers;



    private: ComponentFactory::Krypton::Toolkit::KryptonButton^ Btn_updUsers;

    private: ComponentFactory::Krypton::Toolkit::KryptonButton^ Btn_addUsers;
    private: ComponentFactory::Krypton::Toolkit::KryptonButton^ Btn_delUsers;
    private: ComponentFactory::Krypton::Toolkit::KryptonButton^ Btn_clrUsers;
    private: ComponentFactory::Krypton::Toolkit::KryptonComboBox^ Cbox_statusUsers;
    private: System::Windows::Forms::Label^ Cbox;
    private: ComponentFactory::Krypton::Toolkit::KryptonComboBox^ Cbox_roleUsers;







































    protected:

    protected:

    private:
        /// <summary>
        /// Required designer variable.
        /// </summary>
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        void InitializeComponent(void)
        {
            this->Table_recordsUsers = (gcnew ComponentFactory::Krypton::Toolkit::KryptonDataGridView());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            this->Cbox_statusUsers = (gcnew ComponentFactory::Krypton::Toolkit::KryptonComboBox());
            this->Cbox = (gcnew System::Windows::Forms::Label());
            this->Btn_updUsers = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->Btn_addUsers = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->Btn_delUsers = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->Btn_clrUsers = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->Txt_passUsers = (gcnew ComponentFactory::Krypton::Toolkit::KryptonTextBox());
            this->Txt_usernUsers = (gcnew ComponentFactory::Krypton::Toolkit::KryptonTextBox());
            this->Cbox_roleUsers = (gcnew ComponentFactory::Krypton::Toolkit::KryptonComboBox());
            this->kryptonTextBox1 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonTextBox());
            this->kryptonTextBox2 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonTextBox());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Table_recordsUsers))->BeginInit();
            this->panel1->SuspendLayout();
            this->panel2->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Cbox_statusUsers))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Cbox_roleUsers))->BeginInit();
            this->SuspendLayout();
            // 
            // Table_recordsUsers
            // 
            this->Table_recordsUsers->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
            this->Table_recordsUsers->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->Table_recordsUsers->Location = System::Drawing::Point(41, 292);
            this->Table_recordsUsers->Name = L"Table_recordsUsers";
            this->Table_recordsUsers->RightToLeft = System::Windows::Forms::RightToLeft::No;
            this->Table_recordsUsers->RowHeadersVisible = false;
            this->Table_recordsUsers->Size = System::Drawing::Size(722, 284);
            this->Table_recordsUsers->StateCommon->Background->Color1 = System::Drawing::Color::Gainsboro;
            this->Table_recordsUsers->StateCommon->Background->Color2 = System::Drawing::Color::Gainsboro;
            this->Table_recordsUsers->StateCommon->BackStyle = ComponentFactory::Krypton::Toolkit::PaletteBackStyle::GridBackgroundList;
            this->Table_recordsUsers->StateCommon->DataCell->Back->Color1 = System::Drawing::Color::White;
            this->Table_recordsUsers->StateCommon->DataCell->Back->Color2 = System::Drawing::Color::White;
            this->Table_recordsUsers->StateCommon->HeaderColumn->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
            this->Table_recordsUsers->StateCommon->HeaderColumn->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
            this->Table_recordsUsers->StateCommon->HeaderColumn->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
            this->Table_recordsUsers->StateCommon->HeaderColumn->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
            this->Table_recordsUsers->StateCommon->HeaderColumn->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Table_recordsUsers->TabIndex = 15;
            this->Table_recordsUsers->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &USERS::Table_recordsUsers_CellClick_1);
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
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->BackColor = System::Drawing::Color::White;
            this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->Location = System::Drawing::Point(20, 112);
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
            this->label2->Location = System::Drawing::Point(242, 51);
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
            this->label1->Location = System::Drawing::Point(20, 51);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(75, 16);
            this->label1->TabIndex = 4;
            this->label1->Text = L"Username:";
            // 
            // panel2
            // 
            this->panel2->BackColor = System::Drawing::Color::White;
            this->panel2->Controls->Add(this->Cbox_statusUsers);
            this->panel2->Controls->Add(this->Cbox);
            this->panel2->Controls->Add(this->Btn_updUsers);
            this->panel2->Controls->Add(this->Btn_addUsers);
            this->panel2->Controls->Add(this->Btn_delUsers);
            this->panel2->Controls->Add(this->Btn_clrUsers);
            this->panel2->Controls->Add(this->Txt_passUsers);
            this->panel2->Controls->Add(this->Txt_usernUsers);
            this->panel2->Controls->Add(this->Cbox_roleUsers);
            this->panel2->Controls->Add(this->label1);
            this->panel2->Controls->Add(this->label2);
            this->panel2->Controls->Add(this->label3);
            this->panel2->Location = System::Drawing::Point(24, 17);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(764, 208);
            this->panel2->TabIndex = 11;
            // 
            // Cbox_statusUsers
            // 
            this->Cbox_statusUsers->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(2) { L"Admin", L"Cashier" });
            this->Cbox_statusUsers->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
            this->Cbox_statusUsers->DropDownWidth = 117;
            this->Cbox_statusUsers->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Active", L"Inactive", L"Approval" });
            this->Cbox_statusUsers->Location = System::Drawing::Point(247, 131);
            this->Cbox_statusUsers->Name = L"Cbox_statusUsers";
            this->Cbox_statusUsers->Size = System::Drawing::Size(192, 25);
            this->Cbox_statusUsers->StateActive->ComboBox->Back->Color1 = System::Drawing::Color::WhiteSmoke;
            this->Cbox_statusUsers->StateActive->ComboBox->Border->Color1 = System::Drawing::Color::LightGray;
            this->Cbox_statusUsers->StateActive->ComboBox->Border->Color2 = System::Drawing::Color::LightGray;
            this->Cbox_statusUsers->StateActive->ComboBox->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Cbox_statusUsers->StateActive->ComboBox->Border->Rounding = 5;
            this->Cbox_statusUsers->TabIndex = 24;
            // 
            // Cbox
            // 
            this->Cbox->AutoSize = true;
            this->Cbox->BackColor = System::Drawing::Color::White;
            this->Cbox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Cbox->Location = System::Drawing::Point(244, 112);
            this->Cbox->Name = L"Cbox";
            this->Cbox->Size = System::Drawing::Size(49, 16);
            this->Cbox->TabIndex = 23;
            this->Cbox->Text = L"Status:";
            // 
            // Btn_updUsers
            // 
            this->Btn_updUsers->Location = System::Drawing::Point(480, 124);
            this->Btn_updUsers->Name = L"Btn_updUsers";
            this->Btn_updUsers->OverrideDefault->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
                static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
            this->Btn_updUsers->OverrideDefault->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
                static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
            this->Btn_updUsers->OverrideDefault->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
                static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
            this->Btn_updUsers->OverrideDefault->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
                static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
            this->Btn_updUsers->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Btn_updUsers->Size = System::Drawing::Size(85, 40);
            this->Btn_updUsers->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
                static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
            this->Btn_updUsers->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
                static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
            this->Btn_updUsers->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
                static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
            this->Btn_updUsers->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
                static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
            this->Btn_updUsers->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Btn_updUsers->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::White;
            this->Btn_updUsers->StateCommon->Content->ShortText->Color2 = System::Drawing::Color::White;
            this->Btn_updUsers->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->Btn_updUsers->TabIndex = 22;
            this->Btn_updUsers->Values->Text = L"Update";
            this->Btn_updUsers->Click += gcnew System::EventHandler(this, &USERS::Btn_updUsers_Click);
            // 
            // Btn_addUsers
            // 
            this->Btn_addUsers->Location = System::Drawing::Point(480, 59);
            this->Btn_addUsers->Name = L"Btn_addUsers";
            this->Btn_addUsers->OverrideDefault->Back->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_addUsers->OverrideDefault->Back->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_addUsers->OverrideDefault->Border->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_addUsers->OverrideDefault->Border->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_addUsers->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Btn_addUsers->OverrideFocus->Back->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_addUsers->OverrideFocus->Back->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_addUsers->OverrideFocus->Border->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_addUsers->OverrideFocus->Border->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_addUsers->OverrideFocus->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Btn_addUsers->Size = System::Drawing::Size(85, 40);
            this->Btn_addUsers->StateCommon->Back->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_addUsers->StateCommon->Back->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_addUsers->StateCommon->Border->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_addUsers->StateCommon->Border->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_addUsers->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Btn_addUsers->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::White;
            this->Btn_addUsers->StateCommon->Content->ShortText->Color2 = System::Drawing::Color::White;
            this->Btn_addUsers->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->Btn_addUsers->StateDisabled->Back->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_addUsers->StateDisabled->Back->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_addUsers->StateDisabled->Border->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_addUsers->StateDisabled->Border->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_addUsers->StateDisabled->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Btn_addUsers->StateNormal->Back->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_addUsers->StateNormal->Back->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_addUsers->StateNormal->Border->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_addUsers->StateNormal->Border->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_addUsers->StateNormal->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Btn_addUsers->StatePressed->Back->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_addUsers->StatePressed->Back->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_addUsers->StatePressed->Border->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_addUsers->StatePressed->Border->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_addUsers->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Btn_addUsers->StatePressed->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->Btn_addUsers->StateTracking->Back->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_addUsers->StateTracking->Back->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_addUsers->StateTracking->Border->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_addUsers->StateTracking->Border->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_addUsers->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Btn_addUsers->TabIndex = 21;
            this->Btn_addUsers->Values->Text = L"Add";
            this->Btn_addUsers->Click += gcnew System::EventHandler(this, &USERS::Btn_addUsers_Click);
            // 
            // Btn_delUsers
            // 
            this->Btn_delUsers->Cursor = System::Windows::Forms::Cursors::Arrow;
            this->Btn_delUsers->Location = System::Drawing::Point(593, 59);
            this->Btn_delUsers->Name = L"Btn_delUsers";
            this->Btn_delUsers->OverrideDefault->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)),
                static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
            this->Btn_delUsers->OverrideDefault->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)),
                static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
            this->Btn_delUsers->OverrideDefault->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)),
                static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
            this->Btn_delUsers->OverrideDefault->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)),
                static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
            this->Btn_delUsers->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Btn_delUsers->Size = System::Drawing::Size(85, 40);
            this->Btn_delUsers->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)),
                static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
            this->Btn_delUsers->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)),
                static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
            this->Btn_delUsers->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)),
                static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
            this->Btn_delUsers->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)),
                static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
            this->Btn_delUsers->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Btn_delUsers->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::White;
            this->Btn_delUsers->StateCommon->Content->ShortText->Color2 = System::Drawing::Color::White;
            this->Btn_delUsers->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->Btn_delUsers->TabIndex = 20;
            this->Btn_delUsers->Values->Text = L"Delete";
            this->Btn_delUsers->Click += gcnew System::EventHandler(this, &USERS::Btn_delUsers_Click);
            // 
            // Btn_clrUsers
            // 
            this->Btn_clrUsers->Location = System::Drawing::Point(593, 124);
            this->Btn_clrUsers->Name = L"Btn_clrUsers";
            this->Btn_clrUsers->OverrideDefault->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
            this->Btn_clrUsers->OverrideDefault->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
            this->Btn_clrUsers->OverrideDefault->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
            this->Btn_clrUsers->OverrideDefault->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
            this->Btn_clrUsers->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Btn_clrUsers->Size = System::Drawing::Size(85, 40);
            this->Btn_clrUsers->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
            this->Btn_clrUsers->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
            this->Btn_clrUsers->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
            this->Btn_clrUsers->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
            this->Btn_clrUsers->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Btn_clrUsers->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::White;
            this->Btn_clrUsers->StateCommon->Content->ShortText->Color2 = System::Drawing::Color::White;
            this->Btn_clrUsers->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->Btn_clrUsers->TabIndex = 19;
            this->Btn_clrUsers->Values->Text = L"CLEAR";
            this->Btn_clrUsers->Click += gcnew System::EventHandler(this, &USERS::Btn_clrUsers_Click);
            // 
            // Txt_passUsers
            // 
            this->Txt_passUsers->Location = System::Drawing::Point(245, 70);
            this->Txt_passUsers->Name = L"Txt_passUsers";
            this->Txt_passUsers->PasswordChar = '*';
            this->Txt_passUsers->Size = System::Drawing::Size(194, 27);
            this->Txt_passUsers->StateActive->Back->Color1 = System::Drawing::Color::WhiteSmoke;
            this->Txt_passUsers->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Txt_passUsers->StateCommon->Border->Rounding = 5;
            this->Txt_passUsers->TabIndex = 16;
            // 
            // Txt_usernUsers
            // 
            this->Txt_usernUsers->Location = System::Drawing::Point(22, 70);
            this->Txt_usernUsers->Name = L"Txt_usernUsers";
            this->Txt_usernUsers->Size = System::Drawing::Size(194, 27);
            this->Txt_usernUsers->StateActive->Back->Color1 = System::Drawing::Color::WhiteSmoke;
            this->Txt_usernUsers->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Txt_usernUsers->StateCommon->Border->Rounding = 5;
            this->Txt_usernUsers->TabIndex = 15;
            // 
            // Cbox_roleUsers
            // 
            this->Cbox_roleUsers->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
            this->Cbox_roleUsers->DropDownWidth = 117;
            this->Cbox_roleUsers->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Admin", L"Employee" });
            this->Cbox_roleUsers->Location = System::Drawing::Point(23, 131);
            this->Cbox_roleUsers->Name = L"Cbox_roleUsers";
            this->Cbox_roleUsers->Size = System::Drawing::Size(192, 25);
            this->Cbox_roleUsers->StateActive->ComboBox->Back->Color1 = System::Drawing::Color::WhiteSmoke;
            this->Cbox_roleUsers->StateActive->ComboBox->Border->Color1 = System::Drawing::Color::LightGray;
            this->Cbox_roleUsers->StateActive->ComboBox->Border->Color2 = System::Drawing::Color::LightGray;
            this->Cbox_roleUsers->StateActive->ComboBox->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Cbox_roleUsers->StateActive->ComboBox->Border->Rounding = 5;
            this->Cbox_roleUsers->StateActive->ComboBox->Content->Color1 = System::Drawing::Color::Black;
            this->Cbox_roleUsers->StateCommon->Item->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->Cbox_roleUsers->StateCommon->Item->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->Cbox_roleUsers->StateCommon->Item->Content->ShortText->Color1 = System::Drawing::Color::Black;
            this->Cbox_roleUsers->StateCommon->Item->Content->ShortText->Color2 = System::Drawing::Color::Black;
            this->Cbox_roleUsers->StateDisabled->ComboBox->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->Cbox_roleUsers->StateDisabled->ComboBox->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->Cbox_roleUsers->StateDisabled->ComboBox->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->Cbox_roleUsers->StateDisabled->ComboBox->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Cbox_roleUsers->StateNormal->ComboBox->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->Cbox_roleUsers->StateNormal->ComboBox->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->Cbox_roleUsers->StateNormal->ComboBox->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->Cbox_roleUsers->StateNormal->ComboBox->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Cbox_roleUsers->StateNormal->ComboBox->Content->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->Cbox_roleUsers->StateNormal->Item->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->Cbox_roleUsers->StateNormal->Item->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->Cbox_roleUsers->StateNormal->Item->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->Cbox_roleUsers->StateNormal->Item->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->Cbox_roleUsers->StateNormal->Item->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Cbox_roleUsers->TabIndex = 10;
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
            // USERS
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::WhiteSmoke;
            this->ClientSize = System::Drawing::Size(809, 605);
            this->Controls->Add(this->Table_recordsUsers);
            this->Controls->Add(this->panel1);
            this->Controls->Add(this->panel2);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
            this->Name = L"USERS";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"USERS";
            this->Load += gcnew System::EventHandler(this, &USERS::USERS_Load);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Table_recordsUsers))->EndInit();
            this->panel1->ResumeLayout(false);
            this->panel1->PerformLayout();
            this->panel2->ResumeLayout(false);
            this->panel2->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Cbox_statusUsers))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Cbox_roleUsers))->EndInit();
            this->ResumeLayout(false);

        }
#pragma endregion
    private: void clearFields() {
                Txt_usernUsers->Text = "";
                Txt_passUsers->Text = "";
                Cbox_roleUsers->SelectedIndex = -1;
                Cbox_statusUsers->SelectedIndex = -1;
            }
     private: System::Void Btn_addUsers_Click(System::Object^ sender, System::EventArgs^ e) {
         if (Txt_usernUsers->Text == "" || Txt_passUsers->Text == "" || Cbox_roleUsers->SelectedIndex == -1 || Cbox_statusUsers->SelectedIndex == -1)
         {
             MessageBox::Show("Empty Fields!", "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
         }
         else {
             if (checkConnection())
             {
                 try
                 {
                     connection->Open();

                     System::String^ checkUsername = "SELECT * FROM users WHERE username = @usern";

                     SqlCommand^ cmd = gcnew SqlCommand(checkUsername, connection);
                     {
                         cmd->Parameters->AddWithValue("@usern", Txt_usernUsers->Text->Trim());

                         SqlDataAdapter^ adapter = gcnew SqlDataAdapter(cmd);
                         DataTable^ table = gcnew DataTable();
                         adapter->Fill(table);

                         if (table->Rows->Count > 0)
                         {
                             MessageBox::Show(Txt_usernUsers->Text->Trim() + " is already taken!", "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
                         }
                         else
                         {
                             System::String^ insertData = "INSERT INTO users(username, password, role, status, date)" +
                                 "VALUES(@usern, @pass, @role, @status, @date)";
                             SqlCommand^ insertD = gcnew SqlCommand(insertData, connection); {
                                 insertD->Parameters->AddWithValue("@usern", Txt_usernUsers->Text->Trim());
                                 insertD->Parameters->AddWithValue("@pass", Txt_passUsers->Text->Trim());
                                 insertD->Parameters->AddWithValue("@role", Cbox_roleUsers->SelectedItem->ToString()->Trim());
                                 insertD->Parameters->AddWithValue("@status", Cbox_statusUsers->SelectedItem->ToString()->Trim());

                                 DateTime today = DateTime::Today;
                                 insertD->Parameters->AddWithValue("@date", today);

                                 insertD->ExecuteNonQuery();
                                 clearFields();
                                 displayAllUsersData();
                                 MessageBox::Show("Added Successfully!", "Information Message", MessageBoxButtons::OK, MessageBoxIcon::Information);

                             }
                         }
                     }
                 }
                 catch (Exception^ ex) {
                     MessageBox::Show("Connection Failed: " + ex->Message, "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
                 }
                 finally {
                     connection->Close();
                 }
             }
         }

     }

    private: System::Void Btn_updUsers_Click(System::Object^ sender, System::EventArgs^ e) {
        if (MessageBox::Show("Are you sure you want to update this record?", "Confirmation", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
        {
            if (Txt_usernUsers->Text == "" || Txt_passUsers->Text == "" || Cbox_roleUsers->SelectedIndex == -1 || Cbox_statusUsers->SelectedIndex == -1)
            {
                MessageBox::Show("Empty Fields!", "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
            else {
                if (checkConnection())
                {
                    try
                    {
                        connection->Open();

                        // Check if the new username is already taken (excluding the current username)
                        System::String^ checkUsername = "SELECT * FROM users WHERE username = @newUsern AND username != @origUsern";
                        SqlCommand^ checkCmd = gcnew SqlCommand(checkUsername, connection);
                        checkCmd->Parameters->AddWithValue("@newUsern", Txt_usernUsers->Text->Trim());
                        checkCmd->Parameters->AddWithValue("@origUsern", originalUsername);

                        SqlDataAdapter^ adapter = gcnew SqlDataAdapter(checkCmd);
                        DataTable^ table = gcnew DataTable();
                        adapter->Fill(table);

                        if (table->Rows->Count > 0)
                        {
                            MessageBox::Show(Txt_usernUsers->Text->Trim() + " is already taken!", "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
                        }
                        else
                        {
                            // Perform update query
                            System::String^ updateData = "UPDATE users SET username = @newUsern, password = @pass, role = @role, status = @status WHERE username = @origUsern";
                            SqlCommand^ updateCmd = gcnew SqlCommand(updateData, connection);

                            updateCmd->Parameters->AddWithValue("@newUsern", Txt_usernUsers->Text->Trim());
                            updateCmd->Parameters->AddWithValue("@pass", Txt_passUsers->Text->Trim());
                            updateCmd->Parameters->AddWithValue("@role", Cbox_roleUsers->SelectedItem->ToString()->Trim());
                            updateCmd->Parameters->AddWithValue("@status", Cbox_statusUsers->SelectedItem->ToString()->Trim());
                            updateCmd->Parameters->AddWithValue("@origUsern", originalUsername);

                            updateCmd->ExecuteNonQuery();
                            clearFields();
                            displayAllUsersData();
                            MessageBox::Show("Updated Successfully!", "Information Message", MessageBoxButtons::OK, MessageBoxIcon::Information);
                        }
                    }
                    catch (Exception^ ex) {
                        MessageBox::Show("Update Failed: " + ex->Message, "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
                    }
                    finally {
                        connection->Close();
                    }
                }
            }
        }
    }
    
    private: System::Void Btn_clrUsers_Click(System::Object^ sender, System::EventArgs^ e) {
        clearFields();
    }
    private: System::String^ originalUsername;
    private: System::Void Table_recordsUsers_CellClick_1(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
        if (e->RowIndex >= 0) { // Make sure a valid row is selected
            DataGridViewRow^ row = Table_recordsUsers->Rows[e->RowIndex];

            // Populate text boxes and combo boxes with selected row's data
            Txt_usernUsers->Text = row->Cells["username"]->Value->ToString();
            Txt_passUsers->Text = row->Cells["password"]->Value->ToString();
            Cbox_roleUsers->SelectedItem = row->Cells["role"]->Value->ToString();
            Cbox_statusUsers->SelectedItem = row->Cells["status"]->Value->ToString();

            // Store the original username
            originalUsername = row->Cells["username"]->Value->ToString();
        }
    }
    private: System::Void Btn_delUsers_Click(System::Object^ sender, System::EventArgs^ e) {
        if (MessageBox::Show("Are you sure you want to delete this record?", "Confirmation", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
        {
            if (Txt_usernUsers->Text == "")
            {
                MessageBox::Show("No record selected for deletion!", "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
            else {
                if (checkConnection())
                {
                    try
                    {
                        connection->Open();

                        // Perform delete query
                        System::String^ deleteData = "DELETE FROM users WHERE username = @usern";
                        SqlCommand^ deleteCmd = gcnew SqlCommand(deleteData, connection);

                        deleteCmd->Parameters->AddWithValue("@usern", originalUsername);

                        int rowsAffected = deleteCmd->ExecuteNonQuery();

                        if (rowsAffected > 0)
                        {
                            clearFields();
                            displayAllUsersData();
                            MessageBox::Show("Deleted Successfully!", "Information Message", MessageBoxButtons::OK, MessageBoxIcon::Information);
                        }
                        else
                        {
                            MessageBox::Show("No record found for deletion!", "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
                        }
                    }
                    catch (Exception^ ex) {
                        MessageBox::Show("Deletion Failed: " + ex->Message, "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
                    }
                    finally {
                        connection->Close();
                    }
                }
            }
        }
    }
private: System::Void USERS_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
