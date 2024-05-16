#include "CSN.h"
#include"Visitor.h"
#include"User.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	CSN::CSN csn;
	CSNAPP::ReadingFiles();
	Application::Run(% csn);
}
