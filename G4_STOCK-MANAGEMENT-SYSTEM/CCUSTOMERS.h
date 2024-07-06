#pragma once
#include "CustomersData.h"

namespace G4STOCKMANAGEMENTSYSTEM {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CCUSTOMERS
	/// </summary>
	public ref class CCUSTOMERS : public System::Windows::Forms::Form
	{
	public:
		CCUSTOMERS(void)
		{
			InitializeComponent();
			displayCCustomersData();
			//
			//TODO: Add the constructor code here
			//
		}
		void displayCCustomersData() {
			CustomersData^ cData = gcnew CustomersData();

			List<CustomersData^>^ listData = cData->AllCustomersData();
			Table_CCustomers->DataSource = listData;

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CCUSTOMERS()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label9;
	protected:
	private: System::Windows::Forms::Panel^ panel1;
	private: ComponentFactory::Krypton::Toolkit::KryptonDataGridView^ Table_CCustomers;













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
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->Table_CCustomers = (gcnew ComponentFactory::Krypton::Toolkit::KryptonDataGridView());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Table_CCustomers))->BeginInit();
			this->SuspendLayout();
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(19, 20);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(135, 23);
			this->label9->TabIndex = 7;
			this->label9->Text = L"All Customers";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Controls->Add(this->Table_CCustomers);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Location = System::Drawing::Point(12, 26);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1010, 401);
			this->panel1->TabIndex = 20;
			// 
			// Table_CCustomers
			// 
			this->Table_CCustomers->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->Table_CCustomers->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Table_CCustomers->Location = System::Drawing::Point(32, 64);
			this->Table_CCustomers->Name = L"Table_CCustomers";
			this->Table_CCustomers->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Table_CCustomers->RowHeadersVisible = false;
			this->Table_CCustomers->Size = System::Drawing::Size(947, 317);
			this->Table_CCustomers->StateCommon->Background->Color1 = System::Drawing::Color::Gainsboro;
			this->Table_CCustomers->StateCommon->Background->Color2 = System::Drawing::Color::Gainsboro;
			this->Table_CCustomers->StateCommon->BackStyle = ComponentFactory::Krypton::Toolkit::PaletteBackStyle::GridBackgroundList;
			this->Table_CCustomers->StateCommon->DataCell->Back->Color1 = System::Drawing::Color::White;
			this->Table_CCustomers->StateCommon->DataCell->Back->Color2 = System::Drawing::Color::White;
			this->Table_CCustomers->StateCommon->HeaderColumn->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
				static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->Table_CCustomers->StateCommon->HeaderColumn->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
				static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->Table_CCustomers->StateCommon->HeaderColumn->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
				static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->Table_CCustomers->StateCommon->HeaderColumn->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
				static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->Table_CCustomers->StateCommon->HeaderColumn->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->Table_CCustomers->TabIndex = 23;
			// 
			// CCUSTOMERS
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1036, 452);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"CCUSTOMERS";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"CCUSTOMERS";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Table_CCustomers))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
