#pragma once


#include <iostream>
#include "Point.h"    // includeд�õĵ���ͷ�ļ�

using namespace std;

class Circle    // ����һ��Բ����
{
	Point Cir_cen;    // (����)Բ��
	int Cir_R;    // �뾶
public:
	void setCir(int x, int y, int r);    // ��ʼ��Բ������

	int Get_R();    // �õ�Բ�İ뾶
	double Distance(Point& p);    // �ж�һ�����Բ�Ĺ�ϵ
};