
// All_controls.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CAllcontrolsApp:
// See All_controls.cpp for the implementation of this class
//

class CAllcontrolsApp : public CWinApp
{
public:
	CAllcontrolsApp();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CAllcontrolsApp theApp;
