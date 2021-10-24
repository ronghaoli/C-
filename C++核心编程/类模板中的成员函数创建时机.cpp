//#include <iostream>
//using namespace std;
//
//class Person1 {
//public:
//	void show() {
//		cout << "111" << endl;
//	}
//};
//
//class Person2 {
//public:
//	void show() {
//		cout << "222" << endl;
//	}
//};
//
//// 类模板中的成员函数 并不是一开始创建的 而是在运行阶段确定除T的数据类型才去创建
//template<class T>
//class MyClass {
//public:
//	void func() {
//		obj.show();
//	}
//
//	T obj;
//};
//
//void test01() {
//
//	MyClass<Person2> c;
//	c.func();
//
//}
//
//int main() {
//	test01();
//	return 0;
//}
