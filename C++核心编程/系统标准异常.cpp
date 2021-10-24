//#include <iostream>
//#include <stdexcept>
//using namespace std;
//
//class Person {
//public:
//	Person(int age) {
//		if (age < 0 || age>150) {
//			throw out_of_range("年龄必须在 0 ~ 150");
//		}
//		else
//		{
//			this->m_Age = age;
//		}
//	}
//
//private:
//
//	int m_Age;
//};
//
//void test01() {
//	try
//	{
//		Person p(151);
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
