#include <afxwin.h>
class CSimpleFrame : public CFrameWnd
{
public:
	CSimpleFrame();
	DECLARE_DYNCREATE(CSimpleFrame) // Macros to make object dynamically created
	
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
};
struct CSimpleApp : public CWinApp {
	BOOL InitInstance();
};

IMPLEMENT_DYNCREATE(CSimpleFrame, CFrameWnd)


CSimpleFrame::CSimpleFrame()
{
	// Create the window's frame
	//  WS_VISIBLE | WS_SYSMENU to display only close 
	// WS_VISIBLE | WS_SYSMENU | WS_MINIMIZEBOX to hide only MINIMIZE
	// WS_VISIBLE | WS_SYSMENU | WS_MINIMIZEBOX | WS_MAXIMIZEBOX | WS_THICKFRAME tp add special border
	// WS_OVERLAPPEDWINDOW to change size
	// CRect(120, 100, 700, 480) to change dimension of window
	Create(NULL, _T("Windows Application Changed Dimension"),WS_OVERLAPPEDWINDOW, CRect(300, 100, 700, 500));
	
}

// Frame diagnostics
#ifdef _DEBUG
void CSimpleFrame::AssertValid() const
{
	CFrameWnd::AssertValid();
}
void CSimpleFrame::Dump(CDumpContext& dc) const
{
	CFrameWnd::Dump(dc);
}
#endif // _DEBUG
BOOL CSimpleApp::InitInstance()
{
	CSimpleFrame* Tester = new CSimpleFrame();
	m_pMainWnd = Tester;
	m_pMainWnd->ShowWindow(SW_SHOW);
	m_pMainWnd->UpdateWindow();

	return TRUE;
}
CSimpleApp theApp;

