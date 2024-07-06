#pragma once
#include "CategoriesData.h"
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
    /// Summary for CATEGORIES
    /// </summary>
    public ref class CATEGORIES : public System::Windows::Forms::Form
    {
        SqlConnection^ connection = gcnew SqlConnection("Data Source=(LocalDB)\\MSSQLLocalDB;AttachDbFilename=C:\\Users\\jimwiel\\Documents\\stock.mdf;Integrated Security=True;Connect Timeout=30");
    public:
        CATEGORIES(void)
        {
            InitializeComponent();
            displayCategoriesData();
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
        void displayCategoriesData() {
            CategoriesData^ cData = gcnew CategoriesData();

            List<CategoriesData^>^ listData = cData->AllCategoriesData();
            Table_Categories->DataSource = listData;

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
    private: ComponentFactory::Krypton::Toolkit::KryptonButton^ Btn_updCat;
    private: ComponentFactory::Krypton::Toolkit::KryptonButton^ Btn_addCat;



    private: ComponentFactory::Krypton::Toolkit::KryptonButton^ Btn_delCat;
    private: ComponentFactory::Krypton::Toolkit::KryptonButton^ Btn_clrCat;









    private: System::Windows::Forms::Panel^ panel1;
    private: System::Windows::Forms::Label^ label9;
    private: ComponentFactory::Krypton::Toolkit::KryptonTextBox^ Txt_Category;
    private: ComponentFactory::Krypton::Toolkit::KryptonDataGridView^ Table_Categories;


















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
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            this->Txt_Category = (gcnew ComponentFactory::Krypton::Toolkit::KryptonTextBox());
            this->Btn_updCat = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->Btn_addCat = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->Btn_delCat = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->Btn_clrCat = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->kryptonTextBox2 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonTextBox());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->Table_Categories = (gcnew ComponentFactory::Krypton::Toolkit::KryptonDataGridView());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->panel2->SuspendLayout();
            this->panel1->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Table_Categories))->BeginInit();
            this->SuspendLayout();
            // 
            // panel2
            // 
            this->panel2->BackColor = System::Drawing::Color::White;
            this->panel2->Controls->Add(this->Txt_Category);
            this->panel2->Controls->Add(this->Btn_updCat);
            this->panel2->Controls->Add(this->Btn_addCat);
            this->panel2->Controls->Add(this->Btn_delCat);
            this->panel2->Controls->Add(this->Btn_clrCat);
            this->panel2->Controls->Add(this->label1);
            this->panel2->Location = System::Drawing::Point(24, 17);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(764, 208);
            this->panel2->TabIndex = 20;
            // 
            // Txt_Category
            // 
            this->Txt_Category->Location = System::Drawing::Point(23, 39);
            this->Txt_Category->Name = L"Txt_Category";
            this->Txt_Category->Size = System::Drawing::Size(231, 27);
            this->Txt_Category->StateActive->Back->Color1 = System::Drawing::Color::WhiteSmoke;
            this->Txt_Category->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Txt_Category->StateCommon->Border->Rounding = 5;
            this->Txt_Category->TabIndex = 20;
            // 
            // Btn_updCat
            // 
            this->Btn_updCat->Location = System::Drawing::Point(40, 147);
            this->Btn_updCat->Name = L"Btn_updCat";
            this->Btn_updCat->OverrideDefault->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
                static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
            this->Btn_updCat->OverrideDefault->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
                static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
            this->Btn_updCat->OverrideDefault->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
                static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
            this->Btn_updCat->OverrideDefault->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
                static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
            this->Btn_updCat->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Btn_updCat->Size = System::Drawing::Size(85, 40);
            this->Btn_updCat->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
                static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
            this->Btn_updCat->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
                static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
            this->Btn_updCat->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
                static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
            this->Btn_updCat->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
                static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
            this->Btn_updCat->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Btn_updCat->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::White;
            this->Btn_updCat->StateCommon->Content->ShortText->Color2 = System::Drawing::Color::White;
            this->Btn_updCat->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->Btn_updCat->TabIndex = 18;
            this->Btn_updCat->Values->Text = L"Update";
            this->Btn_updCat->Click += gcnew System::EventHandler(this, &CATEGORIES::Btn_updCat_Click);
            // 
            // Btn_addCat
            // 
            this->Btn_addCat->Location = System::Drawing::Point(40, 82);
            this->Btn_addCat->Name = L"Btn_addCat";
            this->Btn_addCat->OverrideDefault->Back->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_addCat->OverrideDefault->Back->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_addCat->OverrideDefault->Border->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_addCat->OverrideDefault->Border->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_addCat->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Btn_addCat->OverrideFocus->Back->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_addCat->OverrideFocus->Back->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_addCat->OverrideFocus->Border->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_addCat->OverrideFocus->Border->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_addCat->OverrideFocus->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Btn_addCat->Size = System::Drawing::Size(85, 40);
            this->Btn_addCat->StateCommon->Back->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_addCat->StateCommon->Back->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_addCat->StateCommon->Border->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_addCat->StateCommon->Border->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_addCat->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Btn_addCat->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::White;
            this->Btn_addCat->StateCommon->Content->ShortText->Color2 = System::Drawing::Color::White;
            this->Btn_addCat->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->Btn_addCat->StateDisabled->Back->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_addCat->StateDisabled->Back->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_addCat->StateDisabled->Border->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_addCat->StateDisabled->Border->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_addCat->StateDisabled->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Btn_addCat->StateNormal->Back->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_addCat->StateNormal->Back->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_addCat->StateNormal->Border->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_addCat->StateNormal->Border->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_addCat->StateNormal->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Btn_addCat->StatePressed->Back->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_addCat->StatePressed->Back->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_addCat->StatePressed->Border->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_addCat->StatePressed->Border->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_addCat->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Btn_addCat->StatePressed->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->Btn_addCat->StateTracking->Back->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_addCat->StateTracking->Back->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_addCat->StateTracking->Border->Color1 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_addCat->StateTracking->Border->Color2 = System::Drawing::Color::MediumSeaGreen;
            this->Btn_addCat->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Btn_addCat->TabIndex = 17;
            this->Btn_addCat->Values->Text = L"Add";
            this->Btn_addCat->Click += gcnew System::EventHandler(this, &CATEGORIES::Btn_addCat_Click);
            // 
            // Btn_delCat
            // 
            this->Btn_delCat->Cursor = System::Windows::Forms::Cursors::Arrow;
            this->Btn_delCat->Location = System::Drawing::Point(153, 82);
            this->Btn_delCat->Name = L"Btn_delCat";
            this->Btn_delCat->OverrideDefault->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)),
                static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
            this->Btn_delCat->OverrideDefault->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)),
                static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
            this->Btn_delCat->OverrideDefault->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)),
                static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
            this->Btn_delCat->OverrideDefault->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)),
                static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
            this->Btn_delCat->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Btn_delCat->Size = System::Drawing::Size(85, 40);
            this->Btn_delCat->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)),
                static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
            this->Btn_delCat->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)),
                static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
            this->Btn_delCat->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)),
                static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
            this->Btn_delCat->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)),
                static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
            this->Btn_delCat->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Btn_delCat->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::White;
            this->Btn_delCat->StateCommon->Content->ShortText->Color2 = System::Drawing::Color::White;
            this->Btn_delCat->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->Btn_delCat->TabIndex = 16;
            this->Btn_delCat->Values->Text = L"Delete";
            this->Btn_delCat->Click += gcnew System::EventHandler(this, &CATEGORIES::Btn_delCat_Click);
            // 
            // Btn_clrCat
            // 
            this->Btn_clrCat->Location = System::Drawing::Point(153, 147);
            this->Btn_clrCat->Name = L"Btn_clrCat";
            this->Btn_clrCat->OverrideDefault->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
            this->Btn_clrCat->OverrideDefault->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
            this->Btn_clrCat->OverrideDefault->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
            this->Btn_clrCat->OverrideDefault->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
            this->Btn_clrCat->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Btn_clrCat->Size = System::Drawing::Size(85, 40);
            this->Btn_clrCat->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
            this->Btn_clrCat->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
            this->Btn_clrCat->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
            this->Btn_clrCat->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
            this->Btn_clrCat->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Btn_clrCat->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::White;
            this->Btn_clrCat->StateCommon->Content->ShortText->Color2 = System::Drawing::Color::White;
            this->Btn_clrCat->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->Btn_clrCat->TabIndex = 15;
            this->Btn_clrCat->Values->Text = L"CLEAR";
            this->Btn_clrCat->Click += gcnew System::EventHandler(this, &CATEGORIES::Btn_clrCat_Click);
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->BackColor = System::Drawing::Color::White;
            this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(21, 16);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(72, 16);
            this->label1->TabIndex = 5;
            this->label1->Text = L"Category:";
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
            // panel1
            // 
            this->panel1->BackColor = System::Drawing::Color::White;
            this->panel1->Controls->Add(this->Table_Categories);
            this->panel1->Controls->Add(this->label9);
            this->panel1->Location = System::Drawing::Point(24, 243);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(764, 347);
            this->panel1->TabIndex = 22;
            // 
            // Table_Categories
            // 
            this->Table_Categories->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
            this->Table_Categories->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->Table_Categories->Location = System::Drawing::Point(17, 49);
            this->Table_Categories->Name = L"Table_Categories";
            this->Table_Categories->RightToLeft = System::Windows::Forms::RightToLeft::No;
            this->Table_Categories->RowHeadersVisible = false;
            this->Table_Categories->Size = System::Drawing::Size(722, 284);
            this->Table_Categories->StateCommon->Background->Color1 = System::Drawing::Color::Gainsboro;
            this->Table_Categories->StateCommon->Background->Color2 = System::Drawing::Color::Gainsboro;
            this->Table_Categories->StateCommon->BackStyle = ComponentFactory::Krypton::Toolkit::PaletteBackStyle::GridBackgroundList;
            this->Table_Categories->StateCommon->DataCell->Back->Color1 = System::Drawing::Color::White;
            this->Table_Categories->StateCommon->DataCell->Back->Color2 = System::Drawing::Color::White;
            this->Table_Categories->StateCommon->HeaderColumn->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
            this->Table_Categories->StateCommon->HeaderColumn->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
            this->Table_Categories->StateCommon->HeaderColumn->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
            this->Table_Categories->StateCommon->HeaderColumn->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
            this->Table_Categories->StateCommon->HeaderColumn->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Table_Categories->TabIndex = 21;
            this->Table_Categories->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &CATEGORIES::Table_Categories_CellClick_1);
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
            // CATEGORIES
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::WhiteSmoke;
            this->ClientSize = System::Drawing::Size(809, 605);
            this->Controls->Add(this->panel2);
            this->Controls->Add(this->panel1);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
            this->Name = L"CATEGORIES";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"CATEGORIES";
            this->panel2->ResumeLayout(false);
            this->panel2->PerformLayout();
            this->panel1->ResumeLayout(false);
            this->panel1->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Table_Categories))->EndInit();
            this->ResumeLayout(false);

        }
