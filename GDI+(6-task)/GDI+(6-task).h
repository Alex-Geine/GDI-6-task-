
// GDI+(6-task).h: главный файл заголовка для приложения PROJECT_NAME
//

#pragma once

#ifndef __AFXWIN_H__
	#error "включить pch.h до включения этого файла в PCH"
#endif

#include "resource.h"		// основные символы


// CGDI6taskApp:
// Сведения о реализации этого класса: GDI+(6-task).cpp
//

class CGDI6taskApp : public CWinApp
{
public:
	CGDI6taskApp();

// Переопределение
public:
	virtual BOOL InitInstance();

// Реализация

	DECLARE_MESSAGE_MAP()
};

extern CGDI6taskApp theApp;
