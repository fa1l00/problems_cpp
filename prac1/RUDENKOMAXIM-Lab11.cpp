#include <iostream>
#include <string>
using namespace std;

int main() {
    double a;
    cout << "Введіть довжину сторони квадрата a: ";
    cin >> a;

    double P = 4 * a;       // периметр
    double S = a * a;       // площа

    string rudenkomaxim = "rudenko maxim"; // автор

    cout << "Периметр квадрата P = " << P << endl;
    cout << "Площа квадрата S = " << S << endl;
    cout << "Автор програми: " << rudenkomaxim << endl;

    return 0;
}
