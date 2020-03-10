#ifndef _APPLICATION_H_
#define _APPLICATION_H_
#include <string>
#include "Demo.h"

class Application
{
public:
	static int Run(Demo* sample, HINSTANCE hInstance, int nCmdShow);
	static HWND GetHwnd() { return m_hwnd; }

protected:
	static LRESULT CALLBACK WindowProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);

private:
	static HWND m_hwnd;
};
#endif

