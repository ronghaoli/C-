//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//
//void test01() {
//	// 写文件
//	ofstream ofs("./test.txt", ios::out);
//
//	if (!ofs.is_open()) {
//		cout << "文件打开失败" << endl;
//	}
//
//	ofs << "你是sb" << endl;
//	ofs << "你是sb" << endl;
//	ofs << "你是sb" << endl;
//	ofs << "你是sb" << endl;
//	ofs << "你是sb" << endl;
//
//	ofs.close();
//}
//
//void test02() {
//	// 读文件
//	ifstream ifs;
//
//	ifs.open("./test.txt", ios::in);
//
//	if (!ifs.is_open()) {
//		cout << "文件打开失败" << endl;
//	}
//
//	char buf[1024] = { 0 };
//	while (ifs >> buf) {
//		cout << buf << endl;
//	}
//
//	ifs.close();
//}
//
//void test03() {
//	// 读文件
//	ifstream ifs;
//
//	ifs.open("./test.txt", ios::in);
//
//	if (!ifs.is_open()) {
//		cout << "文件打开失败" << endl;
//	}
//
//	char buf[1024] = { 0 };
//	while (ifs.getline(buf, sizeof(buf))) {
//		cout << buf << endl;
//	}
//
//	ifs.close();
//}
//
//void test04() {
//	// 读文件
//	ifstream ifs;
//
//	ifs.open("./test.txt", ios::in);
//
//	if (!ifs.is_open()) {
//		cout << "文件打开失败" << endl;
//	}
//
//	string buf;
//	while (getline(ifs, buf)) {
//		cout << buf << endl;
//	}
//
//	ifs.close();
//}
//
//void test05() {
//	// 读文件
//	ifstream ifs;
//
//	ifs.open("./test.txt", ios::in);
//
//	if (!ifs.is_open()) {
//		cout << "文件打开失败" << endl;
//	}
//
//	char c;
//	while ((c = ifs.get()) != EOF)
//	{
//		cout << c;
//	}
//
//	ifs.close();
//}
//
//int main() {
//
//	test04();
//
//	return 0;
//}
