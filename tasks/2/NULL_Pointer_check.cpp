#include <iostream>
#include <cstdlib>

using namespace std;

int main(){	
	int *safe_ptr = nullptr;
  
	if(safe_ptr == nullptr){
		cout << "Pointed is null, cannot be derefence" << endl;
}
			
	int valid_data = 77;
	safe_ptr = &valid_data;
	
	if(safe_ptr != nullptr){
		cout << "Pointer is now valid. Dereferenced value: " << *safe_ptr << endl;
		
}

return 0;
}

