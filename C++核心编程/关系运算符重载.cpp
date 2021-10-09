//#include <iostream>
//using std::cout;
//using std::endl;
//using std::string;
//
//class Person {
//public:
//	Person(string name, int age) :m_Name(name), m_Age(age) {}
//
//	bool operator==(const Person& p) {
//		return (this->m_Name == p.m_Name) && (this->m_Age == p.m_Age);
//	}
//	bool operator!=(const Person& p) {
//		return (this->m_Name != p.m_Name) || (this->m_Age != p.m_Age);
//	}
//private:
//	string m_Name;
//	int m_Age;
//};
//
//void test01() {
//	Person p1("Tom", 18);
//	Person p2("Tom", 18);
//	cout << (p1 == p2) << endl;
//	cout << (p1 != p2) << endl;
//
//}
//
//int main() {
//
//	test01();
//	return 0;
//}