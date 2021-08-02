#include "FileOperations.h"
#include <iostream>
#include "Student.h"
using namespace std;

FileOperations::FileOperations() {
	// TODO Auto-generated constructor stub

}

FileOperations::~FileOperations() {
	// TODO Auto-generated destructor stub
}


// to add data into the file
void FileOperations::add(){
	int n;
	file.open("binary.dat", ios::out| ios::binary| ios::app);
	// taking input for no of students to add
	cout << "Enter no of Students to add: ";
	cin >> n;
	// for given number of students
	for (int i=0; i<n; i++){
		// setting data to the student object
		S.setData();
		// writing the object into the file
		file.write((char*)&S, sizeof(S));
	}
	file.close();
}


// method to read and display from the file
void FileOperations::display(){
	file.open("binary.dat", ios::in| ios::binary);
	// if file does not exist
	if (!file){
		cout << "\n\t>>File Not found!" << endl;
		exit(0);
	}
	else{
		cout << "\nRoll \t Name \t Division \t Address"
				"\n-----------------------------------------" << endl;
		// reading from the file into the Student object S
		file.read((char*)&S, sizeof(S));
		// while end of file is not reached
		while(!file.eof()){
			// displaying the data
			S.displayData();
			file.read((char*)&S, sizeof(S));
		}
	}
	file.close();
}


// method to delete record
void FileOperations::delete_record(){
	int search_roll;
	cout << "Enter Roll no : ";
	cin >> search_roll;
	Student tempStud;
	ofstream tempFile;
	file.open("binary.dat", ios::in| ios::binary);
	tempFile.open("new.dat", ios::out|ios::binary);
	if(!file){
		cout << "\n\t>>File Not found!" << endl;
		exit(0);
	}
	else{
		file.read((char*)&S, sizeof(S));
		while(!file.eof()){
			if (search_roll != S.getRoll_no()) {
				tempFile.write((char*)&S, sizeof(S));
			}
			file.read((char*)&S, sizeof(S));
		}
		cout << "\n\t>> Database is been Modified !" << endl;
		tempFile.close();
		file.close();
		remove("binary.dat");
		rename("new.dat", "binary.dat");
	}
}


void FileOperations::modify_record(){
	int search_roll;
	cout << "Enter Roll no to be Modified : ";
	cin >> search_roll;
	Student tempStud;
	ofstream tempFile;
	file.open("binary.dat", ios::in| ios::binary);
	tempFile.open("new.dat", ios::out|ios::binary);
	if(!file){
		cout << "\n\t>>File Not found!" << endl;
		exit(0);
	}
	else{
		file.read((char*)&S, sizeof(S));
		while(!file.eof()){
			if (search_roll == S.getRoll_no()){
				cout << "*** Enter new Record! *** " << endl;
				tempStud.setData();
				tempFile.write((char*)&tempStud, sizeof(tempStud));
				file.read((char*)&S, sizeof(S));
				cout << "\n\t>> Database is been Modified !" << endl;
			}
			else {
				tempFile.write((char*)&S, sizeof(S));
				file.read((char*)&S, sizeof(S));
			}
		}
		tempFile.close();
		file.close();
		remove("binary.dat");
		rename("new.dat", "binary.dat");
	}
}
