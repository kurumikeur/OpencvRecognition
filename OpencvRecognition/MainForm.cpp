#include "pch.h"
#include "RecognitionCV.h"
#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main()
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    OpencvRecognition::MainForm form;
    Application::Run(% form);

    
    return 0;
}
