//#include <iostream>
//using namespace std;
//
//void test01() {
//
//	// 输入 a s
//	// 第一次 a  第二次 s  第三次 换行
//
//	char c = cin.get();
//
//	cout << "c = " << c << endl;
//
//	c = cin.get();
//
//	cout << "c = " << c << endl;
//
//	c = cin.get();
//
//	cout << "c = " << c << endl;
//}
//
//void test02() {
//
//	char buf[1024] = { 0 };
//
//	cin.get(buf, 1024);
//
//	// 利用 cin.get() 获取字符串时，换行符遗留在缓冲区中
//	char c = cin.get();
//	if (c == '\n') {
//		cout << "换行符遗留在缓冲区" << endl;
//	}
//	else
//	{
//		cout << "换行符不在缓冲区" << endl;
//	}
//
//	cout << "buf = " << buf << endl;
//}
//
//void test03() {
//	char buf[1024] = { 0 };
//
//	// 利用 cin.getline() 获取字符串时，换行符不会被取走，也不在缓冲区中，弃掉
//	cin.getline(buf, 1024);
//
//	char c = cin.get();
//	if (c == '\n') {
//		cout << "换行符遗留在缓冲区" << endl;
//	}
//	else
//	{
//		cout << "换行符不在缓冲区" << endl;
//	}
//
//	cout << "buf = " << buf << endl;
//}
//
//void test04() {
//
//	// cin.ignore() 默认忽略一个字符，如果填入参数x，代表忽略x个字符
//	cin.ignore(2);
//	char c = cin.get();
//
//	cout << "c = " << c << endl;
//}
//
//void test05() {
//	// 看第一个字符，但不取走
//	char c = cin.peek();
//	cout << "c = " << c << endl;
//
//	c = cin.get();
//	cout << "c = " << c << endl;
//
//	c = cin.get();
//	cout << "c = " << c << endl;
//}
//
//void test06() {
//
//	char c = cin.get();
//	// 放回原位
//	cin.putback(c);
//
//	char buf[1024] = { 0 };
//	cin.getline(buf, 1024);
//
//	cout << "buf = " << buf << endl;
//}
//
//// 例1，判断输入内容是字符串还是数字(cin.peek())
//void test07() {
//
//	cout << "请输入字符串或者数字" << endl;
//
//	char c = cin.peek();
//
//	if (c >= '0' && c <= '9') {
//		int num;
//		cin >> num;
//		cout << "输入的是数字，为：" << num << endl;
//	}
//	else
//	{
//		char buf[1024] = { 0 };
//		cin >> buf;
//		cout << "输入的是字符串，为：" << buf << endl;
//	}
//}
//
//// 例2，输入 0 ~ 10 之间的数字，如果有误，重新输入
//void test08() {
//	cout << "请输入 0 ~ 10 之间的数字" << endl;
//	int num;
//
//	while (true)
//	{
//		cin >> num;
//
//		if (num >= 0 && num <= 10) {
//			cout << "输入正常，num = " << num << endl;
//			break;
//		}
//		else
//		{
//			// 如果异常
//			// 清空缓冲区，重置标志位
//			cin.clear();
//			cin.sync();
//			cin.ignore();
//
//			// 如果 标志位为 0，代表缓冲区正常
//			//cout << "cin.fail() : " << cin.fail() << endl;
//
//			cout << "输入有误，请重新输入" << endl;
//		}
//	}
//}
//
//int main() {
//
//	test08();
//
//	return 0;
//}
