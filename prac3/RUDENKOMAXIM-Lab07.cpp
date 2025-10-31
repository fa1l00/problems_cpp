#include <iostream>
using namespace std;

//Для заданого парного числа визначити подвійний факторіал. Наприклад, 6!! = 2 * 4* 6 –> 48.
//rudenko_maxim
int main() {
    int n;
    long long rudenko_doublefactorial = 2;

    cout << "Введіть подвійний факторіал: ";
    cin >> n;

    for (int i = n; i > 2; i -= 2) {
        rudenko_doublefactorial *= i;
    }
    cout << n << "!! = " << rudenko_doublefactorial << endl;
}