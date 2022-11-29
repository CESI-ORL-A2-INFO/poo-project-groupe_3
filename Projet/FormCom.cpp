#include "FormCom.h"


using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void MainCommande(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    //WinformCDemo is your project name
    Projet::Form4 MonFormulaire;
    Application::Run(% MonFormulaire);

}