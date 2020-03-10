#ifndef _SAMPLE_H_
#define _SAMPLE_H_
#include <string>
#include "d3d11.h"

class Demo
{
public:
	Demo(UINT width, UINT height, std::wstring name);
	virtual ~Demo();

	// Interfaces
	virtual void OnInit();
	virtual void OnUpdate() = 0;
	virtual void OnRender() = 0;
	virtual void OnDestroy() = 0;
	virtual void OnResize();

	// Handle input
	virtual void OnKeyDown(UINT8 /*key*/) {}
	virtual void OnKeyUp(UINT8 /*key*/) {}

	//
	UINT GetWidth() const { return m_Width; }
	UINT GetHeight() const { return m_Height; }
	const WCHAR* GetTitle() const { return m_Title.c_str(); }

protected:
	void SetCustomWindowText(LPCWSTR text);
	void InitD3D11();

	// Viewport dimensions.
	UINT m_Width;
	UINT m_Height;
	float m_AspectRatio;

	//
	ID3D11Device* m_Device{ nullptr };
	UINT      m_4xMsaaQuality;

	ID3D11DeviceContext* m_Context{ nullptr };
	IDXGISwapChain* m_SwapChain{ nullptr };
	ID3D11Texture2D* m_DepthStencilBuffer{ nullptr };
	ID3D11RenderTargetView* m_RenderTargetView{ nullptr };
	ID3D11DepthStencilView* m_DepthStencilView{ nullptr };
	D3D11_VIEWPORT m_ScreenViewport;
	D3D_DRIVER_TYPE m_DriverType{ D3D_DRIVER_TYPE_HARDWARE };

private:
	std::wstring m_Title;
};


#endif // 
