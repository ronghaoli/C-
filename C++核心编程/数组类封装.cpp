//#include "myarray.hpp"
//
//class Person {
//public:
//	Person() {}
//
//	Person(string name, int age) :m_Name(name), m_Age(age) {}
//
//
//	string m_Name;
//	int m_Age;
//};
//
//void myPrintInt(MyArray<int>& myIntArr) {
//	for (int i = 0; i < myIntArr.getSize(); i++) {
//		cout << myIntArr[i] << endl;
//	}
//}
//
//void test01() {
//
//	MyArray<int> arr(100);
//	for (int i = 0; i < 10; i++) {
//		arr.push_back(i + 100);
//	}
//
//	myPrintInt(arr);
//
//}
//
//void myPrintPerson(MyArray<Person>& myPersonArr) {
//	for (int i = 0; i < myPersonArr.getSize(); i++) {
//		cout << myPersonArr[i].m_Name << "\t" << myPersonArr[i].m_Age << endl;
//	}
//}
//
//void test02() {
//	MyArray<Person> arr(20);
//
//	Person p1("孙悟空", 100);
//	Person p2("猪八戒", 100);
//	Person p3("唐僧", 100);
//	Person p4("沙悟净", 100);
//	Person p5("白龙马", 100);
//
//	arr.push_back(p1);
//	arr.push_back(p2);
//	arr.push_back(p3);
//	arr.push_back(p4);
//	arr.push_back(p5);
//
//	myPrintPerson(arr);
//}
//
//
//int main() {
//
//	test02();
//
//	return 0;
//}
