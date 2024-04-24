#pragma once
#include "Vector.h"
#include <string>
#include <iostream>

Vector::Vector() 
{
	start_ptr = nullptr;
	size = 0;
	cur = 0;
}

Vector::Vector(int n) 
{
	start_ptr = new Person* [n];
	size = n;
	cur = 0;
}

Vector::~Vector() {
	if (start_ptr != nullptr)delete[] start_ptr;
	start_ptr = nullptr;
}

void Vector::Add(Person* p) {
	if (cur < size) 
	{
		start_ptr[cur] = p;
		cur++;
	}
	else
	{
		cout << "Vector overflowed" << endl;
	}
}

ostream& operator<< (ostream& stream, const Vector& v)
{
	if (v.size == 0) {
		stream << "Empty vector" << endl;
	}

	Person** p = v.start_ptr;

	for (int i = 0; i < v.cur; i++)
	{
		//stream << **p;
		(**p).Show();
		p++;
	}

	return stream;
}