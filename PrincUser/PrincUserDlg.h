
// PrincUserDlg.h : 头文件
//

#pragma once


// CPrincUserDlg 对话框
typedef void (_cdecl *ServiceFunc)(wchar_t *serviceName );
class CPrincUserDlg : public CDialogEx
{
// 构造
public:
	CPrincUserDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_PRINCUSER_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;
	HMODULE m_hDll;     //handle for loaded dll
	ServiceFunc m_fService;
	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
};
