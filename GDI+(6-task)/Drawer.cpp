
// Drawer.cpp: файл реализации
//

#include "pch.h"
#include "GDI+(6-task)Dlg.h"
#include "Drawer.h"

IMPLEMENT_DYNAMIC(Drawer, CStatic)

Drawer::Drawer()
{
	GdiplusStartupInput si;
	GdiplusStartup(&token, &si, NULL);
}

Drawer::~Drawer()
{
	GdiplusShutdown(token);
}


BEGIN_MESSAGE_MAP(Drawer, CStatic)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

void Drawer::DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct)
{
	Graphics gr(lpDrawItemStruct->hDC);
	gr.Clear(Color(240, 240, 240));

	PointF p(PointX, PointY);

	Matrix matr;
	matr.RotateAt(Degree, p);	
	gr.SetTransform(&matr);

	LinearGradientBrush br1(Point(0, 0), Point(10, 1), Color(131, 66, 134, 100), Color(55, 45, 234, 10));
	gr.FillEllipse(&br1, 400, 200, 200, 250);

	LinearGradientBrush br(Point(0, 0), Point(1, 1), Color(36, 10, 40, 0), Color(255, 10, 100, 100));
	gr.FillRectangle(&br, 0, 0, 200, 200);

	LinearGradientBrush br2(Point(0, 0), Point(1, 1), Color(36, 10, 40, 0), Color(255, 10, 100, 100));
	gr.FillRectangle(&br, 300, 250, 20, 20);

	Pen pen(Color::Blue);
	gr.DrawEllipse(&pen, PointX - 3, PointY - 3, 4, 4);

	Degree = 0;
}

void Drawer::OnLButtonDown(UINT nFlags, CPoint point)
{
	PointX = point.x;
	PointY = point.y;

	Slider->SetPos(0);

	CString str;

	str.Format(L"%d", 0);
	gr->SetWindowTextW(str);

	str.Format(_T("%d"), point.x);
	x->SetWindowTextW(str);

	str.Format(_T("%d"), point.y);

	y->SetWindowTextW(str);

	Invalidate(FALSE);
}
