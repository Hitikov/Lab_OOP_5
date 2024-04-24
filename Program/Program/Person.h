#pragma once
#include <string>

using namespace std;

class LivingObject
{
protected:
	virtual bool IsExist() = 0;
	virtual void Show() = 0;
};

class Person : LivingObject {
protected:
	string name;
	int age;
public:
	Person();
	Person(string, int);
	Person(const Person&);
	~Person();

	string GetName();
	int GetAge();

	void SetName(string);
	void SetAge(int);

	bool IsExist() override;
	virtual void Show() override;

	Person& operator=(const Person&);
	friend istream& operator>>(istream&, Person&);
	friend ostream& operator<<(ostream&, const Person&);

};

class Student: public Person {
protected:
	string subject;
	int grade;
public:
	Student();
	Student(string, int, string, int);
	Student(const Student&);
	~Student();

	string GetSubject();
	int GetGrade();

	void SetSubject(string);
	void SetGrade(int);

	void CheckGrade();
	virtual void Show() override;

	Student& operator=(const Student&);
	friend istream& operator>>(istream&, Student&);
	friend ostream& operator<<(ostream&, const Student&);

};