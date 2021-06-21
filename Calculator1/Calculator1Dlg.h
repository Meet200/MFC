
// Calculator1Dlg.h : header file
//

#pragma once


// CCalculator1Dlg dialog
class CCalculator1Dlg : public CDialogEx
{
// Construction
public:
	CCalculator1Dlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CALCULATOR1_DIALOG };
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
	CComboBox m_comboBoxCtrl;
	CString m_strTextCtrl;
	afx_msg void OnCbnSelchangeCombo1();
	CEdit edit1;
	CEdit edit2;
	afx_msg void OnBnClickedButton1();
};
