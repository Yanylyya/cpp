using namespace std;

class Car{
	public:
		string make;
		string model;
		int year;
		
	Car(string m, string mo, int y)
		: make(m), model(mo), year(y) {}
	
void start_engine(){
	cout << year << " " << make << " " << model << " engine started!" << endl;
}
	
};

int main(){	
	Car c1("Toyota", "Corolla", 2020);
	c1.start_engine();

return 0;
}
