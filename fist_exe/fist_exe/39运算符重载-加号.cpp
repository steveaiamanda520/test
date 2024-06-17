//#include<iostream>
//
//using namespace std;
////1、类初始化方式
////2、main函数中初始化方式
//
//
//class Person {
//public:
//	int M;
//	int N;
//	Person() {
//		M = 1;
//		N = 1;
//	}
//};
//
//Person operator+(Person p1, Person p2) {
//	Person temp;
//	temp.M = p1.M + p2.M;
//	temp.N = p1.N + p2.N;
//	return temp;
//}
//
//int main() {
//	Person p1;
//	Person p2;
//
//	Person p3 = p1 + p2;
//	cout << "M是" << p3.M << endl;
//	cout << "N是" << p3.N << endl;
//
//
//}