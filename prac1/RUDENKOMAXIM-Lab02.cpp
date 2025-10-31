#include <iostream> // ввід/вивід
#include <cmath>    // мат. функції

using namespace std;

int main() {
    cout << "Студент: RUDENKO MAXIM" << endl; // ім'я студента

    double x; 
    cout << "Введіть число x: ";
    cin >> x;

    double cube = pow(x, 3); // куб числа
    cout << "Куб числа " << x << " = " << cube << endl;

    double root = cbrt(cube); // куб. корінь
    cout << "Кубічний корінь з " << cube << " = " << root << endl;

    return 0;
}
