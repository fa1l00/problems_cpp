#include <iostream>
#include <cmath>
#include <string>
using namespace std;

double distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
    double x1, y1, x2, y2, x3, y3;
    cout << "Введіть координати вершин трикутника (x y):\n";
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    double AB = distance(x1, y1, x2, y2); // сторона AB
    double BC = distance(x2, y2, x3, y3); // сторона BC
    double CA = distance(x3, y3, x1, y1); // сторона CA

    double perimeter = AB + BC + CA;       // периметр
    double p = perimeter / 2;
    double area = sqrt(p * (p - AB) * (p - BC) * (p - CA)); // площа через Герона

    string rudenkomaxim = "rudenko maxim"; // автор

    cout << "Периметр трикутника P = " << perimeter << endl;
    cout << "Площа трикутника S = " << area << endl;
    cout << "Автор програми: " << rudenkomaxim << endl;

    return 0;
}
