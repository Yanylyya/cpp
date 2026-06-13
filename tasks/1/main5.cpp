#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{	
	int arr[] = {10, 20, 30, 40};
	int size = sizeof(arr)/sizeof(arr[0]);
	
	cout << "\n\tArray BEFORE swap: ";
	for(int i = 0; i < size; i++){
		cout << arr[i] << (i < size - 1 ? ", " : "") ;
	}
	
	int temp = arr[0];
	arr[0]=arr[size - 1];
	arr[size - 1] = temp;
	
	cout << "\n\tArray AFTER swap: ";
	for(int i = 0; i < size; i++){
		cout << arr[i] << (i < size - 1 ? ", " : "") ;
	}
	
	
return 0;
}
