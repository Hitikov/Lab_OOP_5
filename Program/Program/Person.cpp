#pragma once
#include "Person.h"
#include <string>
#include <iostream>

using namespace std;

Person::Person()
{
	name = "noname";
	age = 0;
}
Person::Person(string inName, int inAge)
{
	name = inName;
	age = inAge;
}
Person::Person(const Person& p)
{
	name = p.name;
	age = p.age;
}
Person::~Person()
{

}

string Person::GetName()
{
	return name;
}
int Person::GetAge()
{
	return age;
}

void Person::SetName(string inName)
{
	name = inName;
}
void Person::SetAge(int inAge)
{
	age = inAge;
}

bool Person::IsExist() {
	if (name != "noname" && age != 0) 
	{
		return true;
	}
	else
	{
		return false;
	}
}

void Person::Show() {
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
}

Person& Person::operator=(const Person& p)
{
	this->name = p.name;
	this->age = p.age;
	return *this;
}
istream& operator>>(istream& stream, Person& p)
{
	cout << "Set name: ";
	stream >> p.name;
	cout << "Set age: ";
	stream >> p.age;
	return stream;
}
ostream& operator<<(ostream& stream, const Person& p)
{
	stream << "Name: " << p.name << endl;
	stream << "Age: " << p.age << endl;
	return stream;
}

Student::Student():Person()
{
	subject = "nosubject";
	grade = 0;
}
Student::Student(string inName, int inAge, string inSubject = "nosubject", int inGrade = 0) : Person(inName, inAge)
{
	subject = inSubject;
	grade = inGrade;
}
Student::Student(const Student& s)
{
	name = s.name;
	age = s.age;
	subject = s.subject;
	grade = s.grade;
}
Student::~Student()
{
	Person::~Person();
}

string Student::GetSubject()
{
	return subject;
}
int Student::GetGrade()
{
	return grade;
}

void Student::SetSubject(string inSubject)
{
	subject = inSubject;
}
void Student::SetGrade(int inGrade)
{
	grade = inGrade;
}

void Student::CheckGrade()
{
	if (grade < 3) 
	{
		cout << "Grade is not satisfactory" << endl;
	}
}

void Student::Show() {
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
	cout << "Subject: " << subject << endl;
	cout << "Grade: " << grade << endl;
}

Student& Student::operator=(const Student& s)
{
	this->name = s.name;
	this->age = s.age;
	this->subject = s.subject;
	this->grade = s.grade;
	return *this;
}
istream& operator>>(istream& stream, Student& s)
{
	cout << "Set name: ";
	stream >> s.name;
	cout << "Set age: ";
	stream >> s.age;
	cout << "Set subject: ";
	stream >> s.subject;
	cout << "Set grade: ";
	stream >> s.grade;
	return stream;
}
ostream& operator<<(ostream& stream, const Student& s)
{
	stream << "Name: " << s.name << endl;
	stream << "Age: " << s.age << endl;
	stream << "Subject: " << s.subject << endl;
	stream << "Grade: " << s.grade << endl;
	return stream;
}