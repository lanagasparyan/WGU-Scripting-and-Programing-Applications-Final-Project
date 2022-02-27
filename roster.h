    #pragma once
    #include <string>
    #include <iostream>
    #include <vector>
    #include "student.h"
    #include "arrays.h"

    using namespace std;
    
// Create a Roster
class Roster
{
    
    List <Student> classRosterArray;

    public:
        
        // Define the following functions:
        void add (string studentID, string fisrtName, string lastName,string emailAddress,int studentAge, int deadline1,int deadline2, int deadline3,string degreeProgram);
        void add (string studentInfo);
        void remove(string studentID);
        void printAll();
        void printAverageDaysInCourse(string studentID);
        void printInvalidEmails();
        void printdegreeType( DegreeProgram degreeProgram);
        
        

};

