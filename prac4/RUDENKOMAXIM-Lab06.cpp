#include <iostream>
#include <cmath>
using namespace std;

//Заданий одномірний масив А(8). Знайти суму a^1+2a^2+3a^3+…+8a^8.
//a[8]
//1,2,3,4,5,6,7,8(stepen_count)
//sum = 1,8,81... (stepen_count * a[i]^stepen_count)
//summa += sum
//cout << summa

int main() {
    long long a[8];
    cout << "введіть масив з 8 a чисел:\n";

    for(int i = 0; i < 8; i++) {
        cin >> a[i];
    }

    long long summa = 0;

    for(int i = 0; i < 8; i++) { // i = 0..7
        long long stepen_count = i + 1; //  1..8
        long long sum = stepen_count * pow(a[i], stepen_count); // 1..8 * 1^1..8^2 = 1*1^1..8*8^8
        summa += sum; 
    }
    
    cout << "сумма a^1+2a^2+3a^3+…+8a^8: " << summa << endl;

    return 0;
}
