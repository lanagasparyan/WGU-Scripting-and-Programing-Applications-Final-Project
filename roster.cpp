#include <string>
#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include "student.h"
#include "roster.h"
#include "degree.h"
#include <regex>
using namespace std;


// The add function sets the instance variables from part D1 and updates the roster.

void Roster::add (string studentID, string fisrtName, string lastName,string emailAddress,int studentAge, int deadline1,int deadline2, int deadline3, string degreeProgram ){
    classRosterArray.add(Student(studentID, fisrtName, lastName, emailAddress,studentAge,deadline1, deadline2, deadline3,degreeProgram)); 

}

void Roster::add (string studentInfo){
    classRosterArray.add(Student(studentInfo));
}

// The remove function removes students from the roster by student ID. If the student ID does not exist, the function prints an error message indicating that the student was not found
void Roster::remove(string studentID){
    bool found = false;
    for(int i = 0; i < classRosterArray.size(); i++ ){
        string sID = classRosterArray.at(i).GetStudentID();
        if(sID==studentID){
            found = true;
            classRosterArray.remove(i);
        }
    }
    if (found == false){
        cout << "The student with the ID: " << studentID << " was not found." << endl;
    }
}

//The printAll() function loops through all the students in classRosterArray and call the print() function for each student.
void Roster::printAll(){
    for(int i = 0; i < classRosterArray.size(); i++ ){
        classRosterArray.at(i).Print();
    }

}
// The printAverageDaysInCourse function correctly prints a student’s average number of days in the three courses. The student is identified by the studentID parameter.
void Roster::printAverageDaysInCourse(string studentID){
    for(int i = 0; i < classRosterArray.size(); i++ ){
        string sID = classRosterArray.at(i).GetStudentID();
        if(sID == studentID){
            double days1 = classRosterArray.at(i).GetDeadline1();
            double days2 = classRosterArray.at(i).GetDeadline2();
            double days3 = classRosterArray.at(i).GetDeadline3();
            
            float aveDays = ((float)days1 + (float)days2 + (float)days3) / 3.0;
            cout << "Student ID: "<< studentID  << fixed << setprecision(3) << " average days in course is:  " << aveDays << endl;
        }

    }
    cout <<endl;
}

// The printInvalidEmails function verifies student email addresses and displays all invalid email addresses to the user.
void Roster::printInvalidEmails(){
    // regex taken from some discussion on stackoverflow
    // https://stackoverflow.com/a/742588
    const regex email_regex("^[^@\\s]+@[^@\\s\\.]+\\.[^@\\.\\s]+$");
    cout <<endl;
    cout << "Displaying invalid emails:"<<endl;
    cout <<endl;

    for (int i = 0; i < classRosterArray.size(); i++){
        string sEmail = classRosterArray.at(i).GetEmailAddress();
        bool match = regex_match(sEmail, email_regex);
        if (!match){

            cout  << sEmail  << " - is invalid. " << endl;

        }
    }
    cout <<endl;
}


//  The printdegreeType that prints out student information for a degree program specified by an enumerated type
void Roster::printdegreeType(DegreeProgram degreeProgram){
    cout << endl;
    for(int i = 0; i < classRosterArray.size(); ++i){
        if(classRosterArray.at(i).GetDegreeProgram()== degreeProgram){
            cout << "Showing student in degree program: "<< DegreeProgramValues[degreeProgram] <<endl;
            classRosterArray.at(i).Print();
        }
    }

    
}




