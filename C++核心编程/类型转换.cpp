//#include <iostream>
//using namespace std;
//
//// 1、静态类型转换
//void test01() {
//	// 允许内置数据类型之间转换
//	char a = 'a';
//
//	double d = static_cast<double>(a);
//	cout << d << endl;
//}
//
//class Base { virtual void func() {} };
//
//class Son :public Base { virtual void func() {} };
//
//class Other {};
//
//void test02() {
//	Base* base = nullptr;
//	Son* son = nullptr;
//
//	// 允许基类及派生类之间指针转换（继承关系引用相互转换）
//
//	// static_cast<目标类型>(原变量) 
//	// 将base转为Son*，向下类型转换，不安全，但可以
//	Son* son2 = static_cast<Son*>(base);
//
//	// son转为Base*，向上类型转换，安全
//	Base* base2 = static_cast<Base*>(son);
//
//	// base转为Other*
//	//Other* other = static_cast<Other*>(base);	错误
//}
//
//// 动态类型转换，更加安全
//void test03() {
//	// 不允许内置数据类型之间转换，防止失去精度
//	char c = 'c';
//	//double d = dynamic_cast<double>(c); 错误
//}
//
//void test04() {
//	Base* base = new Son;
//	Son* son = nullptr;
//
//	// 将base转为Son*，如果发生多态，转换总是安全的
//	Son* son2 = dynamic_cast<Son*>(base);
//
//	// son转为Base*
//	Base* base2 = dynamic_cast<Base*>(son);
//
//	// base转为Other*
//	//Other* other = dynamic_cast<Other*>(base); 错误
//}
//
//// 常量转换
//void test05() {
//	// 不可以将非指针或非引用做const_cast转换
//	const int* p = nullptr;
//	int* pp = const_cast<int*>(p);
//
//	const int* ppp = const_cast<const int*>(pp);
//
//	int num = 10;
//	int& numRef = num;
//
//	const int& num2 = const_cast<const int&>(numRef);
//}
//
//// 重新解释转换，最不安全的转换
//void test06() {
//	int a = 10;
//	int* p = reinterpret_cast<int*>(a);
//
//	Base* base = nullptr;
//	Other* other = reinterpret_cast<Other*>(base);
//}
//
//int main() {
//
//	test06();
//
//	return 0;
//}
