#include "MyForm.h"
#include "splash_screen.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project1::splash_screen form;  // MyProject 需根據專案名稱進行替換
	Application::Run(% form);
}