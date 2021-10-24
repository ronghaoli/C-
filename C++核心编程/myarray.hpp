//#pragma once
//#include <iostream>
//using namespace std;
//
//template<class T>
//class MyArray {
//public:
//
//	MyArray(int capacity) :m_Capacity(capacity), m_Size(0) {
//		this->pAddress = new T[capacity];
//	}
//
//	MyArray(const MyArray& arr) {
//		this->m_Capacity = arr.m_Capacity;
//		this->m_Size = arr.m_Size;
//		this->pAddress = new T[this->m_Capacity];
//		for (int i = 0; i < this->m_Size; i++) {
//			this->pAddress[i] = arr.pAddress[i];
//		}
//	}
//
//	// 重载 =
//	MyArray& operator=(const MyArray& arr) {
//		if (this->pAddress) {
//			delete[]this->pAddress;
//			this->pAddress = nullptr;
//		}
//		this->m_Capacity = arr.m_Capacity;
//		this->m_Size = arr.m_Size;
//		this->pAddress = new T[m_Capacity];
//		for (int i = 0; i < arr.m_Size; i++) {
//			this->pAddress[i] = arr.pAddress[i];
//		}
//		return *this;
//	}
//
//	~MyArray() {
//		if (this->pAddress) {
//			delete[]this->pAddress;
//			this->pAddress = nullptr;
//		}
//	}
//
//	T& operator[](int index) {
//		return this->pAddress[index];
//	}
//
//	void push_back(const T& val) {
//		if (this->m_Size >= this->m_Capacity) {
//			return;
//		}
//		this->pAddress[this->m_Size] = val;
//		this->m_Size++;
//	}
//
//	int getCapacity() {
//		return this->m_Capacity;
//	}
//
//	int getSize() {
//		return this->m_Size;
//	}
//
//private:
//	T* pAddress;	// 指向堆区真实数组指针
//	int m_Capacity;	// 容量
//	int m_Size;		// 大小
//};
