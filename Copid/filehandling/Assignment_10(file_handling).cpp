#include <iostream>
#include "FileOperations.h"
#include "FileOperations_impl.cpp"
#include "Student.h"
#include "Student_impl.cpp"
using namespace std;

int main() {
	FileOperations FileObj;
	int choice;
	do {
		cout << "\n\t<----- Student Database Operations ----->"
				"\n\t1. Add Data"
				"\n\t2. Display Data"
				"\n\t3. Modify Record"
				"\n\t4. Delete Record"
				"\n\t5. Exit" << endl;
		cout << "Enter next Choice: ";
		cin >> choice;
		switch(choice){
		case 1:
			FileObj.add();
			cout << "Written into file!" << endl;
			break;
		case 2:
			FileObj.display();
			break;
		case 3:
			FileObj.modify_record();
			break;
		case 4:
			FileObj.delete_record();
		}
	}while(choice!=5);
	cout << "\t >> Thank You !" << endl;
	return 0;
}
