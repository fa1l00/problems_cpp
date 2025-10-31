#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double r;
    char command_rudenko;

    cout << "Введіть радіус r: ";
    cin >> r;

    cout << "Введіть команду (l - довжина кола, s - площа кола, v - об'єм кулі): ";
    cin >> command_rudenko;

    double result = 0; //результаt

    switch (command_rudenko) {
        case 'l': // довжина кола
            result = 2 * M_PI * r;
            cout << "Довжина кола: " << result << "\n";
            break;
        case 's': // площа кола
            result = M_PI * r * r;
            cout << "Площа кола: " << result << "\n";
            break;
        case 'v': // об'єм кулі
            result = (4.0 / 3.0) * M_PI * r * r * r;
            cout << "Об'єм кулі: " << result << "\n";
            break;
        default:
            cout << "Невірна команда! Використайте l, s або v.\n";
            break;
    }

    return 0;
}
