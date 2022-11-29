#include "FormStock.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void MainStock(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    //WinformCDemo is your project name
    Projet::Form5 MonFormulaire;
    Application::Run(% MonFormulaire);

}