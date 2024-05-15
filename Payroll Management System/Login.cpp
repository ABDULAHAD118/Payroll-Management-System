#include "Login.h"

using namespace System;
using namespace System::Windows::Forms;

int main(array<String ^> ^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    PayrollManagementSystem::Login ^ loginpage = gcnew PayrollManagementSystem::Login();
    loginpage->ShowDialog();
    return 0;
}
