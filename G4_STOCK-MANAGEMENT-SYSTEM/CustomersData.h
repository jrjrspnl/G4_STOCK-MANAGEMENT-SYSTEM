#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace System::Data;
using namespace System::Data::SqlClient;

ref class CustomersData
{
public:
    property String^ Date;
    property String^ Change;     
    property String^ Amount;          
    property String^ TotalPrice;  
    property String^ Quantity;
    property String^ Price;
    property String^ Product;
    property String^ Category;
    property String^ CustomerID;

    SqlConnection^ connect = gcnew SqlConnection("Data Source = (localdb)\\MSSQLLocalDB;AttachDbFilename = C:\\Users\\Jerwin\\Documents\\stock.mdf;Integrated Security = True;Encrypt = False");

    List<CustomersData^>^ AllCustomersData() {
        List<CustomersData^>^ listData = gcnew List<CustomersData^>();

        if (connect->State != ConnectionState::Open) {
            try {
                connect->Open();

                // Updated query to include the `amount` column
                String^ selectData = "SELECT customer_id, category, product, price, quantity, total_price, amount, [change], order_date FROM customers";

                SqlCommand^ cmd = gcnew SqlCommand(selectData, connect);

                SqlDataReader^ reader = cmd->ExecuteReader();

                while (reader->Read()) {
                    CustomersData^ cData = gcnew CustomersData();

                    cData->CustomerID = reader["customer_id"]->ToString();
                    cData->Category = reader["category"]->ToString();
                    cData->Product = reader["product"]->ToString();
                    cData->Price = reader["price"]->ToString();
                    cData->Quantity = reader["quantity"]->ToString();
                    cData->TotalPrice = reader["total_price"]->ToString();
                    cData->Amount = reader["amount"]->ToString(); // Populate the Amount property
                    cData->Change = reader["change"]->ToString();
                    cData->Date = reader["order_date"]->ToString();

                    listData->Add(cData);
                }

                reader->Close();
            }
            catch (Exception^ ex) {
                Console::WriteLine("Connection Failed: " + ex->Message);
            }
            finally {
                connect->Close();
            }
        }
        return listData;
    }
};
