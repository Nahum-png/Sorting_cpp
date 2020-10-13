#include<iostream>
#include<string.h>
#include<time.h>

using namespace std;

class Student
{
public:

	int clave;
	string firstName;
	string lastName;
	string monthBirthday;

	Student(string firstName, string lastName, int clave, string monthBirthday);

	void setFirstName(string first) {
		firstName = first;
	}

	string getFirstName() {
		return firstName;
	}

	void setLastName(string last) {
		lastName = last;
	}
	
	string getLastName() {
		return lastName;
	}

	void setClave(int claves) {
		clave = claves;
	}

	int getClave() {
		return clave;
	}

	void setMonthBirthday(string month) {
		monthBirthday = month;
	}

	string getMonthBirthday() {
		return monthBirthday;
	}

};

Student::Student(string name, string lName, int claves, string birthday) {
	firstName = name;
	lastName = lName;
	clave = claves;
	monthBirthday = birthday;
}
