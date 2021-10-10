//#include <iostream>
//using std::cout;
//using std::endl;
//
//class Animal {
//public:
//	virtual void speak() {
//		cout << "动物在说话" << endl;
//	}
//
//	virtual void eat(int a) {
//		cout << "动物在吃饭" << endl;
//	}
//};
//
//class Cat :public Animal {
//public:
//	// 重写，子类重写父类中的虚函数，函数返回值，函数名，形参列表需相同
//	// 虚函数表中记录 &Cat::speak
//	void speak() {
//		cout << "小猫在说话" << endl;
//	}
//
//	void eat(int a) {
//		cout << "小猫在吃饭" << endl;
//	}
//};
//
///*
//class Cat       size(4):
//		+---
// 0      | +--- (base class Animal)
// 0      | | {vfptr}
//		| +---
//		+---
//
//Cat::$vftable@:
//		| &Cat_meta
//		|  0
// 0      | &Cat::speak
// 1      | &Cat::eat
//*/
//
//class Dog :public Animal {
//public:
//	void speak() {
//		cout << "小狗在说话" << endl;
//	}
//};
//
//// 动态多态产生条件
//// 继承关系
//// 父类中有虚函数
//// 子类重写父类虚函数
//// 父类的指针或引用指向子类的对象
//
//// 对于有父子关系的两个类，指针或则引用，是可以直接转换的
//void doSpeak(Animal& animal) {		// Animal & animal = cat;
//	animal.speak();					// 如果地址早就绑定了，属于静态联编
//	// 如果想调用小猫说话，函数的地址就不能早就绑定好，而是在运行阶段再去绑定函数地址，叫做动态联编
//}
//
//void test01() {
//	Cat cat;
//	doSpeak(cat);
//
//	Dog dog;
//	doSpeak(dog);
//}
//
//void test02() {
//	// vfptr 虚函数表指针，指向，虚函数表（vftable），虚函数表内部记录虚函数入口地址
//	cout << "sizeof(Animal) " << sizeof(Animal) << endl;
//	cout << "sizeof(Cat) " << sizeof(Cat) << endl;
//
//	Animal* animal = new Cat;
//	animal->speak();
//
//	// 通过地址偏移找到函数入口，再通过函数指针调用
//	// *(int*)animal 解引用到虚函数表中
//	// *(int*)*(int*)animal 解引用到函数speak地址
//	// void(*)() 函数指针
//
//	// 调用猫在说话
//	((void(*)())(*(int*)*(int*)animal))();
//
//	// C/C++默认调用惯例 __cdecl
//	// 用下列调用时候，真实调用惯例 是__stdcall
//
//	// 函数指针
//	typedef void(__stdcall* FUNCPOINT)(int);
//
//	// 小猫在吃饭
//	(FUNCPOINT(*((int*)*(int*)animal + 1)))(10);
//
//}
//
//int main() {
//
//	test02();
//
//	return 0;
//}