#include "MyForm.h"

using namespace System;
using namespace::Windows::Forms;
[STAThreadAttribute]


int main(array<String^>^ arg)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	prueba2::MyForm  mainForm;
	Application::Run(% mainForm);
	return 0;
}