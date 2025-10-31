#include <iostream>
#include <string>
using namespace std;

int main() {
    double inches, cm;

    cout << "Введіть значення в дюймах: ";
    cin >> inches;
    cout << "Введіть значення в сантиметрах: ";
    cin >> cm;

    double cm_from_inches = inches * 2.54;  // дюймы -> см
    double inches_from_cm = cm / 2.54;      // см -> дюймы

    string rudenkomaxim = "rudenko maxim";  // имя автора

    cout << inches << " дюймів = " << cm_from_inches << " см" << endl;
    cout << cm << " см = " << inches_from_cm << " дюймів" << endl;
    cout << "Автор програми: " << rudenkomaxim << endl;

    return 0;
}
