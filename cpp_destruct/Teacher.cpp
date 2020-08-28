#include "Teacher.h"

Teacher::Teacher(string _name, int _age)
{
	cout << "Teacher::Teacher(string _name, int _age)" << endl;
	m_strName = _name;
	m_iAge = _age;
}

Teacher::Teacher(const Teacher& tea)
{
	cout << "Teacher::Teacher(const Teacher& tea)" << endl;
}
Teacher::~Teacher()
{
	cout << "Teacher::~Teacher()" << endl;
}
void Teacher::setName(string _name)
{
	m_strName = _name;
}

string Teacher::getName()
{
	return m_strName;
}

void Teacher::setAge(int _age)
{
	m_iAge = _age;
}

int Teacher::getAge()
{
	return m_iAge;
}
