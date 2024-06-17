#include<iostream>


int move(int x0, int y0, int x1, int y1, int distance)
{
	return x0, y0 + distance, x1, y1 + distance;
}







class Data {
public:
	int num;

public:
	//无参数的构造
	Data() {
		std::cout << "无参数的构造函数" << std::endl;
	}
	//有参数的构造函数
	Data(int n)
	{
		num = n;
	}


	//析构函数   不能重载
	~Data()
	{
		std::cout << "析构函数" << std::endl;
	}
};

void test01()
{
	//类实例化对象，系统自动调用构造函数
	Data ob(1);
	//函数结束的时候，局部对象ob倍释放，系统自动调用
	std::cout << ob.num << std::endl;
}



int main() {
	test01();
	


	return 0;
}