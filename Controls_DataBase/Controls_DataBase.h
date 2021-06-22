
// Controls_DataBase.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CControlsDataBaseApp:
// See Controls_DataBase.cpp for the implementation of this class
//

class CControlsDataBaseApp : public CWinApp
{
public:
	CControlsDataBaseApp();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CControlsDataBaseApp theApp;
