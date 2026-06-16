#include <iostream>

using namespace std;

int main()
{	
	int n;
	cout << "Podaj n: "; cin >> n;
	bool isPrime = true;
	
	if(n <= 1){
		isPrime = false;
	}else{
		for(int i = 2; i * i <= n; i++){
			if(n % i == 0){
				isPrime = false;
				break;
			}
		}
	}
	
	cout << (isPrime ? "Is a PRIME number." : "Is NOT a prime number.") ;
	
return 0;
}
