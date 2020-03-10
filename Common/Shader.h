#ifndef _SHADER_H_
#define _SHADER_H_
#include "Globals.h"

class Shader
{
public:
	Shader();
	~Shader();

	ID3D11VertexShader* GetVertexShader() const { return m_VertexShader; }
	ID3D11PixelShader* GetPixelShader() const { return m_PixelShader; }

	HRESULT CompileShaderFromFile(WCHAR* szFileName, LPCSTR szEntryPoint, LPCSTR szShaderModel, ID3DBlob** ppBlobOut);

private:
	ID3D11VertexShader * m_VertexShader{ nullptr };
	ID3D11PixelShader * m_PixelShader{ nullptr };
};

#endif