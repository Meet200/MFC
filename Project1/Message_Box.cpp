#include <afxwin.h>
class CExerciseApp : public CWinApp
{
public:
	BOOL InitInstance();
};
CExerciseApp theApp;
BOOL CExerciseApp::InitInstance()
{
	CWnd* Msg = new CWnd;
	// MB_YESNO | MB_ICONWARNING to add warinng  and yes no both button 
	// MB_ICONSTOP to show red error icon 
	// MB_ICONINFORMATION to show information symbol 
	// MB_ICONQUEATION to show question symnol 
	// MB_ICONWAR
	Msg->MessageBox(_T("Hello ICT ...\n"),_T("ICT-Message"), MB_YESNOCANCEL | MB_ICONWARNING);
	return TRUE;
}