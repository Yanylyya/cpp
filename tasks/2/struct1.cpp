#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

struct Student{
	string name;
	int rollNumber;
	double marks;
};

void readSt(Student &s){
	cout << "\n\tEnter student name: "; 
	getline(cin, s.name);
	
	cout << "\n\tEnter roll number: "; cin >> s.rollNumber;
	cout << "\n\tEnter marks: "; cin >> s.marks;
}

void printSt(const Student &s){
	cout << "\n\tName: " << s.name;
	cout << "\n\tRoll number: " << s.rollNumber;
	cout << "\n\tMakrs: " << s.marks;
}

int main(){	
	Student s1;
	
	readSt(s1);
	printSt(s1);
	
return 0;
}
