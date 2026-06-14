#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{	
	string str;
	cout << "Enter word: ";
	getline(cin, str);
	
	int i = 0;
	int j = 0;
	
	for(char ch : str){
		ch = tolower(ch);
		
		if(isalpha(ch)){
			if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
				i++;
			}else{
				j++;}
		}
	}
	
	cout << "Vowel Count: " << i << endl;
    cout << "Consonant Count: " << j << endl;
	
return 0;
}
