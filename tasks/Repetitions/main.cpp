#include <iostream>
#include <cstdlib>
#include <string>
#include <algorithm>

using namespace std;


int main()
{
	while(true){
		string t;
		int count = 1;
		int best = 1;
		bool correct = true;
		
		cout << "Podaj DNA: "; cin >> t;
			for(int i = 0; i < (int)t.size();i++){
			t[i] = toupper(t[i]);
			}
		
			for(int i = 0; i < (int)t.size(); i++){
				if(t[i] != 'A' && t[i] != 'C' && t[i] != 'G' && t[i] != 'T'){
					correct = false;
					break;
				}
			}
		if(!correct){
				cout << "\nNiepoprawne DNA!\n";
				continue;
		}
		
			
	for(int i = 1; i < (int)t.size(); i++){
		if(t[i]==t[i-1]) count++;
		else count = 1;
			
			
		best = max(best, count);
	}
	cout << best << endl;
	
		
	char n;
	do{
	cout << "\n\tCzy chcesz kontynuowac?(T/N)"; cin >> n;
	if(n=='N'|| n=='n') return 0;
	}while(n!='T' && n!='t');
	
}

	
return 0;
}
