#include "Application.h"
#include "TestDemo.h"


int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE, LPSTR, int nCmdShow)
{
	TestDemo sample(1280, 720, L"Test Case");
	return Application::Run(&sample, hInstance, nCmdShow);
}
