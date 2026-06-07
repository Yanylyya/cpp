#include <iostream>
#include <cstdlib>
#include <vector>
#include <climits>

using namespace std;

int main()
{
	int n;
	int m = INT_MIN;
	cout << "Podaj dlugosc: "; cin >> n;
	vector<long long> v(n);
	
	for(int i = 0; i < n; i++){
		cin >> v[i];
		if(v[i] > m){
		m = v[i];
		}
	}
	cout << "\nMax: " << m;

	
return 0;
}
