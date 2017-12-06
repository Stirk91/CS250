/*
Linden Stirk
Lab1_Part2.cpp
*/

#include <iostream>
#include <list>
#include <string>
using namespace std;


void AddCourses(list<string> &courses)
{
	courses.push_front("cs 250");
	courses.push_front("cs 200");
	courses.push_front("cs 210");
	courses.push_front("cs 235");
	courses.push_front("cs 134");
	courses.push_front("cs 211");
}

void SortList(list<string> &courses)
{
	courses.sort();
}

void ReverseList(list<string> &courses)
{
	courses.reverse();
}

void DisplayCourses(list<string> &courses)
{
	int counter = 0;

	for (list<string>::iterator it = courses.begin(); it != courses.end(); it++)
	{
		if (counter != 0)
		{
			cout << ", ";
		}
		cout << counter++ << ". " << (*it);
	}
	cout << endl;

}


int main()
{
	list<string> courses;

	AddCourses(courses);
	DisplayCourses(courses);

	SortList(courses);
	DisplayCourses(courses);

	ReverseList(courses);
	DisplayCourses(courses);

	return 0;
}
