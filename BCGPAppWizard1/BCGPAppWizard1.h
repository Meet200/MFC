// BCGPAppWizard1.h : main header file for the BCGPAppWizard1 application
//

#pragma once

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols


// CBCGPAppWizard1App:
// See BCGPAppWizard1.cpp for the implementation of this class
//

class CBCGPAppWizard1App : public CBCGPWinApp
{
public:
	CBCGPAppWizard1App();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CBCGPAppWizard1App theApp;
