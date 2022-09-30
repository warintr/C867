#include <iostream>
#include <string>
using namespace std;

#include "student.h"

void Student::setstudID(string studID) {
	studentID = studID;
}

void Student::setFName(string FName) {
	firstName = FName;
}

void Student::setLName(string LName) {
	lastName = LName;
}

void Student::setEmail(string Email) {
	emailAddress = Email;
}

void Student::setStudAge(int StudAge) {
	age = StudAge;
}

void Student::setcourseDays(int courseDays1, int courseDays2, int courseDays3) {
	daysInCourse[0] = courseDays1;
	daysInCourse[1] = courseDays2;
	daysInCourse[2] = courseDays3;
}

void Student::setDegree(DegreeProgram Degree) {
	degreeProgram = Degree;
}
Student::Student(){};

Student::Student(string studID, string FName, string LName, string Email, int StudAge, int courseDays1, int courseDays2, int courseDays3, DegreeProgram Degree)
{
	this->studentID = studID;
	this->firstName = FName;
	this->lastName = LName;
	this->emailAddress = Email;
	this->age = StudAge;
	this->daysInCourse[0] = courseDays1;
	this->daysInCourse[1] = courseDays2;
	this->daysInCourse[2] = courseDays3;
	this->degreeProgram = Degree;
}
string Student::getstudID() const {
	return studentID;
}

string Student::getFName() const {
	return firstName;
}

string Student::getLName() const {
	return lastName;
}

string Student::getEmail() const {
	return emailAddress;
}

int Student::getStudAge() const {
	return age;
}

int Student::getcourseDays1() const {
	return daysInCourse[0];
}

int Student::getcourseDays2() const {
	return daysInCourse[1];
}

int Student::getcourseDays3() const {
	return daysInCourse[2];
}

DegreeProgram Student::getDegree() const {
	return degreeProgram;
}


void Student::print() const {
	cout << "Student ID: " << getstudID() << "\t";
	cout << "First Name: " << getFName() << "\t";
	cout << "Last Name: " << getLName() << "\t";
	cout << "Email Address: " << getEmail() << "\t";
	cout << "Age: " << getStudAge() << "\t";
	cout << "Days in Course: " << getcourseDays1() << ", " << getcourseDays2() << ", " << getcourseDays3() << "\t";
	cout << "Degree Program: " << degreeProgramStrings[(int)this->getDegree()] << endl;
}