//#include <iostream>
//using std::cout;
//using std::endl;
//
//class Animal {
//public:
//	Animal() {
//		cout << "Animal的构造函数调用" << endl;
//	}
//	// 如果子类中有指向堆区的属性，那么要利用虚析构技术，在delete时调用子类的析构函数
//	//virtual ~Animal() {
//	//	cout << "Animal的析构函数调用" << endl;
//	//}
//	// 纯虚析构 需要有声明 也需要有实现（纯虚函数不需要实现）
//	// 如果一个类中，有了纯虚析构函数，那么这个类也属于抽象类了
//	virtual ~Animal() = 0;
//	virtual void speak() {
//		cout << "动物在说话" << endl;
//	}
//};
//
//Animal::~Animal() {
//	cout << "Animal的纯虚析构函数调用" << endl;
//}
//
//class Cat :public Animal {
//public:
//	Cat(char* name) {
//		this->m_Name = new char[strlen(name) + 1];
//		strcpy_s(this->m_Name, strlen(name) + 1, name);
//		cout << "Cat的构造函数调用" << endl;
//	}
//
//	~Cat() {
//		if (this->m_Name != NULL) {
//			delete[]m_Name; m_Name = NULL;
//		}
//		cout << "Cat的析构函数调用" << endl;
//	}
//
//	void speak() {
//		cout << m_Name << "小猫在说话" << endl;
//	}
//
//	char* m_Name;
//};
//
//void test01() {
//	Animal* animal = new Cat((char*)"Tom");
//
//	animal->speak();
//
//	delete animal;
//}
//
//int main() {
//
//	test01();
//
//	return 0;
//}