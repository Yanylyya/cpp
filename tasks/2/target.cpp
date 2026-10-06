#include <iostream>
#include <vector>

using namespace std;

int main(){

    int dl;
    cout << "\n\tPodaj dlugosc liczb: "; cin >> dl;

    vector<int> arr(dl);
    
    for(int i = 0; i < dl; i++){
        cout << "\n\tPodaj liczbe " << i + 1 << " : ";
        cin >> arr[i];
    }

    int t;
    cout << "\n\tPodaj target: "; cin >> t;

    int fIn = -1;

    for(int i = 0; i < dl; i++){
        if(arr[i] == t){
            fIn = i;
            break;
        }
    }

    if(fIn != -1){
        cout << "El " << t << " found a index: " << fIn;
    } else {
        cout << "\nEl " << t << " was not found in the arrays!";
    }

    return 0;
}

