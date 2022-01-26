#include <string>
#include <iostream>
#ifndef STUDENT_H
#define STUDENT_H
using namespace std;
class Student {
public:
	Student();

	void setName(string);
	string getName();
	//pre: there must be a student object created
	//set and get method for the name
	float calculateGPA();
	
	//calculates the gpa
	string getID();
	void setID(string newID);
	//pre: there must be a student object created
	//set and get methods for the students id
	void setClass(string className, string classGrade, string semester);
	//adds a class, parameters are the class name, the class grade, class semester.
	void getClasses();
	//pre: there must be a student object created and there must be at least one class added
	//gets all the classes that the student is enrolled in also prints out the grade and semester

	void getGrade(string letter);
	//the student must be enrolled in some classes with grades
	//prints out all the clases that have the parameter grade
private:
	int x = 0;
	string classesTaken[100];
	string classGrades[100];
	string semesterTaken[100];
	float GPA = -1;
	string studentID;
	string name;
};


#endif