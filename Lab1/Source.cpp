#include "Student.h"
#include <iomanip>
#include <string>
#include <iostream>
//Lab1
// Nikola Trajanovski
//Create a student class that will store important information about a student. As a part of 
//this lab, a client file needs to be created to test the class by displaying to the screen all
//the attributesand display all classes that match a user requested grade.

int main(){
	Student student1;
	student1.setName("John");

	student1.setClass("Math", "B", "1st and 2nd");
	student1.setClass("Geography", "C", "1st");
	student1.setClass("Physics", "D", "1st");
	student1.setClass("P.E.", "B", "2nd");

	student1.getClasses();
	cout << student1.calculateGPA();
	cout << endl;
	student1.getGrade("C");
	cout << endl;
	return 0;
}



