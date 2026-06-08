#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int n;
	cout << "Enter the Factorial: "; cin >> n;
	
    long long factorial = 1;
    
    if(n < 0){
			cout << "Factorial is not defined for negative numbers." << endl;
	}else if(n==0){
			cout << "Factorial of 0 is 1." << endl;
	}else{
		for(int i = n; i>=1; --i){
				factorial *= i;
		}
		cout << "Factorial of " << n << " is: " << factorial << endl;
	}
	
	
return 0;
}
