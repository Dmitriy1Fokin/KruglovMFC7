
// GraphDlg.h : ���� ���������
//

#pragma once
#include "SetDlg.h"


// ���������� ���� CGraphDlg
class CGraphDlg : public CDialogEx
{
// ��������
public:
	CGraphDlg(CWnd* pParent = NULL);	// ����������� �����������
	CSetDlg m_dlg;
	int m_Radius;
	int m_Direction;

// ������ ����������� ����
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_GRAPH_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// ��������� DDX/DDV


// ����������
protected:
	HICON m_hIcon;

	// ��������� ������� ����� ���������
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnClickedExitButton();
	afx_msg void OnDestroy();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnClickedDrawgraphicsButton();
};
