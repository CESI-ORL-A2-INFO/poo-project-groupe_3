#include "FormPers.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void MainPersonnel(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Projet::Form2 MonFormulaire;
    Application::Run(% MonFormulaire);
}