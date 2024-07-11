#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace System::Data;
using namespace System::Data::SqlClient;


ref class OrdersData {
public:
    property String^ Date;
    property String^ Status;
    property String^ TotalPrice;
    property String^ QTY;
    property String^ OrigPrice;
    property String^ Category;
    property String^ PName;
    property String^ PID;
    property String^ CID;
    property int ID;

    List<OrdersData^>^ AllOrdersData() {
        List<OrdersData^>^ listData = gcnew List<OrdersData^>();

        SqlConnection^ connect = gcnew SqlConnection("Data Source=(LocalDB)\\MSSQLLocalDB;AttachDbFilename=C:\\Users\\jimwiel\\Documents\\stock.mdf;Integrated Security=True;Connect Timeout=30");

        try {
            connect->Open();
            int custID = 0;

            String^ selectCustData = "SELECT MAX(customer_id) FROM orders";

            SqlCommand^ cmd1 = gcnew SqlCommand(selectCustData, connect);

            Object^ result = cmd1->ExecuteScalar();

            if (result != DBNull::Value) {
                int temp = Convert::ToInt32(result);
                if (temp == 0) {
                    custID = 1;
                }
                else {
                    custID = temp;
                }
            }
            else {
                Console::WriteLine("ERROR ID");
            }

            String^ selectData = "SELECT * FROM orders WHERE customer_id = @cID";

            SqlCommand^ cmd2 = gcnew SqlCommand(selectData, connect);
            cmd2->Parameters->AddWithValue("@cID", custID);

            SqlDataReader^ reader = cmd2->ExecuteReader();

            while (reader->Read()) {
                OrdersData^ oData = gcnew OrdersData();

                oData->ID = (int)reader["id"];
                oData->CID = reader["customer_id"]->ToString();
                oData->PID = reader["prod_id"]->ToString();
                oData->PName = reader["prod_name"]->ToString();
                oData->Category = reader["category"]->ToString();
                oData->OrigPrice = reader["orig_price"]->ToString();
                oData->QTY = reader["qty"]->ToString();
                oData->TotalPrice = reader["total_Price"]->ToString();     
                oData->Status = reader["status"]->ToString();
                oData->Date = reader["order_date"]->ToString(); // Ensure correct field name

                listData->Add(oData);
            }
        }
        catch (Exception^ ex) {
            Console::WriteLine("Connection Failed: " + ex->Message);
        }
        finally {
            connect->Close();
        }

        return listData;
    }
};
