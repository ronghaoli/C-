//#include <iostream>
//#include <stdexcept>
//using namespace std;
//
//class MyOutOfRangeException :public exception {
//public:
//	MyOutOfRangeException(const char* str) {
//		m_errorInfo = str;
//	}
//	MyOutOfRangeException(string str) {
//		m_errorInfo = str;
//	}
//
//	char const* what() const override
//	{
//		// 将 string 转为 const char*
//		return m_errorInfo.c_str();
//	}
//
//	string m_errorInfo;
//};
//
//class Person {
//public:
//	Person(int age) {
//		if (age < 0 || age>150) {
//			throw MyOutOfRangeException("年龄越界了");
//		}
//		else
//		{
//			this->m_Age = age;
//		}
//	}
//
//private:
//	int m_Age;
//};
//
//void test01() {
//	try
//	{
//		Person(151);
//	}
//	catch (const std::exception& e)
//	{
//		cout << e.what() << endl;
//	}
//}
//
//int main() {
//
//	test01();
//
//	return 0;
//}
