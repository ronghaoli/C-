//#include <iostream>
//using namespace std;
//
//class MyException {
//public:
//	void printError()const {
//		cout << "我自己的异常" << endl;
//	}
//};
//
//class Person {
//public:
//	Person() {
//		cout << "Person()" << endl;
//	}
//	~Person() {
//		cout << "~Person()" << endl;
//	}
//};
//
//int myDivision(int a, int b) {
//	if (b == 0) {
//		return -1;
//	}
//	return a / b;
//}
//
//void test01() {
//	// C语言异常处理机制，返回值不统一，返回值只有一个，无法区分是结果还是异常
//	int ret = myDivision(10, 0);
//	if (ret == -1) {
//		cout << "异常" << endl;
//	}
//}
//
//int myDivision2(int a, int b) {
//	if (b == 0) {
//
//		Person p1, p2;
//
//		// 抛异常前栈解旋，栈上对象都会被释放
//		throw MyException();	// 抛出某个类型的异常
//	}
//	return a / b;
//}
//
//void test02() {
//	try
//	{
//		myDivision2(10, 0);
//	}
//	catch (int)
//	{
//		cout << "int 类型异常捕获" << endl;
//	}
//	catch (char)
//	{
//		cout << "char 类型异常捕获" << endl;
//	}
//	catch (const std::exception&)
//	{
//
//	}
//	catch (const MyException& e)
//	{
//		e.printError();
//	}
//	catch (...)
//	{
//		// 异常必须有处理，如果没有任何处理，程序自动调用 terminate ，中断
//		// 继续向上抛出这个异常
//		throw;
//		cout << "其他类型异常捕获" << endl;
//	}
//}
//
//int main() {
//
//	try
//	{
//		test02();
//	}
//	catch (double)
//	{
//		cout << "main 函数中 double 类型异常捕获" << endl;
//	}
//	catch (const std::exception&)
//	{
//
//	}
//
//
//	return 0;
//}
