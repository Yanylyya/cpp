#include <iostream>

using namespace std;

int main(){	
	int arr[3] = {10, 20, 30};
	int *ptr = arr;

	cout << "Value: " << *ptr << " (arr[0]";
	cout << "\nAdress: " << ptr << endl;
	
	ptr = ptr + 1;
	cout << "\n\tAfter: ";
	cout << "\nValue: " << *ptr << " (arr[1])";
	cout << "\nAdress: " << ptr << endl;
	
	ptr = ptr + 1;
	cout << "\n\tAfter: ";
	cout << "\nValue: " << *ptr << " (arr[2])";
	cout << "\nAdress: " << ptr << endl;
	
	cout << "\nAddress jump size(bytes): " << sizeof(int) << endl;

return 0;
}
