#pragma once


// second dialog

class second : public CDialogEx
{
	DECLARE_DYNAMIC(second)

public:
	second(CWnd* pParent = nullptr);   // standard constructor
	virtual ~second();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedRadio1();
};
