#include <iostream>
#include <string>
using namespace std;

int main() {
    int number;
    cout << "Введіть 4-значне число: ";
    cin >> number;

    int sum = 0;
    int temp = number;

    sum += temp % 10;   // остання цифра
    temp /= 10;
    sum += temp % 10;   // третя цифра
    temp /= 10;
    sum += temp % 10;   // друга цифра
    temp /= 10;
    sum += temp % 10;   // перша цифра

    string rudenkomaxim = "rudenko maxim"; // автор

    cout << "Сума цифр числа " << number << " = " << sum << endl;
    cout << "Автор програми: " << rudenkomaxim << endl;

    return 0;
}
