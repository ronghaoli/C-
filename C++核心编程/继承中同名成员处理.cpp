//#include <iostream>
//using std::cout;
//using std::endl;
//
//class Base {
//public:
//	Base() :m_A(10) {}
//
//	void func() {
//		cout << "Base中func调用" << endl;
//	}
//
//	// 同一类下，重载
//	void func(int a) {
//		cout << "Base中func(int)调用" << endl;
//	}
//
//	int m_A;
//};
//
//class Son :public Base {
//public:
//	Son() :m_A(20) {}
//
//	void func() {
//		cout << "Son中func调用" << endl;
//	}
//
//	int m_A;
//};
//
//void test01() {
//	Son s1;
//	cout << "s1.m_A = " << s1.m_A << endl;	// 就近，子类中 m_A
//
//	cout << "s1.Base::m_A = " << s1.Base::m_A << endl;		// 父类中 m_A
//}
//
//void test02() {
//	Son s1;
//	s1.func();
//	s1.Base::func(10);
//
//	// 当子类重新定义了父类中的同名成员函数，子列的成员函数会覆盖掉父类中所有重载版本的同名成员
//}
//
//int main() {
//	test02();
//	return 0;
//}