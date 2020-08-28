#pragma once
#include <iostream>
#include <string>
using namespace std;
class Teacher {
public:
	Teacher(string _name = "jim", int _age = 1);
	Teacher(const Teacher& tea);
	~Teacher();
	void setName(string _name);
	string getName();
	void setAge(int _age);
	int getAge();
private:
	string m_strName;
	int m_iAge;
};
