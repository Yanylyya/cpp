#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{	
	while(true){
		int n;
		bool f = true;
		
		cout << "\n\tEnter n: "; cin >> n;
		if(n < = 0){
			cout << "\n\tInvalid size!\n";
			continue;
		}
		
		int arr[n];
		for(int i = 0; i < n; i++){
			cout << "\n\tN " << i + 1 << ": ";
			cin >> arr[i]; 
		}
		
		cout << "\n\tOriginal: ";
		for(int i = 0; i < n; i++){
			cout << arr[i] << (i < n - 1 ? ", " : "");
		}
		
		for(int i = 0; i < n/2; i++){
			if(arr[i] != arr[n - 1 - i]){
				f = false;
				break;
			}
		}
		
		cout << "\n\n\tIs it palindrome? ";
		cout << (f ? "YES" : "NO");
		
		char op;
		do{
			cout << "\n\n\tDo you want to continue?(Y/N): "; cin >> op;
			if(op == 'N' || op == 'n') return 0;
		}while(op != 'Y' && op != 'y');
	}
	
return 0;
}
