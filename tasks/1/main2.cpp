#include <iostream>
#include <cstdlib>

using namespace std;

void wysw(const int arr[], int size){
	for(int i = 0; i < size; i++){
		cout << arr[i] << (i < size - 1 ? ", " : "");
	}
	cout << endl;
}

int main()
{	
	int const n = 6;
	int sum = 0;
	int arr[n] = {10, 20, 30, 40, 50, 60};
	
	cout << "\n\tOriginal Array: "; 
	wysw(arr, n);
	
	
	cout << "\n\tSum:"; 
	for(int i = 0; i < n/2; i++){
		sum = arr[i] + arr[n - 1 - i];
		cout << "\n\t" << sum ;
	}

	
return 0;
}

