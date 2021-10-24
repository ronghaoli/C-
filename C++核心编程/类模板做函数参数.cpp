//#include <iostream>
//using namespace std;
//
//template<class T1, class T2>
//class Person {
//public:
//	Person(T1 name, T2 age) :m_Name(name), m_Age(age) {}
//
//	void show() {
//		cout << m_Name << "\t" << m_Age << endl;
//	}
//
//	T1 m_Name;
//	T2 m_Age;
//};
//
//// 1、指定传入的类型
//void doWork(Person<string, int>& p) {
//	p.show();
//}
//
//void test01() {
//	Person<string, int> p("孙悟空", 999);
//
//	doWork(p);
//}
//
//// 2、参数模板化
//template<class T1, class T2>
//void doWork2(Person<T1, T2>& p) {
//	cout << typeid(T1).name() << endl;
//	cout << typeid(T2).name() << endl;
//	p.show();
//}
//
//void test02() {
//	Person<string, int> p("猪八戒", 998);
//	doWork2(p);
//}
//
//// 3、整个类模板化
//template<class T>
//void doWork3(T& p) {
//	cout << typeid(T).name() << endl;
//	p.show();
//}
//
//void test03() {
//	Person<string, int> p("唐僧", 10000);
//	doWork3(p);
//}
//
//int main() {
//
//	test01();
//	test02();
//	test03();
//
//	return 0;
//}
