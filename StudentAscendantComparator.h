#include<iostream>
#include "Comparator.h"

using namespace std;

class StudentAscendantComparator : public Comparator<Student>
{
public:
	int compare(const Student& left, const Student& right)
	{
		return left.firstName.compare(right.firstName);
	}
};
