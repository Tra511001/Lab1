#include "Student.h"

Student::Student() {
	name = "";
	GPA = 0;
	studentID = "";
} //CONSTRUCTOR

//NAME
void Student::setName(string name_) {
	name = name_;
}
string Student::getName() {

	return name;
}
//GPA
float Student::calculateGPA() {
	cout << endl << name << " current GPA is: ";
	float x = 0;
	float count = 0;
	for (int i = 0; i < 100; i++) {
		if (classGrades[i] != "") {
			if (classGrades[i] == "A") {
				x = x + 4;
				count++;
			}
			else if (classGrades[i] == "B") {
				x = x + 3;
				count++;
			}
			else if (classGrades[i] == "C") {
				x = x + 2;
				count++;
			}
			else if (classGrades[i] == "D") {
				x = x + 1;
				count++;
			}
			else if (classGrades[i] == "F") {
				count++;
			}
		}
	}
	if (count > 0 || count < 0) {
		return static_cast<float>(GPA = x / count);
	}
	else
		cout << "no class grades added!";
	return -1;
}
//ID
string Student::getID() {
	return studentID;
}
void Student::setID(string newID) {
	studentID = newID;
}
//CLASS
void Student::setClass(string className, string classGrade, string semester) {
	if (x != 100 && x < 100) {
		classesTaken[x] = className;
		classGrades[x] = classGrade;
		semesterTaken[x] = semester;
		x++;
	}
}
void Student::getClasses() {
	cout << "Classes " << name << " has taken are: "<< endl;
	for (int i = 0; i < 100;i++) {
		if (classesTaken[i]=="") {
			break;
		}
		cout << "\t\t" << classesTaken[i] << endl <<
			"Current grade   " <<classGrades[i]<< endl<<
			"Semester taken  " << semesterTaken[i] << endl <<endl;
	}
	cout << endl;
}
//GRADES
void Student::getGrade(string letter) {
	string counter[100];
	cout << endl<<"Classes that have a grade of " << letter << " - ";
	for (int i = 0; i < 100; i++) {
		if (letter == "A") {
			if (classGrades[i] == "A") {
				cout << classesTaken[i] << "";
			}
		}
		if (letter == "B") {
			if (classGrades[i] == "B") {
			cout << classesTaken[i] << " ";
			}
		}
		if (letter == "C") {
			if (classGrades[i] == "C") {
				cout << classesTaken[i] << " ";
			}
		}
		if (letter == "D") {
			if (classGrades[i] == "D") {
				cout << classesTaken[i] << " ";
			}
		}
		if (letter == "F") {
			if (classGrades[i] == "F") {
				cout << classesTaken[i] << " ";
			}
		}
	}
}