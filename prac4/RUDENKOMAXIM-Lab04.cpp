#include <iostream>

using namespace std;

//Визначити, скільки елементів одномірного масиву А(9) менше, ніж число 6.
//int a[9]
//1, 3, 7, 4, 8, 9, 11, 8, 9
//a[i] < 6
//1,3,4
//count++
//3
int main() {
    int a[9];

    cout << "введіть масив з 9 чисел:\n";

    for(int i = 0; i < 9; i++) {
        cin >> a[i];
    }

    int count = 0;

    for(int i = 0; i < 9; i++) {
        if(a[i] < 6) {
            count++;
        }
    }
    cout << "масив з 9 чисел менше ніж число 6: " << count << endl;
    

    return 0;
}