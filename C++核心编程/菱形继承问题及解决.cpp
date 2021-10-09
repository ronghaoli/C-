//#include <iostream>
//using std::cout;
//using std::endl;
//
//class Animal {
//public:
//	int m_Age;
//};
//
//class Sheep :virtual public Animal {};
//
//class Tuo :virtual public Animal {};
//
//class SheepTuo :public Sheep, public Tuo {
//
//};
//
//// 查看类结构
//// cl /d1 reportSingleClassLayoutSheepTuo 菱形继承问题及解决.cpp 
//// vbptr virtual base pointer，虚基类指针，指向vbtable（虚基类表）
//
//void test01() {
//
//	SheepTuo st;
//
//	cout << "sizeof(SheepTuo) " << sizeof(SheepTuo) << endl;		// 8，加上virtual后12
//
//	st.m_Age = 10;
//	// 当发生虚继承后，sheep和tuo类中 继承了一个 vbptr指针，虚基类指针，指向一个vbtable
//	// 虚基类表中记录了偏移量，通过偏移量，可以找到唯一的一个m_Age
//
//}
//
///*
// class SheepTuo  size(12):
//		+---
// 0      | +--- (base class Sheep)
// 0      | | {vbptr}
//		| +---
// 4      | +--- (base class Tuo)
// 4      | | {vbptr}
//		| +---
//		+---
//		+--- (virtual base Animal)
// 8      | m_Age
//		+---
//
//SheepTuo::$vbtable@Sheep@:
// 0      | 0
// 1      | 8 (SheepTuod(Sheep+0)Animal)
//
//SheepTuo::$vbtable@Tuo@:
// 0      | 0
// 1      | 4 (SheepTuod(Tuo+0)Animal)
//
//vbi:       class  offset o.vbptr  o.vbte fVtorDisp
//		  Animal       8       0       4 0
//*/
//
//void test02() {
//	SheepTuo st;
//	st.m_Age = 10;
//
//	// 通过Sheep找到偏移量
//	//*(int*)&st	解引用到了 虚基类表中
//	cout << *((int*)*(int*)&st + 1) << endl;
//	// 通过Tuo找到偏移量
//	cout << *((int*)*((int*)&st + 1) + 1) << endl;
//
//	// 通过偏移量 访问 m_Age
//	cout << "m_Age = " << ((Animal*)((char*)&st + *((int*)*(int*)&st + 1)))->m_Age << endl;
//	cout << "m_Age = " << *((int*)((char*)&st + *((int*)*(int*)&st + 1))) << endl;
//}
//
//int main() {
//	test02();
//	return 0;
//}