// second.cpp : implementation file
//

#include "pch.h"
#include "Multiple.h"
#include "second.h"
#include "afxdialogex.h"


// second dialog

IMPLEMENT_DYNAMIC(second, CDialogEx)

second::second(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{
#ifndef _WIN32_WCE
	EnableActiveAccessibility();
#endif

}

second::~second()
{
}

void second::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(second, CDialogEx)
	ON_BN_CLICKED(IDC_RADIO1, &second::OnBnClickedRadio1)
END_MESSAGE_MAP()


// second message handlers


void second::OnBnClickedRadio1()
{
	// TODO: Add your control notification handler code here
}
