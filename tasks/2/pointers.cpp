#include <iostream>

using namespace std;

int main(){	
	int value = 2;
	int *ptr;
	
	ptr = &value;
	
	cout << "Value of the variable 'value': " << value;
	cout << "\nMemory address of 'value' (&value): " << &value;
	cout << "\nAddress stored in pointer 'ptr': " << &ptr;
	cout << "\nValue pointed to by 'ptr' (*ptr): " << *ptr;
	
	*ptr = 99;
	cout << "New value of 'value' after *ptr = 99: " << *ptr;
	
return 0;
}
