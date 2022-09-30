#ifndef STUDENT
#define STUDENT
#include "degree.h"
#include <string>
#include <iostream>
using namespace std;

class Student {
	//Requirement D1 - create the student class with variables
	private:
		string studentID;
		string firstName;
		string lastName;
		string emailAddress;
		int age;
		int daysInCourse[3];
		DegreeProgram degreeProgram; 
	
	public:
		//Requirement D2a - accessors
		string getstudID() const;
		string getFName() const;
		string getLName() const;
		string getEmail()	const;
		int getStudAge() const;
		int getcourseDays1() const;
		int getcourseDays2() const;
		int getcourseDays3() const;
		DegreeProgram getDegree() const; 

		// Requirement D2b - mutators
		void setstudID(string studID);
		void setFName(string FName);
		void setLName(string LName);
		void setEmail(string Email);
		void setStudAge(int StudAge);
		void setcourseDays(int courseDays1, int courseDays2, int courseDays3);
		void setDegree(DegreeProgram Degree); 

		//Requirement D2d - constructor using all input parameters
		Student();
		Student(string studID, string FName, string LName, string Email, int StudAge, int courseDays1, int courseDays2, int courseDays3, DegreeProgram Degree);
		
		//Requirement D2e
		void print() const; 


};

#endif // !STUDENT

