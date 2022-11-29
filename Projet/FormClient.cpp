#include "FormClient.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void MainClient(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    //WinformCDemo is your project name
    Projet::Form3 form;
    Application::Run(% form);

}