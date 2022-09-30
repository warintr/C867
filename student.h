#ifndef STUDENT
#define STUDENT
#include "degree.h"
#include <string>
#include <iostream>
using namespace std;

class Student {
	private:
		string studentID;
		string firstName;
		string lastName;
		string emailAddress;
		int age;
		int daysInCourse[3];
		DegreeProgram degreeProgram; //Requirement D1 - create the student class with variables

	public:
		string getSID() const;
		string getFN() const;
		string getLN() const;
		string getEmail()	const;
		int getStudAge() const;
		int getDIC1() const;
		int getDIC2() const;
		int getDIC3() const;
		DegreeProgram getDegree() const; //Requirement D2a - accessors

		void setSID(string SID);
		void setFN(string FN);
		void setLN(string LN);
		void setEmail(string Email);
		void setStudAge(int StudAge);
		void setDIC(int DIC1, int DIC2, int DIC3);
		void setDegree(DegreeProgram Degree); // Requirement D2b - mutators

		Student();
		Student(string SID, string FN, string LN, string Email, int StudAge, int DIC1, int DIC2, int DIC3, DegreeProgram Degree);
		//Requirement D2d - constructor using all input parameters

		void print() const; //Requirement D2e


};

#endif // !STUDENT

