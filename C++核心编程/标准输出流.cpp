//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//void test01() {
//
//	cout.put('H').put('E').put('\n');
//
//	char buf[1024] = "Hello world!";
//
//	cout << "strlen(buf) : " << strlen(buf) << endl;	// 12
//
//	cout.write(buf, strlen(buf));
//}
//
//// 1、通过流成员函数
//void test02() {
//	int num = 99;
//
//	cout.width(20);
//	cout.fill('*');
//	cout.setf(ios::left);
//
//	cout.unsetf(ios::dec);
//	cout.setf(ios::hex);		// 设置 16 进制
//
//	cout.setf(ios::showbase);	// 显示基数
//
//	cout.unsetf(ios::hex);
//	cout.setf(ios::oct);
//
//	cout << num << endl;
//}
//
//// 2、使用控制符 格式化输出
//void test03() {
//	int num = 99;
//
//	cout << setw(20)
//		<< setfill('-')
//		<< setiosflags(ios::showbase)
//		<< setiosflags(ios::left)
//		<< hex
//		<< num << endl;
//}
//
//int main() {
//
//	test03();
//
//	return 0;
//}
