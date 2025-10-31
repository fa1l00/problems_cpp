#include <iostream>
#include <algorithm> // для min і max
using namespace std;
// У заданому діапазоні цілих чисел визначити останнє число, що ділиться на 3 без залишку.
int main() {
    int a,b;
    cout << "Vvedite: ";
    cin >> a >> b;

    int start = min(a,b); // 5 12 || 12 5 -> 5  
    int end = max(a,b); // 5 12 || 12 5 -> 12

    bool found = false;
    int last_rudenko = 0;

    for (int i = start; i <= end; i++ ) { // 5 12 || 12 5
        if (i % 3 == 0) {
            last_rudenko = i;
            found = true;
        }
    } 
    if(found) { 
        cout << "4islo: " << last_rudenko << endl;
    }
    else {
        cout << "nety" << endl;
    }

    return 0;
}
