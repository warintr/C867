#include <iostream>
#include <string>
using namespace std;

#include "student.h"

void Student::setSID(string SID) {
	studentID = SID;
}

void Student::setFN(string FN) {
	firstName = FN;
}

void Student::setLN(string LN) {
	lastName = LN;
}

void Student::setEmail(string Email) {
	emailAddress = Email;
}

void Student::setStudAge(int StudAge) {
	age = StudAge;
}

void Student::setDIC(int DIC1, int DIC2, int DIC3) {
	daysInCourse[0] = DIC1;
	daysInCourse[1] = DIC2;
	daysInCourse[2] = DIC3;
}

void Student::setDegree(DegreeProgram Degree) {
	degreeProgram = Degree;
}
Student::Student(){};

Student::Student(string SID, string FN, string LN, string Email, int StudAge, int DIC1, int DIC2, int DIC3, DegreeProgram Degree)
{
	this->studentID = SID;
	this->firstName = FN;
	this->lastName = LN;
	this->emailAddress = Email;
	this->age = StudAge;
	this->daysInCourse[0] = DIC1;
	this->daysInCourse[1] = DIC2;
	this->daysInCourse[2] = DIC3;
	this->degreeProgram = Degree;
}
string Student::getSID() const {
	return studentID;
}

string Student::getFN() const {
	return firstName;
}

string Student::getLN() const {
	return lastName;
}

string Student::getEmail() const {
	return emailAddress;
}

int Student::getStudAge() const {
	return age;
}

int Student::getDIC1() const {
	return daysInCourse[0];
}

int Student::getDIC2() const {
	return daysInCourse[1];
}

int Student::getDIC3() const {
	return daysInCourse[2];
}

DegreeProgram Student::getDegree() const {
	return degreeProgram;
}


void Student::print() const {
	cout << "Student ID: " << getSID() << "\t";
	cout << "First Name: " << getFN() << "\t";
	cout << "Last Name: " << getLN() << "\t";
	cout << "Email Address: " << getEmail() << "\t";
	cout << "Age: " << getStudAge() << "\t";
	cout << "Days in Course: " << getDIC1() << ", " << getDIC2() << ", " << getDIC3() << "\t";
	cout << "Degree Program: " << degreeProgramStrings[(int)this->getDegree()] << endl;
}