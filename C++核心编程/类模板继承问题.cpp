﻿//#include <iostream>
//using namespace std;
//
//template<class T>
//class Base {
//public:
//	T m_A;
//};
//
//// 必须要指定除父类中T的数据类型，才能给子类分配内存
//class Son :public Base<int> {
//
//};
//
//template<class T>
//class Base2 {
//public:
//	T m_A;
//};
//
//template<class T1, class T2>
//class Son2 :public Base2<T2> {
//public:
//	Son2() {
//		cout << typeid(T1).name() << endl;
//		cout << typeid(T2).name() << endl;
//	}
//	T1 m_B;
//};
//
//void test01() {
//	Son2<int, double> s;
//}
//
//int main() {
//
//	test01();
//
//	return 0;
//}
