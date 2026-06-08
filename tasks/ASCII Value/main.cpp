#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    char ch;

    cout << "Enter a single character: "<< std::endl;
    cin >> ch;

    // Cast the char to an int to print its ASCII value
    int asciiValue = (int)ch;

    cout << "The ASCII value of '" << ch << "' is: " << asciiValue << endl;

return 0;
}
