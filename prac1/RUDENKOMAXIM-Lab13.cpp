#include <iostream>
#include <string>
using namespace std;

int main() {
    double C, F;

    cout << "Введіть температуру у градусах Цельсія: ";
    cin >> C;
    cout << "Введіть температуру у градусах Фаренгейта: ";
    cin >> F;

    double F_from_C = C * 9.0 / 5.0 + 32;       // Цельсій -> Фаренгейт
    double C_from_F = (F - 32) * 5.0 / 9.0;     // Фаренгейт -> Цельсій

    string rudenkomaxim = "rudenko maxim"; // автор

    cout << C << "C = " << F_from_C << "F" << endl; 
    cout << F << "F = " << C_from_F << "C" << endl;
    cout << "Автор програми: " << rudenkomaxim << endl;

    return 0;
}
