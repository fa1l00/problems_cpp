#include <iostream>
#include <string>
using namespace std;

int main() {
    int octal;
    cout << "Введіть 4-значне восьмеричне число: ";
    cin >> octal;

    int decimal = 0;
    int temp = octal;
    int power = 1; // 8^0

    while (temp > 0) {
        int digit = temp % 10;       // отримуємо останню цифру
        decimal += digit * power;    // додаємо до десяткового числа
        power *= 8;                  // збільшуємо ступінь 8
        temp /= 10;                  // видаляємо останню цифру
    }

    string rudenkomaxim = "rudenko maxim";

    cout << "Десяткове число = " << decimal << endl;
    cout << "Автор програми: " << rudenkomaxim << endl;

    return 0;
}
