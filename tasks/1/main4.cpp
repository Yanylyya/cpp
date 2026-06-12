#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{	
	vector<int> arr;
	string input;
	
	while(true){
		cout << "\n\tEnter \"i\" for stop: ";
		cin >> input;
		
		if(input == "i") break;
		
		int number = stoi(input);
		arr.push_back(number);
	}
	
	cout << "\n\tThe even numbers in the array are: ";
	
	for(int x : arr){
		if(x % 2 == 0){
			cout << x << " ";
		}
	}
	
return 0;
}


