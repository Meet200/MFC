// here basically gives message when window will be created 
#include <afxwin.h>
class CMainFrame : public CFrameWnd
{
public:
	CMainFrame();
protected:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnShowWindow(BOOL bShow, UINT nStatus);
	afx_msg void OnActivate(UINT nState, CWnd* pWndOther,BOOL bMinimized);
	DECLARE_MESSAGE_MAP()
};
CMainFrame::CMainFrame()
{
	// Create the window's frame
	Create(NULL, "Windows Application", WS_OVERLAPPEDWINDOW,
		CRect(120, 100, 700, 480), NULL);
}
class CExerciseApp : public CWinApp
{
public:
	BOOL InitInstance();
};
BEGIN_MESSAGE_MAP(CMainFrame, CFrameWnd)
	ON_WM_CREATE() // Always need to write here 
	ON_WM_SHOWWINDOW()
	ON_WM_ACTIVATE()
END_MESSAGE_MAP()


int CMainFrame::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	// Call the base class to create the window
	if (CFrameWnd::OnCreate(lpCreateStruct) == 0)
	{
		// If the window was successfully created, let the user know
		MessageBox("The window has been created!!!");
		// Since the window was successfully created, return 0
		return 0;
	}
	// Otherwise, return -1
	return -1;
}
void CMainFrame::OnShowWindow(BOOL bShow, UINT nStatus)
{
	CFrameWnd::OnShowWindow(bShow, nStatus);
	//  Add your message handler code here
	ShowWindow(SW_MAXIMIZE); // To maximize window on created 
}

void CMainFrame::OnActivate(UINT nState, CWnd* pWndOther, BOOL bMinimized)
{
	CFrameWnd::OnActivate(nState, pWndOther, bMinimized);
	// Add needed things when Windows Activated else show messages 
	switch (nState)
	{
	case WA_ACTIVE:
		MessageBox("This window has been activated, without the mouse!");
		break;
	case WA_INACTIVE:
		MessageBox("This window has been deactivated and cannot be changed now!!");
		break;
	case WA_CLICKACTIVE:
		MessageBox("This window has been activated using the mouse!!!");
		break;
	}
}


BOOL CExerciseApp::InitInstance()
{
	m_pMainWnd = new CMainFrame;
	m_pMainWnd->ShowWindow(SW_SHOW);
	m_pMainWnd->UpdateWindow();
	return TRUE;
}
CExerciseApp theApp;