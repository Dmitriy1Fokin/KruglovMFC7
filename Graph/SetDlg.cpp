// SetDlg.cpp: файл реализации
//

#include "stdafx.h"
#include "Graph.h"
#include "SetDlg.h"
#include "afxdialogex.h"


// диалоговое окно CSetDlg

IMPLEMENT_DYNAMIC(CSetDlg, CDialogEx)

CSetDlg::CSetDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_CUSTOM_DIALOG, pParent)
	, m_RedRadio(0)
{

}

CSetDlg::~CSetDlg()
{
}

void CSetDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Radio(pDX, IDC_RED_RADIO, m_RedRadio);
}


BEGIN_MESSAGE_MAP(CSetDlg, CDialogEx)
	ON_BN_CLICKED(IDC_RED_RADIO, &CSetDlg::OnClickedRedRadio)
	ON_COMMAND(IDC_BLUE_RADIO, &CSetDlg::OnBlueRadio)
	ON_COMMAND(IDC_GREEN_RADIO, &CSetDlg::OnGreenRadio)
END_MESSAGE_MAP()


// обработчики сообщений CSetDlg


void CSetDlg::OnClickedRedRadio()
{
	// TODO: добавьте свой код обработчика уведомлений
	UpdateData(TRUE);
}


void CSetDlg::OnBlueRadio()
{
	// TODO: добавьте свой код обработчика команд
	UpdateData(TRUE);
}


void CSetDlg::OnGreenRadio()
{
	// TODO: добавьте свой код обработчика команд
	UpdateData(TRUE);
}
