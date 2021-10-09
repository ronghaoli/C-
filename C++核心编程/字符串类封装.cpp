//#include <iostream>
//using std::cin;
//using std::cout;
//using std::endl;
//using std::ostream;
//using std::istream;
//
//class MyString {
//	friend ostream& operator<<(ostream& cout, const MyString& str);
//	friend istream& operator>>(istream& cin, MyString& str);
//public:
//	MyString(char* str) {
//		this->pString = new char[strlen(str) + 1];
//		strcpy_s(this->pString, strlen(str) + 1, str);
//		this->m_Size = strlen(str);
//		cout << "MyString 有参构造函数调用" << endl;
//	}
//	MyString(const MyString& str) {
//		this->pString = new char[strlen(str.pString) + 1];
//		strcpy_s(this->pString, strlen(str.pString) + 1, str.pString);
//		this->m_Size = str.m_Size;
//		cout << "MyString 复制构造函数调用" << endl;
//	}
//	~MyString() {
//		if (this->pString != NULL) {
//			delete[]pString; pString = NULL;
//			cout << "MyString 析构调用" << endl;
//		}
//	}
//	// 重载 = 运算符
//	MyString& operator=(const MyString& str) {
//		if (this->pString) {
//			delete[] this->pString;
//			this->pString = NULL;
//		}
//		this->pString = new char[strlen(str.pString) + 1];
//		strcpy_s(this->pString, strlen(str.pString) + 1, str.pString);
//		this->m_Size = strlen(str.pString);
//		return *this;
//	}
//	MyString& operator=(const char* str) {
//		if (this->pString) {
//			delete[] this->pString;
//			this->pString = NULL;
//		}
//		this->pString = new char[strlen(str) + 1];
//		strcpy_s(this->pString, strlen(str) + 1, str);
//		this->m_Size = strlen(str);
//		return *this;
//	}
//	// 重载[]运算符，要返回左值来使用的，得返回引用
//	char& operator[](int index) {
//		return pString[index];
//	}
//	// 重载 + 运算符
//	MyString operator+(const MyString& str) {
//		// 计算开辟内存大小
//		int newSize = this->m_Size + strlen(str.pString) + 1;
//		char* temp = new char[newSize];
//		memset(temp, 0, newSize);
//
//		strcat_s(temp, strlen(this->pString) + 1, this->pString);
//		strcat_s(temp, newSize, str.pString);
//
//		MyString newString = temp;
//
//		delete[]temp;
//
//		return newString;
//
//	}
//	MyString operator+(const char* str) {
//		// 计算开辟内存大小
//		int newSize = this->m_Size + strlen(str) + 1;
//		char* temp = new char[newSize];
//		memset(temp, 0, newSize);
//
//		strcat_s(temp, strlen(this->pString) + 1, this->pString);
//		strcat_s(temp, newSize, str);
//
//		MyString newString = temp;
//
//		delete[]temp;
//
//		return newString;
//	}
//	// 重载==运算符
//	bool operator==(const char* str) {
//		return !strcmp(this->pString, str);
//	}
//	bool operator==(const MyString& str) {
//		return !strcmp(this->pString, str.pString);
//	}
//private:
//	char* pString;		// 维护在堆区开辟的字符数组
//	int m_Size;			// 字符串长度，不统计\0
//};
//
//// 重载左移运算符
//ostream& operator<<(ostream& cout, const MyString& str) {
//	cout << str.pString;
//	return cout;
//}
//// 重载右移运算符
//istream& operator>>(istream& cin, MyString& str) {
//	if (str.pString) {
//		delete[] str.pString;
//		str.pString = NULL;
//	}
//
//	char buf[1024];
//	cin >> buf;
//
//	str.pString = new char[strlen(buf) + 1];
//	strcpy_s(str.pString, strlen(buf) + 1, buf);
//	str.m_Size = strlen(buf);
//
//	return cin;
//
//}
//
//void test01() {
//	MyString str = (char*)"abcd";
//
//	MyString str2 = (char*)"cc";
//
//	str2 = str;
//	cout << "str2 = " << str2 << endl;
//	str2 = "eee";
//	cout << "str2 = " << str2 << endl;
//
//	cout << str2[0] << endl;
//	str2[0] = 'z';
//	cout << str2[0] << endl;
//
//	MyString str3 = (char*)"abc";
//	MyString str4 = (char*)"def";
//	MyString str5 = str3 + str4;
//	cout << str5 << endl;
//	MyString str6 = str5 + "eee";
//	cout << str6 << endl;
//	cout << (str5 == str6) << endl;
//	if (str6 == "abcdefeee") {
//		cout << "好耶好耶" << endl;
//	}
//}
//
//int main() {
//	test01();
//	return 0;
//}