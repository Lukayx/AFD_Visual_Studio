#include "pch.h"
#include "LeerPalabra.h"

#include <Windows.h>
using namespace Automata_Finito_Determinista;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)

{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm());
	return 0;
}
