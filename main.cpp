#include <iostream>
#include <string>

using namespace std;

#include "degree.h"
#include "student.h"
#include "roster.h"

int main()
{
	//Requirement A - Modify studentData Table to include personal info as the last item.
	const string studentData[] =
	{ "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY", "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK", "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE", "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY", "A5,Warin,Sukhtipyaroge,wsukht1@my.wgu.edu, 39, 30, 25, 20 ,SOFTWARE" };
	
	//Requirement F1 - print course title, programming language, student ID, name
	cout << "C867: Scripting and Programming - Applications\n";
	cout << "C++\n";
	cout << "010179539\n";
	cout << "Warin Sukhtipyaroge\n";
	cout << endl;
	
	//Requirement F2 - create instance of Roster cla
	Roster classRoster;

	//Requirement F3 - add each student to classRoster
	for (int i = 0; i < 5; i++) {
		classRoster.parse(studentData[i]);
	} 

	//Requirement F4 (lines 30 - 51)
	cout << "classRoster.printAll():\n";
	classRoster.printAll();

	cout << "classRoster.printInvalidEmails():\n";
	classRoster.printInvalidEmails();

	cout << "classRoster.printAverageDaysInCourse(): //loop through classRosterArray\n";
	for (int i = 0; i < 5; i++) {
		classRoster.printAverageDaysInCourse("A" + to_string(i));
	}

	cout << "classRoster.printByDegreeProgram(SOFTWARE):\n";
	classRoster.printByDegreeProgram(SOFTWARE);

	cout << "classRoster.remove(\"A3\"):\n";
	classRoster.remove("A3");

	cout << "classRoster.printAll():\n";
	classRoster.printAll();

	cout << "classRoster.remove(\"A3\"): // expected: ID not found\n";
	classRoster.remove("A3"); 

	return 0;
}