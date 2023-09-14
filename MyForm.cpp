#include "MyForm.h"
#include<Windows.h>

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]

int main(cli::array<String^> ^ args)
{
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	Project1::MyForm form;
	Application::Run(% form);
}
//int WINAPI WinMain(HINSTANCE,HINSTANCE,LPSTR, int) {
//	Application::EnableVisualStyles();
//	Application::SetCompatibleTextRenderingDefault(false);
//	Project1::MyForm form;
//	Application::Run(% form);
//	return 0;
//}
