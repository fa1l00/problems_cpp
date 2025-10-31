#include <iostream>
using namespace std;

// Визначити позицію цифри з мінімальним значенням у трьохзначному числі.
// Нумерація починається з 1. Наприклад, х=413 -> y=позиція [2]=1.
// х=413 -> y=позиція [2]=1.

int main() {
    int x;
    cout << "введіть тризначне число: ";
    cin >> x;
    
    int a = x / 100; // 1
    int b = (x / 10) % 10; // 2
    int c = x % 10; // 3
    
    int min = a;
    int position = 1;

    if(b < min) {
        min = b;
        int position = 2;
    }
    if(c < min) {
        min = c;
        position = 3;
    }

    cout << "мінімальна цифра: " << min << " позиція: " << position << endl;

    return 0;
}