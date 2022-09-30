#ifndef ROSTER
#define ROSTER

#include <iostream>
#include <string>

#include "student.h"

using namespace std;

class Roster {
	public:  
		//Requirement E2
		void parse(string data);

		void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram);

		void remove(string studentID);

		void printAll();

		void printAverageDaysInCourse(string studentID);

		void printInvalidEmails();

		void printByDegreeProgram(DegreeProgram degreeProgram);

		~Roster();

	private:
		//Requirement E1
		Student* classRosterArray[5];
		int rosterIndex = 0;
		string studentID;
		string firstName;
		string lastName;
		string Email;
		int age;
		int daysInCourse1;
		int daysInCourse2;
		int daysinCourse3;
		DegreeProgram degreeProgram;
};


#endif
