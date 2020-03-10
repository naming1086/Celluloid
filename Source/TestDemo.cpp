#include "TestDemo.h"
#include "FBXHelper.h"

TestDemo::~TestDemo()
{
	SAFE_DELETE(m_Model);
}

void TestDemo::OnInit()
{
	Demo::OnInit();

	m_Model = new Meshes;
	m_Model->Initialize(m_Device, "cylinder.fbx");
}

void TestDemo::OnUpdate()
{
}

void TestDemo::OnRender()
{
}

void TestDemo::OnDestroy()
{
}
