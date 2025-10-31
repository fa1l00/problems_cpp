#include <iostream>
using namespace std;
// Визначити, чи є серед цифр заданого трьохзначного числа однакові цифри

int main() {
    int n;
    cout << "введіть тризначне число: ";
    cin >> n;

    int a = n / 100; // 1,23
    int b = (n / 10) % 10; // 123/10//12,3%10=2
    int c = n % 10; // 3

    if(a == b || a == c || b == c) {
        cout << "є однакові числа" << endl;
    }
    else {
        cout << "немає однакових чисел" << endl;
    }

    return 0; // 
}