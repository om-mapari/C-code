#include "Student.h"
#include <iostream>
using namespace std;

Student::Student() {
	// TODO Auto-generated constructor stub

}

Student::~Student() {
	// TODO Auto-generated destructor stub
}

// method to check validation of roll number
bool Student::roll_validation(int n){
	// if roll no is negative
	if (n<0){
		cout << "\n\t >> Invalid roll no, Enter again: ";
		return false;
	}
	// else return true
	return true;
}


// method to set student data
void Student::setData(){
	cout << "\n***Enter Student Details***" << endl;
	cout << "Enter Roll no: ";
	do{
		cin >> roll;
	}
	while(!roll_validation(roll));
	cout << "Enter Name: ";
	cin.ignore();
	gets(name);
	cout << "Enter Division: ";
	cin >> division;
	cout << "Enter Address: ";
	cin.ignore();
	gets(address);
}


// method to display Student Data
void Student::displayData(){
	cout << roll << "\t " << name << "\t" << division << "\t   " << address << endl;
}

// method to get roll number
int Student::getRoll_no(){
	return roll;
}