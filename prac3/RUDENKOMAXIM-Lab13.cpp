#include <iostream>
using namespace std;

// Визначити кількість цифр у заданому цілому числі.
int main() {
    int n;
    int rudenko_count = 0;
    cout << "Vvedit 4islo: ";
    cin >> n;

    if (n == 0) {
        rudenko_count = 1;
    }
    else {
        if (n < 0) n = n * -1; //-123 = -123 * -1 = 123
        while(n > 0) {
            n = n / 10;
            rudenko_count++;
        }
    }
    
    cout << "Vasha Kilkistib 4isel: " << rudenko_count << endl;

    return 0;
}
