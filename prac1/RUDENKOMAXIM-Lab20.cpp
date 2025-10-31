#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
    double a, b;
    cout << "Введіть катети трикутника a і b: ";
    cin >> a >> b;

    double c = sqrt(a * a + b * b); // гіпотенуза

    string rudenkomaxim = "rudenko maxim";

    cout << "Гіпотенуза трикутника c = " << c << endl;
    cout << "Автор програми: " << rudenkomaxim << endl;

    return 0;
}
