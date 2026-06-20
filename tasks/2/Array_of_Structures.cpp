#include <iostream>

using namespace std;

struct Books{
	string title;
	string author;
	double price;
};

const int max_b = 3;

void read(Books &b){
	cout << "\nTitle: "; getline(cin, b.title);
	cout << "\nAuthor: "; getline(cin, b.author);
	cout << "\nPrice: "; cin >> b.price;
	
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

void print(const Books &b){
    cout << b.title << " by " << b.author << " ($" << b.price << ")" << endl;
}

int main(){	
	Books b[max_b];
		
	for(int i = 0; i < max_b; i++){
		cout << "\n\t\tEnter data for Book " << i + 1 << ": ";
		read(b[i]);
	}
	
	cout << "\n\t\tALL BOOKS INVENTORY";   
	for(int i = 0; i < max_b; i++){
		cout << "\nBook " << i + 1 << ": ";
		print(b[i]);
	}
	
return 0;
}
