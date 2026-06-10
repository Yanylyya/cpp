#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int n, reversed = 0;
	cout << "\n\tEnter number: "; cin >> n;
	
	int oriNumb = n;
	
	while(n > 0){
	int digit = n % 10;
	reversed = (reversed * 10) + digit;
	n /= 10;		
	}
	
	cout << "\n\tThe reverse of " << oriNumb << " is: " << reversed << endl;
	
return 0;
}
