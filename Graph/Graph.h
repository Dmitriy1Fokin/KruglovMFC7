
// Graph.h : ������� ���� ��������� ��� ���������� PROJECT_NAME
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�������� stdafx.h �� ��������� ����� ����� � PCH"
#endif

#include "resource.h"		// �������� �������


// CGraphApp:
// � ���������� ������� ������ ��. Graph.cpp
//

class CGraphApp : public CWinApp
{
public:
	CGraphApp();

// ���������������
public:
	virtual BOOL InitInstance();

// ����������

	DECLARE_MESSAGE_MAP()
};

extern CGraphApp theApp;
