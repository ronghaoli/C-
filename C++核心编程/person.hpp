﻿#pragma once
#include <iostream>
using namespace std;

template<class T1, class T2>
class Person {
public:
	Person(T1 name, T2 age);

	void show();

	T1 m_Name;
	T2 m_Age;
};

template<class T1, class T2>
Person<T1, T2>::Person(T1 name, T2 age) :m_Name(name), m_Age(age)
{}

template<class T1, class T2>
void Person<T1, T2>::show() {
	cout << m_Name << "\t" << m_Age << endl;
}
