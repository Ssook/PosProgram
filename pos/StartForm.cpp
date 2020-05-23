#include "StartForm.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

void main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	pos::StartForm form;
	Application::Run(%form);
}

