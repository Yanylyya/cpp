#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	long long n;
	bool seen[10] = {false};
	bool unique = true;
	
	cout << "\n\tEnter number: "; cin >> n;
	
	while(n > 0){
		int digit = n % 10;
		if(seen[digit] == true) {
			unique = false; 
			break;
		}
		
		seen[digit] = true;
		n /= 10;
	}
	
	if(unique)
		cout << "YES";
	else
		cout << "NO";
		
return 0;
}
