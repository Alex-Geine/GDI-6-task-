#pragma once
#include<gdiplus.h>
using namespace Gdiplus;

// Drawer

class Drawer : public CStatic
{
	DECLARE_DYNAMIC(Drawer)

public:
	Drawer();
	virtual ~Drawer();

protected:
	DECLARE_MESSAGE_MAP()
public:
	virtual void DrawItem(LPDRAWITEMSTRUCT /*lpDrawItemStruct*/);
			
	int Degree = 0;
	int PointX = 100;
	int PointY = 100;

	CEdit* x;
	CEdit* y;
	CSliderCtrl* Slider;
	CEdit* gr;

	ULONG_PTR token;
	
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);


};