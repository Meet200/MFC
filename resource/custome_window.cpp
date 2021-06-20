#include <afxwin.h>
#include "resource.h"
class CResApp : public CWinApp
{
public:
	BOOL InitInstance();
};
class CResFrame : public CFrameWnd
{
public:
	HACCEL m_hAccel;

	CResFrame()
	{

		m_hAccel = ::LoadAccelerators(AfxGetInstanceHandle(),
			MAKEINTRESOURCE(IDR_ACCELERATOR1));
		Create(NULL, "Resources Fundamentals",
			WS_OVERLAPPEDWINDOW, CRect(200, 120, 640, 400), NULL, MAKEINTRESOURCE(ID_MENU1));
	}
};
BOOL CResApp::InitInstance()
{
	m_pMainWnd = new CResFrame;
	m_pMainWnd->ShowWindow(SW_SHOW);
	m_pMainWnd->UpdateWindow();
	return TRUE;
}
CResApp theApp;