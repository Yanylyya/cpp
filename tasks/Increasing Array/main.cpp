#include <iostream>
#include <cstdlib>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;


int main()
{
	long long moved = 0;
	int n;
	cout << "Podaj dlugosc: "; cin >> n;
	vector<long long> v(n);
	
	for(int i = 0; i < n; i++){
		cin >> v[i];
	}
		
	for(int i = 1; i < n; i++){
		if(v[i]<v[i-1]){
		moved += v[i-1]-v[i];
		v[i] = v[i-1];
		}
	}
	cout << moved;
	
return 0;
}
