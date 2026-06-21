#include <iostream>

using namespace std;

class Rectangle{
	public:
		int lenght;
		int width;
		
	Rectangle() : lenght(1), width(1) {
		cout << "Default Rectangle created (1x1)." << endl;
	}
	
	Rectangle(int l, int w) : lenght(l), width(w) {
        cout << "Custom Rectangle created (" << lenght << "x" << width << ")." << endl;
    }
    
    int get_area() const{
		return lenght * width;
	}   
   
};

int main(){	
	Rectangle r1;
	cout << "R1 Area: " << r1.get_area() << endl;
	
	Rectangle r2(2, 3);
	cout << "R2 Area: " << r2.get_area();

return 0;
}

