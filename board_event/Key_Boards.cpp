#include <afxwin.h>
class CMainFrame : public CFrameWnd {
public:
    CMainFrame();
protected:
    afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
    afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
    afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
    afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
    afx_msg void OnMouseMove(UINT nFlags, CPoint point);
   
    DECLARE_MESSAGE_MAP()
};
CMainFrame::CMainFrame() {

    // Create the window's frame
    Create(NULL, "MFC Messages Demo", WS_OVERLAPPEDWINDOW,
        CRect(120, 100, 700, 480), NULL);
}
class CMessagesApp : public CWinApp {
public:
    BOOL InitInstance();
};



BEGIN_MESSAGE_MAP(CMainFrame, CFrameWnd)
    ON_WM_CREATE()
    ON_WM_KEYDOWN()
    ON_WM_LBUTTONDOWN()
    ON_WM_RBUTTONUP()
END_MESSAGE_MAP()

void CMainFrame::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags) {
    switch (nChar) {

    case VK_RETURN:
        MessageBox("You pressed Enter");
        break;
    case VK_F1:
        MessageBox("Help is not available at the moment");
        break;
    case VK_DELETE:
        MessageBox("Can't Delete This");
        break;
    default:
        MessageBox("Whatever");
    }
}



void CMainFrame::OnLButtonDown(UINT nFlags, CPoint point) {
   
  
    MessageBox("Button Down Event ");
}
void CMainFrame::OnRButtonUp(UINT nFlags, CPoint point) {
    MessageBox("Right Mouse Button Up");
}
void CMainFrame::OnMouseMove(UINT nFlags, CPoint point) {
    MessageBox("Moves Moved!!!");

}


int CMainFrame::OnCreate(LPCREATESTRUCT lpCreateStruct) {
    // Call the base class to create the window
    if (CFrameWnd::OnCreate(lpCreateStruct) == 0) {
        // If the window was successfully created, let the user know
        MessageBox("The window has been created!!!");
        // Since the window was successfully created, return 0
        return 0;
    }
    // Otherwise, return -1
    return -1;
}
BOOL CMessagesApp::InitInstance() {
    m_pMainWnd = new CMainFrame;
    m_pMainWnd->ShowWindow(SW_SHOW);
    m_pMainWnd->UpdateWindow();
    return TRUE;
}
CMessagesApp theApp;