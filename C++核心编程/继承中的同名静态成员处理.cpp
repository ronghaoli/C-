//#include <iostream>
//using std::cout;
//using std::endl;
//
//class Base {
//public:
//	static void func() {
//		cout << "Base中的func调用" << endl;
//	}
//
//	static int m_A;
//};
//
//int Base::m_A = 10;
//
//class Son :public Base {
//public:
//	static void func() {
//		cout << "Son中的func调用" << endl;
//	}
//
//	static int m_A;
//};
//
//int Son::m_A = 20;
//
//void test01() {
//
//	Son s;
//	cout << "m_A = " << s.m_A << endl;
//	cout << "Base中的m_A = " << s.Base::m_A << endl;
//
//	// 通过类名访问
//	cout << Son::m_A << endl;
//	cout << Son::Base::m_A << endl;
//
//	cout << "sizeof(Base) " << sizeof(Base) << endl;		// 1
//	cout << "sizeof(Son) " << sizeof(Son) << endl;			// 1
//
//}
//
//void test02() {
//	Son s;
//	s.func();
//	s.Base::func();
//
//	Son::func();		// 当子类重定义父类中同名成员函数，子类的成员函数会隐藏掉父类中所有版本，需要加作用域调用
//	Son::Base::func();
//}
//
//int main() {
//
//	test02();
//
//	return 0;
//}