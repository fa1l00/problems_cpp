#include <iostream>
#include <string>
using namespace std;

int main() {
    double a;
    cout << "Введіть довжину ребра куба a: ";
    cin >> a;

    double V = a * a * a;   // об'єм куба
    double S = 4 * a * a;   // площа бічної поверхні

    string rudenkomaxim = "rudenko maxim"; // автор

    cout << "Об'єм куба V = " << V << endl;
    cout << "Площа бічної поверхні S = " << S << endl;
    cout << "Автор програми: " << rudenkomaxim << endl;

    return 0;
}
