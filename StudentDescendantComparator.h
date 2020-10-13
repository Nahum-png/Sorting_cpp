#include<iostream>
#include "Comparator.h"

using namespace std;

class StudentDescendantComparator : public Comparator<Student>
{
public:
	int compare(const Student& left, const Student& right)
	{
		return right.lastName.compare(left.lastName);
	}
};
