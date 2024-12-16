#include "Form1.h"
#include <Windows.h>

#pragma comment(lib,"user32.lib")

using namespace paint;

[STAThread]
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
    if (Environment::OSVersion->Version->Major >= 6)
        SetProcessDPIAware();
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew Form1);
    return 0;
}