#pragma once
#include "Person.h"

class Vector {
	int size;
	int cur;
	Person** start_ptr;
public:
	Vector();
	Vector(int);
	~Vector();

	void Add(Person*);
	friend ostream& operator<<(ostream&, const Vector&);
};