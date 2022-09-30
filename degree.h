#ifndef DEGREE
#define DEGREE

#include <string>
#include <iostream>

using namespace std;

//Requirement C - enumerated data type
enum DegreeProgram 
{
	SECURITY,
	NETWORK,
	SOFTWARE

};
static const string degreeProgramStrings[] = { "SECURITY", "NETWORK", "SOFTWARE" };

#endif
