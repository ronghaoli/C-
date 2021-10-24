//#include <iostream>
//using namespace std;
//
//template<class T>
//void mySwap(T& a, T& b) {
//	T temp;
//	temp = a;
//	a = b;
//	b = temp;
//}
//
//
//// 排序顺序，从大到小，算法，选择排序
//template<class T>
//void mySort(T arr[], int len) {
//
//	for (int i = 0; i < len; i++) {
//		int max = i;
//		for (int j = i + 1; j < len; j++) {
//			if (arr[j] > arr[max]) {
//				max = j;
//			}
//		}
//
//		// 判断 算出的max和开始认定的i是否一致
//		if (i != max) {
//			mySwap(arr[i], arr[max]);
//		}
//
//	}
//}
//
//template <class T>
//void printArray(T arr[], int len) {
//	for (int i = 0; i < len; i++) {
//		cout << arr[i];
//	}
//	cout << endl;
//}
//
//
//void test01() {
//
//	char charArray[] = "helloworld";
//
//	mySort(charArray, strlen(charArray));
//
//	printArray(charArray, strlen(charArray));
//
//	int intArray[] = { 5,7,1,8,2 };
//
//	mySort(intArray, sizeof(intArray) / sizeof(int));
//
//	printArray(intArray, sizeof(intArray) / sizeof(int));
//
//}
//
//int main() {
//
//	test01();
//
//	return 0;
//}