#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

double calculateArea(double r);

double calculateArea(double l, double w);

double calculateArea(int side);

double calcTringleArea(double base, double height);

double calcCircumference(double r);

double getPositiveN(string name);

int main()
{	
	while(true){
		char choice;
		cout << "\n\t\t1.Area of Circle"
			 << "\n\t\t2.Area of Rectangle"
			 << "\n\t\t3.Area of Square"
			 << "\n\t\t4.Area of Triangle"
			 <<	"\n\t\t5.Circumference"
			 << "\n\t\t0.Exit";
		cout << "\n\n\tYour choice: ";
		cin >> choice;
		
		switch(choice){
			case '1':{
				double r = getPositiveN("radius");
				double area1 = calculateArea(r);
				
				cout << "\n\tArea of Circle (Radius " << r << ") = " << area1 << endl;
			break;}
			
			case '2':{
				double l = getPositiveN("length");
				double w = getPositiveN("width");
				double area2 = calculateArea(l, w);
				
				cout << "\n\tArea of Rectangle (" << l << " x " << w << ") = " << area2 << endl;
			break;}
			
			case '3':{
				int s = getPositiveN("side");
				
				cout << "\n\tArea of Square: " << calculateArea(s) << endl;
			break;}
			
			case '4':{
				double b = getPositiveN("base");
				double h = getPositiveN("height");
				
				cout << "\n\tArea of Triangle: " << calcTringleArea(b, h) << endl;
			break;}
			
			
			case '5':{
				double r = getPositiveN("radius");
				
				cout << "\n\tCircumference: " << calcCircumference(r) << endl;
			break;}
			
			case '0':{
			cout << "\n\t\t\tBye :): "; return 0; }
			
			default:
				cout << "\n\t\tInvalid choice!\n"; break;
				
		}
	
	char i;
	do{
	cout << "\n\tDo you want to continue?(Y/N): "; cin >> i;
	if(i == 'N' || i == 'n') return 0;
	}while(i != 'Y' && i != 'y');
}
	
return 0;
}

double calculateArea(double r){
	return 3.14 * r * r;
}

double calculateArea(double l, double w){
	return l * w;
}

double calculateArea(int side){
	return side * side;
}

double calcTringleArea(double base, double height){
	return (base * height) / 2;
}

double calcCircumference(double r){
	return 2 * 3.14 * r;
}

double getPositiveN(string name){
	double value;
	
	do{
		cout << "\n\tEnter " << name << ": "; cin >> value;
		
		if(value <= 0) cout << "\n\t\tInvalid number!\n";
	
	}while(value <= 0);
	
	return value;
}


