// BCGPAppWizard1Dlg.h : header file
//

#pragma once


// CBCGPAppWizard1Dlg dialog
class CBCGPAppWizard1Dlg : public CBCGPDialog
{
// Construction
public:
	CBCGPAppWizard1Dlg(CWnd * pParent = NULL);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_BCGPAPPWIZARD1_DIALOG };
#endif


protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CBCGPDialog m_g1;
};
