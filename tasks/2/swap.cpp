#include <iostream>
#include <cstdlib>

using namespace std;

void swap(int &a,int &b){
	int temp = a;
	a = b;
	b = temp;
}

int main(){	
	int x = 100;
	int y = 100;

	cout << "\n\tBefore swap: x = " << x << ", y = " << y;
	swap(x, y);
	cout << "\n\tAfter swap: x = " << x << ", y = " << y;
	
return 0;
}
