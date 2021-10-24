//#include <iostream>
//using namespace std;
//
//class Person {
//public:
//	Person(string name, int age) :m_Name(name), m_Age(age) {}
//	string m_Name;
//	int m_Age;
//};
//
//template<class T>
//bool myCompare(T& a, T& b) {
//	if (a == b) {
//		return true;
//	}
//	return false;
//}
//
//// 利用具体化技术，实现对自定义数据类型提供特殊模板
//template<> bool myCompare(Person& a, Person& b) {
//	if (a.m_Name == b.m_Name && a.m_Age == b.m_Age) {
//		return true;
//	}
//	return false;
//}
//
//void test01() {
//	int a = 10, b = 10;
//	cout << myCompare(a, b) << endl;
//
//	Person p1("Tom", 19), p2("Tom", 119);
//	cout << myCompare(p1, p2) << endl;
//}
//
//int main() {
//
//	test01();
//
//	return 0;
//}
