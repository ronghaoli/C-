//#include <iostream>
//using namespace std;
//
//class MyException {
//public:
//	MyException() {
//		cout << "MyException()" << endl;
//	}
//	MyException(const MyException& e) {
//		cout << "MyException(const MyException& e)" << endl;
//	}
//	~MyException() {
//		cout << "~MyException()" << endl;
//	}
//};
//
//void doWork() {
//	throw new MyException();
//}
//
//void test01() {
//	try
//	{
//		doWork();
//	}
//	catch (const std::exception&)
//	{
//
//	}
//	// 如果 catch(MyException e) 将调用拷贝构造函数，效率下降
//	// 抛出 &MyException()，catch(MyException *e)，对象会提前释放，不能再操作了
//	// 抛出 new MyException()，catch(MyException *e)，只默认调用构造函数，自己管理释放
//	catch (MyException* e)
//	{
//		cout << "自定义异常捕获" << endl;
//		delete e;
//	}
//	catch (...)
//	{
//
//	}
//}
//
//int main() {
//
//	test01();
//	cout << "aaa" << endl;
//
//	return 0;
//}
