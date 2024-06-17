#pragma once


#include <iostream>
#include "Point.h"    // include写好的点类头文件

using namespace std;

class Circle    // 定义一个圆的类
{
	Point Cir_cen;    // (点类)圆心
	int Cir_R;    // 半径
public:
	void setCir(int x, int y, int r);    // 初始化圆的属性

	int Get_R();    // 得到圆的半径
	double Distance(Point& p);    // 判断一个点和圆的关系
};