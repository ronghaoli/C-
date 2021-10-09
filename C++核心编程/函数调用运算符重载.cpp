//#include <iostream>
//using std::cout;
//using std::endl;
//using std::string;
//
//class MyPrint {
//public:
//	void operator()(string text) {
//		cout << text << endl;
//	}
//};
//
//void MyPrint2(string str) {
//	cout << str << endl;
//}
//
//void test01() {
//	MyPrint pirnt;
//	pirnt("Hello world");		// 仿函数  本质是一个对象，函数对象
//	MyPrint2("Hello world");
//}
//
//class MyAdd {
//public:
//	int operator()(int a, int b) {
//		return a + b;
//	}
//};
//
//void test02() {
//	MyAdd add;
//	cout << add(1, 2) << endl;			// 仿函数
//	cout << MyAdd()(1, 2) << endl;		// MyAdd() 匿名对象，当前行执行结束即释放
//}
//
//int main() {
//	test02();
//	return 0;
//}