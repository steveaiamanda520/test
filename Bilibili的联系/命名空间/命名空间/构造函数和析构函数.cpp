#include<iostream>


int move(int x0, int y0, int x1, int y1, int distance)
{
	return x0, y0 + distance, x1, y1 + distance;
}







class Data {
public:
	int num;

public:
	//�޲����Ĺ���
	Data() {
		std::cout << "�޲����Ĺ��캯��" << std::endl;
	}
	//�в����Ĺ��캯��
	Data(int n)
	{
		num = n;
	}


	//��������   ��������
	~Data()
	{
		std::cout << "��������" << std::endl;
	}
};

void test01()
{
	//��ʵ��������ϵͳ�Զ����ù��캯��
	Data ob(1);
	//����������ʱ�򣬾ֲ�����ob���ͷţ�ϵͳ�Զ�����
	std::cout << ob.num << std::endl;
}



int main() {
	test01();
	


	return 0;
}