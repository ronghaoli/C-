//#include <iostream>
//using namespace std;
//
//// 异常的基类
//class BaseException {
//public:
//	virtual void printError() = 0;
//};
//
//// 空指针异常
//class NullPointerException :public BaseException {
//public:
//	void printError() override {
//		cout << "空指针异常" << endl;
//	}
//};
//
//// 越界异常
//class OutOfRangeException :public BaseException {
//public:
//	void printError()override {
//		cout << "越界异常" << endl;
//	}
//};
//
//void doWork() {
//	throw OutOfRangeException();
//}
//
//void test01() {
//
//	try
//	{
//		doWork();
//	}
//	catch (BaseException& e)
//	{
//		e.printError();
//	}
//
//}
//
//int main() {
//
//	test01();
//
//	return 0;
//}
