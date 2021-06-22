
// Controls_DataBaseDlg.h : header file
//

#pragma once


// CControlsDataBaseDlg dialog
class CControlsDataBaseDlg : public CDialogEx
{
// Construction
public:
	CControlsDataBaseDlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CONTROLS_DATABASE_DIALOG };
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
	CString m_strEditCtrl;
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
};
