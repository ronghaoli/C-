//#include <iostream>
//using std::cout;
//using std::endl;
//
//void mySwapInt(int& a, int& b) {
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//// 利用模板实现通用交换函数
//template<class T>
//void swap(T& a, T& b) {
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//template<class T>
//void SWAP() {
//
//}
//
//void test01() {
//	int a = 10, b = 20;
//	mySwapInt(a, b);
//	cout << a << endl;
//	cout << b << endl;
//
//	double c = 3.14, d = 8;
//	swap(c, d);
//	cout << c << endl;
//	cout << d << endl;
//
//	// 1、自动类型推导
//	// 类型必须一致
//	swap(c, d);
//	// 2、显式指定类型
//	// 会转换类型
//	swap<int>(a, b);
//
//	SWAP<int>();		// 必须告诉编译器类型才可以调用，才能知道内存应该多大
//}
//
//int main() {
//
//	test01();
//
//	return 0;
//}
