//#include <iostream>
//using namespace std;
//
//template<class T1, class T2 = int> // 类模板中可以有默认参数
//class Person {
//public:
//	Person(T1 name, T2 age) :m_Name(name), m_Age(age) {}
//
//	void showInfo() {
//		cout << m_Name << "\t" << m_Age << endl;
//	}
//
//	T1 m_Name;
//	T2 m_Age;
//};
//
//
//void test01() {
//
//	// 类模板不会自动类型推导
//	// 需要显式指定类型
//	// 类模板中可以有默认参数
//	Person<string> p1("孙悟空", 100);
//	p1.showInfo();
//}
//
//
//int main() {
//	test01();
//	return 0;
//}
