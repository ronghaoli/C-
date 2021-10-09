//#include <iostream>
//using std::cout;
//using std::endl;
//
//class Base {
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
//// 父类中私有属性子类继承下去了但是访问不到，是由编译器给隐藏了
//class Drive :public Base {
//public:
//	int m_D;
//};
//
//void test01() {
//	cout << "sizeof(int): " << sizeof(int) << endl;
//	cout << "sizeof(Base): " << sizeof(Base) << endl;
//	cout << "sizeof(Drive): " << sizeof(Drive) << endl;
//}
//
//int main() {
//
//	test01();
//
//	return 0;
//}