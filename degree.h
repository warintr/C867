#ifndef DEGREE
#define DEGREE

#include <string>
#include <iostream>

using namespace std;

enum DegreeProgram //Requirement C - enumerated data type
{
	SECURITY,
	NETWORK,
	SOFTWARE

};
static const string degreeProgramStrings[] = { "SECURITY", "NETWORK", "SOFTWARE" };

#endif
