#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	long long n;
	int count = 0;
	cout << "\n\tEnter number: "; cin >> n;
	
	long long orgN  = n;
	
	if(n==0){
		count = 1;
	}else{
	
		while(n > 0){
			n /= 10;
			count++;	
		}
	}
	
	cout << "\n\tGiven integer: " << orgN
	<< "\n\tThe number of digits in " << orgN << " is: " << count;
	
return 0;
}
