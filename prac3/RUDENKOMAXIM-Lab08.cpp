#include <iostream>
using namespace std;
// //Визначити, чи є ціле 6 значне число «щасливим» квитком («щасливий квиток» – квиток, в якому сума першої половини чисел
//номера дорівнює сумі другої половини. Наприклад, 102300 –> 1+0+2=3+0+0.

int CollectivSum(int n) {
    int sum1 = 0; // сюда будемо все записувати, перші 3
    int sum2 = 0; // сюда останні 3
    
    int pervoe = n / 1000; // pervie 3 cifri
    int vtoroe = n % 1000; // last 3 cifri
    //102
    while(pervoe != 0) {
        int digit = pervoe % 10;
        sum1 += digit;
        pervoe /= 10;
    }
    //300
    while(vtoroe != 0) {
        int digit = vtoroe % 10;
        sum2 += digit;
        vtoroe /= 10;
    }
    
    if (sum1 == sum2) { // proveryaem 102,300
        return 1; // true
    }
    else {
        return 0; // false
    }
}

int main() {

    int rudenko;
    cout << "Введіть 6 значне число: ";
    cin >> rudenko;

    int full_result = CollectivSum(rudenko);

    if (full_result == 1) {
        cout << "щасливий квиток" << endl;
    }
    else {
         cout << "не щасливий квиток((" << endl;
    }

    return 0;
}