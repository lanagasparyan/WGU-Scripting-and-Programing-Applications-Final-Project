#pragma once
#include <iostream>
using namespace std;
//Define an enumerated data type DegreeProgram for the degree programs containing the data type values 

enum DegreeProgram {SECURITY, NETWORK, SOFTWARE};

//Parallel array of strings with the same values as enumerations, to turn enums into output

const std::string DegreeProgramValues[]= {"SECURITY", "NETWORK", "SOFTWARE"};
