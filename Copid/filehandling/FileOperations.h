#ifndef FILEOPERATIONS_H_
#define FILEOPERATIONS_H_

#include <fstream>
#include <iostream>
#include "Student.h"
using namespace std;

class FileOperations {
private:
	Student S;	// student object
	fstream file;	// fstream object
public:
	FileOperations();
	~FileOperations();
	void add();		// to add data into file
	void display();	// to read and display from file
	void delete_record();	// to delete a particular record
	void modify_record();	// to modify a particular record
};

#endif /* FILEOPERATIONS_H_ */
