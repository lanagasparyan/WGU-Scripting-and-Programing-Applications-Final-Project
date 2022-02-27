# Scripting and Programing Applications C867 - Final Project

Final Project for Western Governors University class "Scripting and Programming Applications" built using C++ programming language.

# How to compile and run
Go to terminal and run 
```
$ g++ -std=c++11 student.cpp roster.cpp main.cpp -o main
$ ./main
-----------------------------------------------------
C867-Scripting $ Programming: Applications
Language: C++ 
Student ID: 008211193
Name: Lana Gasoparyan
-----------------------------------------------------

Display all students: 

**************************************************************************************************************************
A1      First Name: John        Last Name: Smith        Age: 20 daysInCourse: {30, 35, 42} Degree Program: SECURITY
**************************************************************************************************************************

**************************************************************************************************************************
A2      First Name: Suzan       Last Name: Erickson     Age: 19 daysInCourse: {50, 30, 40} Degree Program: NETWORK
**************************************************************************************************************************

**************************************************************************************************************************
A3      First Name: Jack        Last Name: Napoli       Age: 19 daysInCourse: {20, 40, 33} Degree Program: SOFTWARE
**************************************************************************************************************************

**************************************************************************************************************************
A4      First Name: Erin        Last Name: Black        Age: 22 daysInCourse: {50, 58, 40} Degree Program: SECURITY
**************************************************************************************************************************

**************************************************************************************************************************
A5      First Name: Lana        Last Name: Gasparyan    Age: 34 daysInCourse: {50, 58, 40} Degree Program: SOFTWARE
**************************************************************************************************************************

Displaying invalid emails:

John1989@gm ail.com - is invalid. 
Erickson_1990@gmailcom - is invalid. 
The_lawyer99yahoo.com - is invalid. 

Student ID: A1 average days in course is:  35.667

Student ID: A2 average days in course is:  40.000

Student ID: A3 average days in course is:  31.000

Student ID: A4 average days in course is:  49.333

Student ID: A5 average days in course is:  49.333


Showing student in degree program: NETWORK

**************************************************************************************************************************
A2      First Name: Suzan       Last Name: Erickson     Age: 19 daysInCourse: {50, 30, 40} Degree Program: NETWORK
**************************************************************************************************************************

Removing A3:

**************************************************************************************************************************
A1      First Name: John        Last Name: Smith        Age: 20 daysInCourse: {30, 35, 42} Degree Program: SECURITY
**************************************************************************************************************************

**************************************************************************************************************************
A2      First Name: Suzan       Last Name: Erickson     Age: 19 daysInCourse: {50, 30, 40} Degree Program: NETWORK
**************************************************************************************************************************

**************************************************************************************************************************
A4      First Name: Erin        Last Name: Black        Age: 22 daysInCourse: {50, 58, 40} Degree Program: SECURITY
**************************************************************************************************************************

**************************************************************************************************************************
A5      First Name: Lana        Last Name: Gasparyan    Age: 34 daysInCourse: {50, 58, 40} Degree Program: SOFTWARE
**************************************************************************************************************************

Removing A3 again:

The student with the ID: A3 was not found.

Done.
```
# Basic info for header files

## arrays.h
`array.h` contains a template class called `List`, that implements basic functionalities similar to standard library `vector`.
Class `List` has array pointer to store any Class or Type. 
Example:

```c++
List <int> arr; //default max size = 10

List <int> arr(100); //max size of the list is 100


// Add new elements
arr.add(10);
arr.add(15);
arr.add(17);
arr.add(23);

// to access an element at positopn 
cout << arr.at(3) << endl;
// output: 23

// get size of list
cout << arr.size()<< endl;

for (int i = 0; i < arr.size(); ++ i){
    cout << arr.at(i) << endl;
}
/*
output:
 4
 10
 15
 17
 23
*/
// Remove an element 
arr.remove(2); // 2 is an index of the element to be removed
cout << arr.size()<< endl;
for (int i = 0; i < arr.size(); ++ i){
    cout << arr.at(i) << endl;
}
/*
output:
 3
 10
 15
 23
*/
```
## degree.h
In `degree.h` I defined an `enumerated` data type DegreeProgram for the degree programs containing the data type values `SECURITY`, `NETWORK`, and `SOFTWARE` with parallel `array` of `strings` with the same values as enumerations, to turn enums into output.

## student.h
Created `class` Student in the files `student.h` and `student.cpp`, which includes each of the following variables: (studentId, firstName, lastName, email, age, (deadline)*3, degreeProgram) with following functions:

1.  an `accessor` (i.e., getter) and a `mutator` (i.e., setter) for each data members, which allow external access and changes to any data member of the Student `class`,with `accessor` and `mutator` functions  in `student.cpp`.
     
2. full and empty(default) `constructor` using all of the input parameters provided in the Student table.

3. parse funnction to parse each set of data identified in the “studentData Table” using `sstream` function.

4. `print()` to print specific student data


## roster.h

`roster.h` containe a Roster Class and a pointer array managed by class `List` from `arrays.h`, `add` and `remove` and other funtions, used to add and remove Student called in `main.cpp`.


