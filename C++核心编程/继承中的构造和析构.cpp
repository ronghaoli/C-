//#include <iostream>
//using std::cout;
//using std::endl;
//
//class Other {
//public:
//	Other() {
//		cout << "Other 默认构造函数调用" << endl;
//	}
//	~Other() {
//		cout << "Other 析构函数调用" << endl;
//	}
//};
//
//class Base1 {
//public:
//	Base1() {
//		m_A = 100;
//		cout << "Base1 默认构造函数调用" << endl;
//	}
//	~Base1() {
//		cout << "Base1 析构函数调用" << endl;
//	}
//	int m_A;
//};
//
//class Son1 :public Base1 {
//public:
//	Son1() {
//		cout << "Son1 默认构造函数调用" << endl;
//	}
//	~Son1() {
//		cout << "Son1 析构函数调用" << endl;
//	}
//	Other other;
//};
//
//class Base2 {
//public:
//	Base2(int a) :m_A(a) {
//		cout << "Base2 构造函数调用" << endl;
//	}
//	~Base2() {
//		cout << "Base2 析构函数调用" << endl;
//	}
//	int m_A;
//};
//
//class Son2 :public Base2 {
//public:
//	Son2(int a = 1000) :Base2(a) {		// 利用初始化列表，显示调用父类中的有参构造函数
//		cout << "Son2 默认构造函数调用" << endl;
//	}
//	~Son2() {
//		cout << "Son2 析构函数调用" << endl;
//	}
//};
//
//// 父类中 构造，析构，拷贝构造，operator= 是不会被子类继承下去的，这些只有父类才知道该怎么做
//
//void test01() {
//
//	Son1 son;		// 先调用父类的构造，在调用自身构造，
//					// 自身构造中先调用成员对象构造函数
//					// 析构的顺序与构造相反（栈）
//
//}
//
//void test02() {
//	Son2 s;
//	cout << s.m_A << endl;
//}
//
//int main() {
//	test02();
//
//	return 0;
//}