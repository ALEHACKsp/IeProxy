// IeProxy.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CIeProxyApp:
// �йش����ʵ�֣������ IeProxy.cpp
//

class CIeProxyApp : public CWinApp
{
public:
	CIeProxyApp();

// ��д
	public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CIeProxyApp theApp;