#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
    double x1, y1, z1, x2, y2, z2;

    cout << "Введіть координати точки M1 (x1 y1 z1): ";
    cin >> x1 >> y1 >> z1;
    cout << "Введіть координати точки M2 (x2 y2 z2): ";
    cin >> x2 >> y2 >> z2;

    // квадрат відстані між точками
    double distance_sq = pow(x2 - x1, 2) + pow(y2 - y1, 2) + pow(z2 - z1, 2);

    string rudenkomaxim = "rudenko maxim"; // автор

    cout << "Квадрат відстані між M1 і M2 = " << distance_sq << endl;
    cout << "Автор програми: " << rudenkomaxim << endl;

    return 0;
}
