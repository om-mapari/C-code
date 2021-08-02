#ifndef STUDENT_H_
#define STUDENT_H_

class Student {
private:
	char name[20];
	int roll;
	int division;
	char address[20];
	bool roll_validation(int roll);
public:
	Student();
	~Student();
	void setData();	// setting student data
	void displayData();	// displaying student data
	int getRoll_no();	// to get roll no
};

#endif /* STUDENT_H_ */