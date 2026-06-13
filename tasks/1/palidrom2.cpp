#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{	
	string str;
	cout << "Enter word: ";
	getline(cin, str);
	bool isP = true;
	
	int length = str.length();
	int i = 0;
	int j = length - 1;
	
	while(i<j){
		if(str[i]!=str[j]){
			isP = false;
			break;
		}
	i++;
	j--;
	}
	
	cout << "\n'" << str << (isP ? "' IS a palidrome." : "' is NOT a palidrome.");

return 0;
}
