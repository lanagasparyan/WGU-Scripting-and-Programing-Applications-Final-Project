
// Create the class Student  in the files student.h and student.cpp, which includes each of the following variables
#pragma once
#include <string>
#include <iostream>
#include <stdlib.h>
#include <vector>
#include "degree.h"

using namespace std;
//Create the class Studen - representing a student.
class Student {
    //Including data members - variables.
    private:
        string studentID;
        string firstName;
        string lastName;
        string emailAddress;
        int studentAge;
        int deadline1;
        int deadline2;
        int deadline3;

    public:
    //Creating constructors using all of the input parameters provided in the Student table.
        DegreeProgram DegreeProgramType;
        Student(string studentID, string firstName, string lastName,
        string emailAddress,int studentAge,int deadline1,int deadline2,int deadline3, string degreeProgram);
        Student(string studentRow); // instantiate data memebers using string parsing
	    Student();

        // destructor
        ~Student();
       
       //Creating a mutator (i.e., setter) for each instance variable - data members.
        void SetStudentID(string studentID);
        void SetFirstName(string firstName);
        void SetLastName(string lastName);
        void SetEmailAddress(string emailAddress);
        void SetStudentAge(int studentAge);
        void SetDeadline1(int deadline1);
        void SetDeadline2(int deadline2);
        void SetDeadline3(int deadline3);


        //Creating an accessor (i.e., getter) for each instance variable - data members.
        string GetStudentID();
        string GetFirstName();
        string GetLastName();
        string GetEmailAddress();
        int GetStudentAge();
        int GetDeadline1();
        int GetDeadline2();
        int GetDeadline3();
        virtual void Print();

        // constructor
        void parse(string studentRow);

        
        //Constructor, accessor and mutrator for DegreeProgram(imported from degree.h file)
        void PrintDegreeProgramType();
        void SetDegreeProgram(DegreeProgram );
        DegreeProgram GetDegreeProgram();
        

      
};
