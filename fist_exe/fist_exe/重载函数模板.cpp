//#include<iostream>
//using namespace std;
//
//template<class T>     //¾ÉÄ£°å
//void Swap(T &a, T &b);
//
//template<class T>     //ÐÂÄ£°å
//void Swap(T* a, T* b,int n);
//
//void show(int a[]);
//
//int main() {
//
//	int a = 5;
//	int b = 6;
//	Swap(a, b);
//	cout << "a=" << a << "," << "b=" << b << endl;
//	int o[4] = { 1,2,3,4 };
//	int p[4] = { 5,6,7,8 };
//	Swap(o, p, 4);
//	show(o);
//	show(p);
//
//	return 666;
//}
//
//template<class T>
//void Swap(T& a, T& b)
//{
//	T temp;
//	temp = a;
//	a = b;
//	b = temp;
//}
//
//template<class T>
//void Swap(T a[], T b[], int n)
//{
//	T temp;
//	for (int i = 0; i < n; i++)
//	{
//		temp = a[i];
//		a[i] = b[i];
//		b[i] = temp;
//	}
//}
//
//void show(int a[])
//{
//	for (int i = 0; i < 4; i++)
//		cout << a[i] << " ";
//	cout << endl;
//}