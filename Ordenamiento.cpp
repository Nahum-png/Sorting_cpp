#include <iostream>
#include <string.h>
#include <time.h>
#include "StringAscendantComparator.h"
#include "IntegerDescendantComparator.h"
#include "Comparator.h"
#include "Sorter.h"
#include "Student.h"
#include "StudentAscendantComparator.h"
#include "StudentDescendantComparator.h"

using namespace std;

template <typename T>
void printArray(T elements[], int elementsCount);

void printArrayStudent(Student students[], int elements);

int main()
{
	string datos[] = { "Hector", "Jocelyn", "Antonio", "Caleb", "Isaias", "Jose", "Gustavo", "Alain", "Ivan" };
	StringAscendantComparator* stringComparator = new StringAscendantComparator;

	Sorter<string>::sort(datos, stringComparator, 9);

	printArray<string>(datos, 9);

	int integerElements[] = { 10,43,21,64,28,38,33,51,42,21 };
	IntegerDescendantComparator* integerComparator = new IntegerDescendantComparator;

	Sorter<int>::sort(integerElements, integerComparator, 10);

	printArray<int>(integerElements, 10);

	Student students[] = { Student("Hector","Hernandez",46545468,"AUGUST"),
		Student("Jocelyn","Llamas",84656846,"JULY"),
		Student("Antonio","Galvan",13468451,"JANUARY"),
		Student("Francisco","Solis",4684685,"FEBRUARY"),
		Student("Caleb","Solis",55468779,"FEBRUARY"),
		Student("Arturo","Llamas",32568464,"JULY")
	};

	StudentAscendantComparator* studentComparator = new StudentAscendantComparator;  
	Sorter<Student>::sort(students, studentComparator, 6);                          ///Compara Ascendente los firstName

	printArrayStudent(students, 6);

	cout << "\n";

	StudentDescendantComparator* studentDComparator = new StudentDescendantComparator;
	Sorter<Student>::sort(students,studentDComparator,6);                        ///Compara descendente lastName

	printArrayStudent(students, 6);

	return 0;
}


void printArrayStudent(Student students[], int elements) {
	for (int i = 0; i < elements; i++) {
		if (i > 0) {
			cout << ",";
		}
		cout << students[i].firstName;
		cout << " ";
		cout << students[i].lastName;
	}
	cout << endl;
}

template <typename T>
void printArray(T elements[], int elementsCount) {
	for (int i = 0; i < elementsCount; i++) {
		if (i > 0) {
			cout << ",";
		}
		cout << elements[i];
	}
	cout << endl;
}