#pragma endregion
    private:  int getID = 0;

    private:  void clearFields() {
        Txt_Category->Text = "";
    }
    private: System::Void Btn_addCat_Click(System::Object^ sender, System::EventArgs^ e) {
        if (Txt_Category->Text == "") {
            MessageBox::Show("Empty Fields!", "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        else {
            if (checkConnection()) {
                try
                {
                    connection->Open();

                    System::String^ checkCat = "SELECT * FROM categories WHERE category = @cat";
                    SqlCommand^ cmd = gcnew SqlCommand(checkCat, connection); {
                        cmd->Parameters->AddWithValue("@cat", Txt_Category->Text->Trim());

                        SqlDataAdapter^ adapter = gcnew SqlDataAdapter(cmd);
                        DataTable^ table = gcnew DataTable();
                        adapter->Fill(table);

                        if (table->Rows->Count > 0)
                        {
                            MessageBox::Show("CATEGORY: " + Txt_Category->Text->Trim() + " is already exist!", "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
                        }
                        else
                        {
                            System::String^ insertData = "INSERT INTO categories(category, date) VALUES(@cat, @date)";
                            SqlCommand^ insertD = gcnew SqlCommand(insertData, connection); {
                                insertD->Parameters->AddWithValue("@cat", Txt_Category->Text->Trim());
                                DateTime today = DateTime::Today;
                                insertD->Parameters->AddWithValue("@date", today);

                                insertD->ExecuteNonQuery();
                                clearFields();
                                displayCategoriesData();
                                MessageBox::Show("Added Successfully!", "Information Message", MessageBoxButtons::OK, MessageBoxIcon::Information);

                            }
                        }
                    }
                }
                catch (Exception^ ex)
                {
                    MessageBox::Show("Connection Failed: " + ex->Message, "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
                }
                finally
                {
                    connection->Close();
                }
            }
        }
    }
    private: System::Void Btn_clrCat_Click(System::Object^ sender, System::EventArgs^ e) {
        clearFields();
    }

    private: System::Void Btn_updCat_Click(System::Object^ sender, System::EventArgs^ e) {

            if (Txt_Category->Text == "")
            {
                MessageBox::Show("Empty Fields!", "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
            else {
                if (MessageBox::Show("Are you sure you want to update CATEGORY: " + getID + "?", "Confirmation Message", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
                {
                    if (checkConnection())
                    {
                        try
                        {
                            connection->Open();

                            System::String^ updateData = "UPDATE categories SET category = @cat WHERE id = @id";
                            SqlCommand^ updateCmd = gcnew SqlCommand(updateData, connection);

                            updateCmd->Parameters->AddWithValue("@cat", Txt_Category->Text->Trim());
                            updateCmd->Parameters->AddWithValue("@id", getID);

                            updateCmd->ExecuteNonQuery();
                            clearFields();
                            displayCategoriesData();
                            MessageBox::Show("Updated Successfully!", "Information Message", MessageBoxButtons::OK, MessageBoxIcon::Information);
                        }
                        catch (Exception^ ex)
                        {
                            MessageBox::Show("Connection Failed: " + ex->Message, "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
                        }
                        finally {
                            connection->Close();
                        }
                    }
                }
            }
    }


    private: System::Void Btn_delCat_Click(System::Object^ sender, System::EventArgs^ e) {
            if (Txt_Category->Text == "")
            {
                MessageBox::Show("Empty Fields!", "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
            else {
                if (MessageBox::Show("Are you sure you want to delete CATEGORY: " + getID + "?", "Confirmation Message", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
                {
                    if (checkConnection())
                    {
                        try
                        {
                            connection->Open();

                            System::String^ removeData = "DELETE categories WHERE id = @id";
                            SqlCommand^ delCmd = gcnew SqlCommand(removeData, connection);

                            delCmd->Parameters->AddWithValue("@cat", Txt_Category->Text->Trim());
                            delCmd->Parameters->AddWithValue("@id", getID);

                            delCmd->ExecuteNonQuery();
                            clearFields();
                            displayCategoriesData();
                            MessageBox::Show("Deleted Successfully!", "Information Message", MessageBoxButtons::OK, MessageBoxIcon::Information);
                        }
                        catch (Exception^ ex)
                        {
                            MessageBox::Show("Connection Failed: " + ex->Message, "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
                        }
                        finally {
                            connection->Close();
                        }
                    }
                }
            }
        }

    private: System::Void Table_Categories_CellClick_1(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
        if (e->RowIndex >= -1) {

            DataGridViewRow^ row = Table_Categories->Rows[e->RowIndex];

            getID = (int)row->Cells[0]->Value;
            Txt_Category->Text = row->Cells[1]->Value->ToString();
        }
    }
    };
}

