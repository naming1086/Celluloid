#ifndef _TESTSAMPLE_H_
#define _TESTSAMPLE_H_
#include "Demo.h"
#include "Meshes.h"

class TestDemo : public Demo
{
public:
	TestDemo(UINT width, UINT height, std::wstring name)
		:Demo(width, height, name)
	{
	}
	~TestDemo();

	virtual void OnInit() override;
	virtual void OnUpdate() override;
	virtual void OnRender() override;
	virtual void OnDestroy() override;

private:
	Meshes * m_Model{ nullptr };

};

#endif