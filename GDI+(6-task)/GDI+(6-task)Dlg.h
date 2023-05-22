
// GDI+(6-task)Dlg.h: файл заголовка
//

#pragma once
#include "Drawer.h"

// Диалоговое окно CGDI6taskDlg
class CGDI6taskDlg : public CDialogEx
{
// Создание
public:
	CGDI6taskDlg(CWnd* pParent = nullptr);	// стандартный конструктор

// Данные диалогового окна
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_GDI6TASK_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// поддержка DDX/DDV


// Реализация
protected:
	HICON m_hIcon;

	// Созданные функции схемы сообщений
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnStnClickedDrawer();
	Drawer Picture;
	afx_msg void OnHScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);
	CSliderCtrl Slider;
	afx_msg void OnEnChangeEdit1();
	

	
	CEdit gr;
	CEdit x;
	CEdit y;
};
