#include "LOGIN_FORM.h"
#include "CASHIER_DB.h"

using namespace G4STOCKMANAGEMENTSYSTEM;
[STAThreadAttribute]

int main() {

	Application::Run(gcnew CASHIER_DB());

	return 0;
}

