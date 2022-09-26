#include "pch.h"
#include "SalesMainForm.h"
using namespace System;
using namespace PiggyModel;
using namespace System::Collections::Generic;
using namespace System::Windows::Forms;


int main(array<System::String ^> ^args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    //LPOOInduction is your project name
    PiggyApp::SalesMainForm form;
    Application::Run(% form);
    return 0;
}
