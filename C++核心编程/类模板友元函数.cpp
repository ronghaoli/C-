//#include <iostream>
//using namespace std;
//
//template<class T1, class T2>
//class Person;
//
//template<class T1, class T2>
//void printPerson2(Person<T1, T2>& p);
//
//template<class T1, class T2>
//void printPerson3(Person<T1, T2>& p) {
//	cout << "类外实现的3" << endl;
//	cout << p.m_Name << "\t" << p.m_Age << endl;
//}
//
//template<class T1, class T2>
//class Person {
//	// 友元函数类内实现
//	friend void printPerson(Person<T1, T2>& p) {
//		cout << p.m_Name << "\t" << p.m_Age << endl;
//	}
//
//	// 友元函数类外实现
//	friend void printPerson2<>(Person<T1, T2>& p);
//
//	friend void printPerson3<>(Person<T1, T2>& p);
//
//public:
//	Person(T1 name, T2 age) :m_Name(name), m_Age(age)
//	{}
//
//	void show();
//
//private:
//	T1 m_Name;
//	T2 m_Age;
//};
//
//template<class T1, class T2>
//void printPerson2(Person<T1, T2>& p) {
//	cout << "类外实现的2" << endl;
//	cout << p.m_Name << "\t" << p.m_Age << endl;
//}
//
//void test01() {
//	Person<string, int> p("Tom", 100);
//	printPerson(p);
//	printPerson2(p);
//	printPerson3(p);
//}
//
//
//int main() {
//
//	test01();
//
//	return 0;
//}
