
// AppLauncherDlg.cpp : implementation file
//

#include "pch.h"
#include "framework.h"
#include "AppLauncher.h"
#include "AppLauncherDlg.h"
#include "afxdialogex.h"
#include "CMySheet.h"


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
public:
	afx_msg void OnBnClickedBtnClose();
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
	ON_BN_CLICKED(IDC_BTN_CLOSE, &CAboutDlg::OnBnClickedBtnClose)
END_MESSAGE_MAP()


// CAppLauncherDlg dialog



CAppLauncherDlg::CAppLauncherDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_APPLAUNCHER_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CAppLauncherDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_BTN_CLOSE, m_BtnClose);
	DDX_Control(pDX, IDC_TREE1, m_treeCtrl);
}

BEGIN_MESSAGE_MAP(CAppLauncherDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BTN_WORDPAD, &CAppLauncherDlg::OnBnClickedBtnWordpad)
END_MESSAGE_MAP()


// CAppLauncherDlg message handlers

BOOL CAppLauncherDlg::OnInitDialog()
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
	HTREEITEM hItem, hCar;
	hItem = m_treeCtrl.InsertItem(L"Types of Languages", TVI_ROOT);
	hCar = m_treeCtrl.InsertItem(L"Pure OOP Language", hItem);
	m_treeCtrl.InsertItem(L"Small-Talks", hCar);

	hCar = m_treeCtrl.InsertItem(L"Full OOP Language", hItem);
	m_treeCtrl.InsertItem(L"Java", hCar);
	m_treeCtrl.InsertItem(L"C#", hCar);
	m_treeCtrl.InsertItem(L"VB", hCar);
	m_treeCtrl.InsertItem(L"C++", hCar);
	hCar = m_treeCtrl.InsertItem(L"Procedure oriented", hItem);
	m_treeCtrl.InsertItem(L"C", hCar);
	
	
	

	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CAppLauncherDlg::OnSysCommand(UINT nID, LPARAM lParam)
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

void CAppLauncherDlg::OnPaint()
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
HCURSOR CAppLauncherDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CAboutDlg::OnBnClickedBtnClose()
{
	// TODO: Add your control notification handler code here
	PostQuitMessage(WM_QUIT);
}


void CAppLauncherDlg::OnBnClickedBtnWordpad()
{
	// TODO: Add your control notification handler code here
	WinExec("Write.exe", SW_NORMAL);
}
