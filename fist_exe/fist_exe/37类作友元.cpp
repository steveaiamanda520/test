//#include<iostream>
//#include<string>
//using namespace std;
//
////；类做友元
//class Building;
//
//class GoodGay {
//	
//public:
//	GoodGay();
//	Building* building;
//	void visit();//参观函数  访问Buding 中的属性
//};
//
//class Building {
//	
//	friend class GoodGay;
//public:
//	Building();
//
//public:
//	string m_SittingRoom;
//private:
//	string m_BedRoom;
//};
//
//
////类外写成员函数
//Building::Building() {
//	m_SittingRoom = "客厅";
//	m_BedRoom = "卧室";
//}
//
//GoodGay::GoodGay() {
//	//创建建筑物对象
//	building = new Building;
//
//}
//
//void GoodGay::visit() {
//	cout << "好基友类正在访问：" << building->m_SittingRoom <<endl;
//	cout << "好基友类正在访问：" << building->m_BedRoom << endl;
//}
//
//void test01() {
//	GoodGay gg;
//	gg.visit();
//}
//
//
//
//
//int main() {
//
//	test01();
//	return 0;
//}