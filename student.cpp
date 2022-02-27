
 //use of function in student.h

#include <string>
#include <iostream>
#include <stdlib.h>
#include <vector>
#include <sstream>
#include "student.h"
#include "arrays.h"


    // Full constructor 
    Student::Student(string studentID, string firstName, string lastName,
        string emailAddress,int studentAge,int deadline1,int deadline2,int deadline3, string degreeProgram){
        this->studentID = studentID;  
        this->firstName = firstName;
        this->lastName = lastName;
        this->emailAddress = emailAddress;
        this->studentAge = studentAge;
        this->deadline1 = deadline1;    
        this->deadline2 = deadline2; 
        this->deadline3 = deadline3;

        if (degreeProgram == "SECURITY"){
            this->DegreeProgramType = SECURITY; 
        }
        else if (degreeProgram == "NETWORK"){
            this->DegreeProgramType = NETWORK; 
        }
        else if (degreeProgram == "SOFTWARE"){
            this->DegreeProgramType = SOFTWARE; 
        }
        else{
            cout << "Defaulting to Security" << endl;
            this->DegreeProgramType = SECURITY; 
        }
        
    }

    //Empty constructor
    Student::Student(){
        this->studentID = "";  
        this->firstName = "";
        this->lastName = "";
        this->emailAddress = "";
        this->studentAge = 0;
        this->deadline1 = 0;    
        this->deadline2 = 0; 
        this->deadline3 = 0; 
        this->DegreeProgramType = NETWORK;
    }
    
    // Parse each set of data identified in the “studentData Table.”
    Student::Student(string studentRow){
        this->parse(studentRow);
    }

    void Student::parse(string studentRow){
        List <string> parsedData ;

        stringstream  s_str(studentRow);// Using sstream class to build a constructor, create a string stream from the string(input)

        while(s_str.good()){ // good is a boolien, returns true if none of the stream's error state flags (eofbit, failbit and badbit) is set.

            string substr; 
            getline(s_str,substr,',');
            parsedData.add(substr);
        }

        this->studentID = parsedData.at(0);
        this->firstName = parsedData.at(1);
        this->lastName = parsedData.at(2);
        this->emailAddress = parsedData.at(3);
        int parsedD1;
        istringstream(parsedData.at(4)) >> parsedD1; // using stringstream sstream to convert intiger to string
        this->studentAge = parsedD1;
        int parsedD2;
        istringstream(parsedData.at(5)) >> parsedD2;
        this->deadline1 = parsedD2;   
        int parsedD3;
        istringstream(parsedData.at(6)) >> parsedD3;
        this->deadline2 = parsedD3; 
        int parsedD4;
        istringstream(parsedData.at(7)) >> parsedD4;
        this->deadline3 = parsedD4; 

        // Parsing DegreeProgram 

        if (parsedData.at(8) == "SECURITY"){
            this->DegreeProgramType = SECURITY; 
        }
        else if (parsedData.at(8) == "NETWORK"){
            this->DegreeProgramType = NETWORK; 
        }
        else if (parsedData.at(8) == "SOFTWARE"){
            this->DegreeProgramType = SOFTWARE; 
        }
        else{
            cout << "Defaulting to Security" << endl;
            this->DegreeProgramType = SECURITY; 
        }

       

    }


    //Create an accessor function (i.e., getter) for each instance variable 

    string Student::GetStudentID(){
        return this->studentID;
        }
    string Student::GetFirstName(){
        return this->firstName;
    }
    string Student::GetLastName(){
        return this->lastName;
    }
    string Student::GetEmailAddress(){
        return this->emailAddress;    
    }
    int Student::GetStudentAge(){
        return this->studentAge;
    }
    int Student::GetDeadline1(){
        return this->deadline1;
    }
    int Student::GetDeadline2(){
        return this->deadline2;
    }
    int Student::GetDeadline3(){
        return this->deadline3;
    }   
    DegreeProgram Student::GetDegreeProgram(){
        return this->DegreeProgramType;
    }
    //Create a mutator function (i.e., setter) for each instance variable


    void Student::SetStudentID(string studentID ){
        this->studentID = studentID; 
    }
    void Student::SetFirstName(string firstName ) {
        this->firstName = firstName;
    }
    void Student::SetLastName(string lastName ){
        this->lastName = lastName;
    }
    void Student::SetEmailAddress(string emailAddress){
        this->emailAddress = emailAddress;
    }
    void Student::SetStudentAge(int studentAge){
        this->studentAge = studentAge;
    }
    void Student::SetDeadline1(int deadline1){
        this->deadline1 = deadline1;  
    }
    void Student::SetDeadline2(int deadline2) {
        this->deadline2 = deadline2; 
    } 
    void Student::SetDeadline3(int deadline3) {
        this->deadline3 = deadline3; 
    } 


    //Create print() function to print specific student data

    void Student::Print(){

        cout << "\n"<< "**************************************************************************************************************************" << endl;
        //A1 [tab] First Name: John [tab] Last Name: Smith [tab] Age: 20 [tab]daysInCourse: {35, 40, 55} Degree Program: Security.
        cout << this->studentID <<"\t"<<"First Name: "<< this->firstName <<"\t"<< "Last Name: "<< this->lastName<<"\t"<< "Age: " <<this->studentAge <<"\t";
        cout  <<"daysInCourse: {"<<this->deadline1  <<", "<<this->deadline2 <<", "<<this->deadline3<<"} Degree Program: " <<DegreeProgramValues[DegreeProgramType]<<endl;
        cout << "**************************************************************************************************************************" ;
        cout << endl;

        
    }

    Student::~Student(){

    }
    void Student::PrintDegreeProgramType()
    {
        cout <<"Degree type: " << DegreeProgramValues[DegreeProgramType] << endl;
    }