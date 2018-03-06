
// Graph.h : главный файл заголовка для приложения PROJECT_NAME
//

#pragma once

#ifndef __AFXWIN_H__
	#error "включить stdafx.h до включения этого файла в PCH"
#endif

#include "resource.h"		// основные символы


// CGraphApp:
// О реализации данного класса см. Graph.cpp
//

class CGraphApp : public CWinApp
{
public:
	CGraphApp();

// Переопределение
public:
	virtual BOOL InitInstance();

// Реализация

	DECLARE_MESSAGE_MAP()
};

extern CGraphApp theApp;
