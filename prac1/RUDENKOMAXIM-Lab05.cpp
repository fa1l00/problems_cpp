#include <iostream>
#include <cmath> // 
#include <string>
using namespace std;

int main() {
    double v0, a, t;

    // ввід користувача
    cout << "Введіть початкову швидкість v0 (м/с): ";
    cin >> v0;
    cout << "Введіть прискорення a (м/с^2): ";
    cin >> a;
    cout << "Введіть час t (с): ";
    cin >> t;

    // визначення пройденої відстані
    double s = v0 * t + 0.5 * a * pow(t, 2);

    // вивід результату
    cout << "Пройдене відстань s = " << s << " метрів" << endl;
    
    string rudenko_maxim = "Руденко Максим"; 
    cout << "Студент: " << rudenko_maxim << endl;
    return 0;
}
