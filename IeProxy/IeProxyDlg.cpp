// IeProxyDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "IeProxy.h"
#include "IeProxyDlg.h"
#include "RegProxy.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CIeProxyDlg �Ի���




CIeProxyDlg::CIeProxyDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CIeProxyDlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CIeProxyDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CIeProxyDlg, CDialog)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//}}AFX_MSG_MAP
	ON_BN_CLICKED(IDC_BTN_CLEAN, &CIeProxyDlg::OnBnClickedBtnClean)
	ON_BN_CLICKED(IDC_BTN_SET, &CIeProxyDlg::OnBnClickedBtnSet)
END_MESSAGE_MAP()


// CIeProxyDlg ��Ϣ�������

BOOL CIeProxyDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// ���ô˶Ի����ͼ�ꡣ��Ӧ�ó��������ڲ��ǶԻ���ʱ����ܽ��Զ�
	//  ִ�д˲���
	SetIcon(m_hIcon, TRUE);			// ���ô�ͼ��
	SetIcon(m_hIcon, FALSE);		// ����Сͼ��

	// TODO: �ڴ���Ӷ���ĳ�ʼ������

	return TRUE;  // ���ǽ��������õ��ؼ������򷵻� TRUE
}

// �����Ի��������С����ť������Ҫ����Ĵ���
//  �����Ƹ�ͼ�ꡣ����ʹ���ĵ�/��ͼģ�͵� MFC Ӧ�ó���
//  �⽫�ɿ���Զ���ɡ�

void CIeProxyDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // ���ڻ��Ƶ��豸������

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// ʹͼ���ڹ����������о���
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// ����ͼ��
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

//���û��϶���С������ʱϵͳ���ô˺���ȡ�ù��
//��ʾ��
HCURSOR CIeProxyDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}


void CIeProxyDlg::OnBnClickedBtnClean()
{
	// TODO: Add your control notification handler code here
	RegProxy regProxy;
	if(regProxy.SetProxy(false,_T("")))
		AfxMessageBox(_T("���IE����ɹ���"));
}

void CIeProxyDlg::OnBnClickedBtnSet()
{
	// TODO: Add your control notification handler code here

	RegProxy regProxy;
	if (regProxy.SetProxy(1,_T("127.2.3.1:4321")))
	{
		AfxMessageBox(_T("������Ч����ɹ���"));
	}
}
