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
//	int x, y, r;   // �������(x, y)��Բ�İ뾶
//	double dis;    // ��������
//	cout << "��������Բ�ĵ�����(x, y)�Ͱ뾶��";
//	cin >> x >> y >> r;
//	c.setCir(x, y, r);
//	cout << "����������(x, y)��";
//	cin >> x >> y;
//
//	p.Set_x(x); p.Set_y(y);
//	dis = c.Distance(p);
//
//	if (dis != c.Get_R())
//	{
//		if (dis > c.Get_R()) {
//			cout << "����Բ�⣬����Բ��" << dis << "��" << endl;
//		}
//		else {
//			cout << "����Բ�ڣ�����Բ��" << dis << "��" << endl;
//		}
//	}
//	else
//	{
//		cout << "����Բ��" << endl;
//	}
//
//	system("pause");
//	return 0;
//}