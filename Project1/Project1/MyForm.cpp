#include "MyForm.h"
#include "splash_screen.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project1::splash_screen form;  // MyProject �ݮھڱM�צW�ٶi�����
	Application::Run(% form);
}