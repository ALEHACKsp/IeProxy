// IeProxyDlg.h : ͷ�ļ�
//

#pragma once


// CIeProxyDlg �Ի���
class CIeProxyDlg : public CDialog
{
// ����
public:
	CIeProxyDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_IEPROXY_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedBtnClean();
	afx_msg void OnBnClickedBtnSet();
};
