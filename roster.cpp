#include <iostream>
#include <string>
#include <iomanip>
#include "roster.h"

using namespace std;

const string studentData[] =
{ "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY", "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK", "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE", "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY", "A5,Warin,Sukhtipyaroge,wsukht1@my.wgu.edu,39,30,25,20,SOFTWARE" };

//used to parse data from studentData table
void Roster::parse(string data) {
	size_t rhs = data.find(",");
	string studentID = data.substr(0, rhs);

	size_t lhs = rhs + 1;
	rhs = data.find(",", lhs);
	string firstName = data.substr(lhs, rhs - lhs);

	lhs = rhs + 1;
	rhs = data.find(",", lhs);
	string lastName = data.substr(lhs, rhs - lhs);

	lhs = rhs + 1;
	rhs = data.find(",", lhs);
	string emailAddress = data.substr(lhs, rhs - lhs);

	lhs = rhs + 1;
	rhs = data.find(",", lhs);
	int age = stoi(data.substr(lhs, rhs - lhs));

	lhs = rhs + 1;
	rhs = data.find(",", lhs);
	int daysInCourse1 = stoi(data.substr(lhs, rhs - lhs));

	lhs = rhs + 1;
	rhs = data.find(",", lhs);
	int daysInCourse2 = stoi(data.substr(lhs, rhs - lhs));

	lhs = rhs + 1;
	rhs = data.find(",", lhs);
	int daysInCourse3 = stoi(data.substr(lhs, rhs - lhs));

	lhs = rhs + 1;
	rhs = data.find(",", lhs);
	if (data.substr(lhs, rhs - lhs) == "SECURITY") {
		degreeProgram = DegreeProgram::SECURITY;
	}
	else if (data.substr(lhs, rhs - lhs) == "NETWORK") {
		degreeProgram = DegreeProgram::NETWORK;
	}
	else if (data.substr(lhs, rhs - lhs) == "SOFTWARE") {
		degreeProgram = DegreeProgram::SOFTWARE;
	}

	this->add(studentID, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3, degreeProgram);
}
//Requirement 3a - define public void add() - adds students to class roster
void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram) {
	classRosterArray[rosterIndex] = new Student(studentID, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3, degreeProgram);

	rosterIndex++;
} 
//Requirement E3b - define public void remove() - removes student from class roster by student ID
void Roster::remove(string studentID) {
	bool found = false;
	int i;
	for (i = 0; i < 5; i++) {
		if (classRosterArray[i]->getstudID() == studentID) {
			found = true;
			break;
		}
	}
	if (found) {
		for (int j = i; j < 5; j++) {
			if (j < 4) {
				classRosterArray[j] = classRosterArray[j + 1];
			}
			else if (j == 4) {
				classRosterArray[j] = new Student();
			}
		}
		cout << "Student ID: " << studentID << " removed successfully.\n";
	}
	else if (!found) {
		cout << "Student ID: " << studentID << " not found.\n";
	}
	cout << endl;
} 
//Requirement E3c - define public void printAll() - prints entire class roster
void Roster::printAll() {
	for (int i = 0; i < 5; i++) {
		if (classRosterArray[i]->getstudID() != "") {
			classRosterArray[i]->print();
		}
	}
	cout << endl;
} 
//Requirement E3d - define public void printAverageDaysInCourse() - takes total number of days in course and displays the average
void Roster::printAverageDaysInCourse(string studentID) {
	for (int i = 0; i < 5; i++) {
		if (classRosterArray[i]->getstudID() == studentID) {
			double totaldays = classRosterArray[i]->getcourseDays1() + classRosterArray[i]->getcourseDays2() + classRosterArray[i]->getcourseDays3();
			cout << "Student ID: " << classRosterArray[i]->getstudID()<< "\t" << "Average days in course: ";
			cout << fixed << setprecision(1);
			cout << totaldays / 3.0 << endl;
		}
	}
	cout << endl;
} 
//Requirement E3e - define public void printInvalidEmails - prints invalid email addresses
void Roster::printInvalidEmails() {
	for (int i = 0; i < 5; i++) {
		if (classRosterArray[i]->getEmail().find(' ') != string::npos ||
			classRosterArray[i]->getEmail().find('@') == string::npos ||
			classRosterArray[i]->getEmail().find('.') == string::npos) {
			cout << classRosterArray[i]->getEmail() << endl;
		}
	}
	cout << endl;
}
//Requirement E3f - define public void printByDegreeProgram() - prints class roster by degree program
void Roster::printByDegreeProgram(DegreeProgram degreeProgram) {
	for (int i = 0; i < 5; i++) {
		if (classRosterArray[i]->getDegree() == degreeProgram) {
			classRosterArray[i]->print();
		}
	}
	cout << endl;
} 
//deconstructor
Roster::~Roster(){}