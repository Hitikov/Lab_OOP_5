#include "Person.h"
#include "Vector.h"
#include <string>
#include <iostream>

using namespace std;

int main() {
	Vector vect(2);
	Person p1;
	Student s1;

	p1.SetName("ABC");
	p1.SetAge(90);

	s1.SetName("ABC jr.");
	s1.SetAge(30);
	s1.SetSubject("Inf");
	s1.SetGrade(5);

	vect.Add(&p1);
	vect.Add(&s1);

	cout << vect;

	return 0;
}