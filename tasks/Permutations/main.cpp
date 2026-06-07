#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int n;
	while(true){
	cout << "\n\tPodaj n: "; cin >> n;
	
	if(n==0){
		cout << 1 << endl;
	}
	
	else if(n <= 3){
	cout << "\n\t\tNO SOLUTION" << endl;
	}
	
	else {
		for(int i = 2; i <= n; i += 2){
		cout << "\t" << i << " " ;	
		}
		
		for(int i = 1; i <= n; i +=2){
		cout << "\t"  <<i << " "; 
		}
	}
		
	char wybor;
	do{
	cout << "\n\tCzy chcesz kontynuowac?(T/N)"; cin >> wybor;	
	if(wybor == 'N' || wybor == 'n') return 0;
	}while(wybor != 'T' && wybor != 't'); 	
	
}	
return 0;
}
