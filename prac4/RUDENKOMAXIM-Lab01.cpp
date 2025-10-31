#include <iostream>
#include <conio.h>
using namespace std;

// Заданий одномірний масив A(10). Знайти найменший елемент у масиві.
// int a[10]
// min = a[0]
// 9, 3
// 3 < 9
// 3
int main() {
    int a[10];
    int min;

    cout << "введіть масив з 10 чисел:\n";

    for(int i = 0; i < 10; i++) {
        cin >> a[i];
    }
    min = a[0];

    for(int i = 1; i < 10; i++) {
        if(a[i] < min)
        min = a[i]; 
    }

    cout << "мінімальне число масиву: " << min << endl;

    

    return 0;
}
