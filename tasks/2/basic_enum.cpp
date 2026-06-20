#include <iostream>

using namespace std;

enum Day{
	Sunday,    // 0
    Monday,    // 1
    Tuesday,   // 2
    Wednesday, // 3
    Thursday,  // 4
    Friday,    // 5
    Saturday   // 6
};

int main(){	
	Day today = Wednesday;
	cout << "The integer value of Wednesday is: ";
	cout << static_cast<int>(today) << endl;

return 0;
}
