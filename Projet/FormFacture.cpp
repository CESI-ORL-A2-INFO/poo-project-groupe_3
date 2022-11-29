#include "FormFacture.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void MainFacture(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    //WinformCDemo is your project name
    Projet::Form6 MonFormulaire;
    Application::Run(% MonFormulaire);

}