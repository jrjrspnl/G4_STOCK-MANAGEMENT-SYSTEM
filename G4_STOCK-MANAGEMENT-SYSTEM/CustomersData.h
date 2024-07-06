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
    property String^ CustomerID;

    SqlConnection^ connect = gcnew SqlConnection("Data Source=(LocalDB)\\MSSQLLocalDB;AttachDbFilename=C:\\Users\\jimwiel\\Documents\\stock.mdf;Integrated Security=True;Connect Timeout=30");

    List<CustomersData^>^ AllCustomersData() {
        List<CustomersData^>^ listData = gcnew List<CustomersData^>();

        if (connect->State != ConnectionState::Open) {
            try {
                connect->Open();

                String^ selectData = "SELECT * FROM customers";

                SqlCommand^ cmd = gcnew SqlCommand(selectData, connect);

                SqlDataReader^ reader = cmd->ExecuteReader();

                while (reader->Read()) {
                    CustomersData^ cData = gcnew CustomersData();

                    cData->CustomerID = reader["customer_id"]->ToString();
                    cData->TotalPrice = reader["total_price"]->ToString();
                    cData->Amount = reader["amount"]->ToString();
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
