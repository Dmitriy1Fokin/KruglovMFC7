// SetDlg.cpp: ���� ����������
//

#include "stdafx.h"
#include "Graph.h"
#include "SetDlg.h"
#include "afxdialogex.h"


// ���������� ���� CSetDlg

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


// ����������� ��������� CSetDlg


void CSetDlg::OnClickedRedRadio()
{
	// TODO: �������� ���� ��� ����������� �����������
	UpdateData(TRUE);
}


void CSetDlg::OnBlueRadio()
{
	// TODO: �������� ���� ��� ����������� ������
	UpdateData(TRUE);
}


void CSetDlg::OnGreenRadio()
{
	// TODO: �������� ���� ��� ����������� ������
	UpdateData(TRUE);
}
