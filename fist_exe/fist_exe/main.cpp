//#include <iostream>
//#include <math.h>
//#include "Point.h"
//#include "Circle.h"
//
//using namespace std;
//
//int main()
//{
//	Circle c;
//	Point p;
//	int x, y, r;   // 点的坐标(x, y)和圆的半径
//	double dis;    // 两点间距离
//	cout << "依次输入圆心的坐标(x, y)和半径：";
//	cin >> x >> y >> r;
//	c.setCir(x, y, r);
//	cout << "输入点的坐标(x, y)：";
//	cin >> x >> y;
//
//	p.Set_x(x); p.Set_y(y);
//	dis = c.Distance(p);
//
//	if (dis != c.Get_R())
//	{
//		if (dis > c.Get_R()) {
//			cout << "点在圆外，距离圆心" << dis << "处" << endl;
//		}
//		else {
//			cout << "点在圆内，距离圆心" << dis << "处" << endl;
//		}
//	}
//	else
//	{
//		cout << "点在圆上" << endl;
//	}
//
//	system("pause");
//	return 0;
//}