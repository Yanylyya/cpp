#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{	
	const int cols = 2;
	const int rows = 2;
	int A[rows][cols], B[rows][cols], C[rows][cols];

	cout << "Enter elements for Matrix A (2x2):\n";
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			cout << "A[" << i << "][" << j << "]: ";
			cin >> A[i][j];
		} 
	}
	
	cout << "Enter elements for Matrix B(2x2):\n";
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			cout << "B[" << i << "][" << j << "]: ";
			cin >> B[i][j];
		}
	}
	
	cout << "\nResulting Matrix C (A + B):\n";
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			C[i][j] = A[i][j] + B[i][j];
			cout << C[i][j] << "\t";
		}
		cout << endl;
	}
	
return 0;
}
