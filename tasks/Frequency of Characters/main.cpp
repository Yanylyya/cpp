#include <iostream>
#include <cstdlib>
#include <string>
#include <map>
#include <cctype>

using namespace std;

int main()
{	
	string str = "Programming in CPP";
	map<char, int> char_counts;
	
	cout << "Analyzing string: " << str;
	
	for(char c : str){
		if(isalpha(c)){
			char_counts[tolower(c)]++;
		}	
	}
	
	cout << "Character Frequencies: " << endl;
	for(const auto& pair : char_counts){
		cout << "'" << pair.first << "': " << pair.second << endl;
	}
	
return 0;
}
