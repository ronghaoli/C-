﻿//#include <iostream>
//using std::cout;
//using std::endl;
//
//class Base1 {
//public:
//	Base1() :m_A(10) {}
//	int m_A;
//};
//
//class Base2 {
//public:
//	Base2() :m_A(20) {}
//	int m_A;
//};
//
//class Son :public Base1, public Base2 {
//public:
//	Son() :m_C(30), m_D(40) {}
//	int m_C;
//	int m_D;
//};
//
//void test01() {
//	cout << "sizeof(Son) " << sizeof(Son) << endl;
//
//	Son s;
//	// 当多继承的两个父类中有同名成员，需要加作用域区分
//	cout << s.Base1::m_A << endl;
//	cout << s.Base2::m_A << endl;
//}
//
//int main() {
//
//	test01();
//
//	return 0;
//}