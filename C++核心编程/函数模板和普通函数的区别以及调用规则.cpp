//#include <iostream>
//using namespace std;
//
//template<class T>
//T myAdd(T a, T b) {
//	return a + b;
//}
//
//int myAdd2(int a, int b) {
//	return a + b;
//}
//
//void test01() {
//
//	int a = 10, b = 20;
//
//	char c = 'c';
//
//	// 显式指定类型后发生隐式类型转换
//	myAdd<int>(a, c);
//
//	// 普通函数，自动发生隐式类型转换
//	cout << myAdd2(a, c) << endl;
//
//}
//
///*
//* 函数模板通过具体类型产生不同的函数
//* 通过函数模板产生的函数，称为 模板函数
//* 编译器会对函数模板进行两次编译
//* 在声明的地方对模板代码本身进行编译，在调用的地方对参数替换后的代码进行编译
//*/
//
//// 函数模板和普通函数的调用规则（可发生重载）
//template<class T>
//void myPrint(T a, T b) {
//	cout << "函数模板调用" << endl;
//}
//
//template<class T>
//void myPrint(T a, T b, T c) {
//	cout << "函数模板(T a, T b, T c)调用" << endl;
//}
//
//void myPrint(int a, int b) {
//	cout << "普通函数调用" << endl;
//}
//
//void test02() {
//	int a = 10, b = 20;
//
//	// 如果函数模板和普通函数都可以调用，那么优先调用普通函数
//	myPrint(a, b);
//
//	// 如果想强制调用函数模板，可以使用空模板参数列表
//	myPrint<>(a, b);
//
//	// 函数模板也可以发生函数重载
//	myPrint(10, 20, 10);
//
//	// 如果函数模板能产生更好的匹配，优先使用函数模板
//	char c = 'c';
//	char d = 'd';
//	myPrint(c, d);
//}
//
//int main() {
//
//	test02();
//	return 0;
//}
