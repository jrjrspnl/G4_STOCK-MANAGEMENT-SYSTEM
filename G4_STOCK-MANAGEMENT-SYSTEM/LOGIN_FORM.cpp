#include "LOGIN_FORM.h"
#include "USERS.h"
#include "CATEGORIES.h"
#include "PRODUCTS.h"
#include "ORDERS.h"
#include "CASHIER_DB.h"
#include "DASHBOARD.h"
#include "ADMIN_DB.h"


using namespace G4STOCKMANAGEMENTSYSTEM;
[STAThreadAttribute]

int main() {

	Application::Run(gcnew	LOGIN_FORM());

	return 0;
}

