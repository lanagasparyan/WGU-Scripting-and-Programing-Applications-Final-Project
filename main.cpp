#include <string>
#include <iostream>
#include <stdlib.h>
#include "student.h"
#include "roster.h"
#include "degree.h"

// Demonstrate the program’s required functionality by adding a main()
int main(int argc, char const *argv[])
{

    //Print out to the screen, via your application, the course title, the programming language used, your WGU student ID, and your name
    cout <<"-----------------------------------------------------"<< endl;
    cout <<"C867-Scripting $ Programming: Applications" << endl;
    cout <<"Language: C++ "<< endl;
    cout <<"Student ID: 008211193" << endl;
    cout <<"Name: Lana Gasoparyan"<< endl;
    cout <<"-----------------------------------------------------" << endl;
    
    cout << endl;
    cout << "Display all students: "<< endl;
    

    Roster r;
    r.add("A1,John,Smith,John1989@gm ail.com,20,30,35,42,SECURITY");
    r.add("A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK");
    r.add("A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE");
    r.add("A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY");
    r.add("A5,Lana,Gasparyan,lgaspa5@wgu.edu,34,50,58,40,SOFTWARE");
 
    
    
    r.printAll();
    r.printInvalidEmails();
    r.printAverageDaysInCourse("A1");
    r.printAverageDaysInCourse("A2");
    r.printAverageDaysInCourse("A3");
    r.printAverageDaysInCourse("A4");
    r.printAverageDaysInCourse("A5");
    r.printdegreeType(NETWORK);

    cout <<endl;
    cout<<"Removing A3:"<<endl;
    r.remove("A3");
    r.printAll();
    cout <<endl;
    cout<<"Removing A3 again:"<<endl;
    cout <<endl;
    r.remove("A3");
    cout <<endl;

    cout <<"Done."<<endl;
    

    
}
