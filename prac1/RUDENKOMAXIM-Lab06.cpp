#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
    double r;
    cout << "Введіть радіус r: ";
    cin >> r;

    const double pi = 3.1415926535; // число Пі
    double C = 2 * pi * r;           // длина окружности
    double S = pi * r * r;           // площадь круга
    double V = (4.0 / 3.0) * pi * pow(r, 3); // объём шара

    string rudenkomaxim = "rudenko maxim"; // имя автора

    cout << "Довжина окружності C = " << C << endl;
    cout << "Площа кола S = " << S << endl;
    cout << "Об'єм кулі V = " << V << endl;
    cout << "Автор програми: " << rudenkomaxim << endl;

    return 0;
}
