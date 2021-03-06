// CCreateNewGroupDlg.cpp: 实现文件
//

#include "stdafx.h"
#include "starrtcdemo.h"
#include "CCreateNewGroupDlg.h"
#include "afxdialogex.h"


// CCreateNewGroupDlg 对话框

IMPLEMENT_DYNAMIC(CCreateNewGroupDlg, CDialogEx)

CCreateNewGroupDlg::CCreateNewGroupDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG_CREATE_NEW_GROUP, pParent)
{
	m_strGroupName = "";
}

CCreateNewGroupDlg::~CCreateNewGroupDlg()
{
}

void CCreateNewGroupDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT_NEW_GROUP_NAME, m_editGroupName);
}


BEGIN_MESSAGE_MAP(CCreateNewGroupDlg, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON_CREATE_NEW_GROUP, &CCreateNewGroupDlg::OnBnClickedButtonCreateNewGroup)
END_MESSAGE_MAP()


// CCreateNewGroupDlg 消息处理程序


void CCreateNewGroupDlg::OnBnClickedButtonCreateNewGroup()
{
	m_editGroupName.GetWindowText(m_strGroupName);
	if (m_strGroupName == "")
	{
		AfxMessageBox("请输入群组名称");
	}
	OnOK();
}
