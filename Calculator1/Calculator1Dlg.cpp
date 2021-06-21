
// Calculator1Dlg.cpp : implementation file
//

#include "pch.h"
#include "framework.h"
#include "Calculator1.h"
#include "Calculator1Dlg.h"
#include "afxdialogex.h"
#include<string>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CAboutDlg dialog used for App About

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Implementation
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CCalculator1Dlg dialog



CCalculator1Dlg::CCalculator1Dlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_CALCULATOR1_DIALOG, pParent)
	, m_strTextCtrl(_T(""))
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CCalculator1Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_COMBO1, m_comboBoxCtrl);
	DDX_Text(pDX, ID_S1, m_strTextCtrl);
	DDX_Control(pDX, IDC_EDIT1, edit1);
	DDX_Control(pDX, IDC_EDIT2, edit2);
}

BEGIN_MESSAGE_MAP(CCalculator1Dlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_CBN_SELCHANGE(IDC_COMBO1, &CCalculator1Dlg::OnCbnSelchangeCombo1)
	ON_BN_CLICKED(IDC_BUTTON1, &CCalculator1Dlg::OnBnClickedButton1)
END_MESSAGE_MAP()


// CCalculator1Dlg message handlers

BOOL CCalculator1Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != nullptr)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// TODO: Add extra initialization here

	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CCalculator1Dlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CCalculator1Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CCalculator1Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CCalculator1Dlg::OnCbnSelchangeCombo1()
{
	// TODO: Add your control notification handler code here
	
	
}


void CCalculator1Dlg::OnBnClickedButton1()
{

	CString str = _T("");
	CString edit_box1 = _T("");
	CString edit_box2 = _T("");
	m_comboBoxCtrl.GetWindowTextW(str);
	edit1.GetWindowTextW(edit_box1);
	edit2.GetWindowTextW(edit_box2);
    
	
	

	CString sFloat = edit_box1;
	float f = _ttof(sFloat);
	

	CString sFloat2 = edit_box2;
	float f2 = _ttof(sFloat2);
	
	CString floatString2;
	floatString2.Format(_T("%f"), f2);

	if (str == "/") {
		float divide = f / f2;
		CString floatString2;
		floatString2.Format(_T("%.3f"), divide);
		m_strTextCtrl =floatString2;
	}else if (str == "+") {
		float divide = f + f2;
		CString floatString2;
		floatString2.Format(_T("%.3f"), divide);
		m_strTextCtrl = floatString2;
	}
	else if (str == "-") {
		float divide = f - f2;
		CString floatString2;
		floatString2.Format(_T("%.3f"), divide);
		m_strTextCtrl = floatString2;
	}
	else if (str == "*") {
		float divide = f * f2;
		CString floatString2;
		floatString2.Format(_T("%.3f"), divide);
		m_strTextCtrl = floatString2;
	}



	//m_strTextCtrl = floatString;
	UpdateData(FALSE);
}
