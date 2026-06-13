#include <iostream>
#include <cstdlib>

using namespace std;

long long factorial(int n){
	if(n == 0) return 1;
	
	return n * factorial(n - 1);
}

int main()
{	
	int n;
	cout << "Enter n: "; cin >> n;
	cout << n << "! is: " << factorial(n);

return 0;
}
