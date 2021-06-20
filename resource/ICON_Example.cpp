#include <afxwin.h>
#include "resource.h"
class CResFrame : public CFrameWnd
{
public:
	CResFrame()
	{
		
		const char* RWC = AfxRegisterWndClass(CS_VREDRAW | CS_HREDRAW,NULL,(HBRUSH)GetStockObject(GRAY_BRUSH),NULL);
		Create(RWC, "Custom Resources Exmaple", WS_OVERLAPPEDWINDOW,
			CRect(200, 120, 640, 400), NULL);
	}
};
class CResApp : public CWinApp
{
public:
	BOOL InitInstance()
	{
		m_pMainWnd = new CResFrame;
		m_pMainWnd->ShowWindow(SW_SHOW);
		m_pMainWnd->UpdateWindow();
		return TRUE;
	}
};
CResApp theApp;