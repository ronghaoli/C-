//#include <iostream>
//using std::cout;
//using std::endl;
//
//class News {
//public:
//	void header() {
//		cout << "公共的头部" << endl;
//	}
//	void bottom() {
//		cout << "公共的底部" << endl;
//	}
//	void leftList() {
//		cout << "公共的左侧列表" << endl;
//	}
//	void content() {
//		cout << "新闻播报···" << endl;
//	} 
//};
//
//class SportNews :public News {
//public:
//	void content() {
//		cout << "世界杯" << endl;
//	}
//};
//
//// 利用继承模拟网页
//// 继承的优点，减少重复的代码，提高代码复用性
//class BasePage {
//public:
//	void header() {
//		cout << "公共的头部" << endl;
//	}
//	void bottom() {
//		cout << "公共的底部" << endl;
//	}
//	void leftList() {
//		cout << "公共的左侧列表" << endl;
//	}
//};
//
//class News :public BasePage {
//public:
//	void content() {
//		cout << "新闻播报" << endl;
//	}
//};
//
//class Sport :public BasePage {
//public:
//	void content() {
//		cout << "世界杯" << endl;
//	}
//};
//
//void test01() {
//	News news;
//	cout << "新闻页面内容如下" << endl;
//
//	news.header();
//	news.bottom();
//	news.leftList();
//	news.content();
//
//	SportNews sp;
//	cout << "体育页面内容如下" << endl;
//
//	sp.header();
//	sp.bottom();
//	sp.leftList();
//	sp.content();
//
//}
//
//int main() {
//
//	test01();
//
//	return 0;
//}