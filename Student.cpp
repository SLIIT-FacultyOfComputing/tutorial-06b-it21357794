#include "Student.h"
#include <iostream>
using namespace std;
// Assign studentId and name
void Student::assignDetails(int s_id,const char* m) 
{
  stu_id = s_id;
	name = m;

}

// Display StudentId and Name
void Student::display() {
  cout << stu_id<<endl;
	cout << name<<endl;

}
