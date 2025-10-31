#include <iostream>
#include <cmath>

using namespace std;

// Для заданих речовинних чисел a, b, c визначити корені квадратного рівняння a⋅x² + b⋅x + c = 0, якщо вони є.
int main() {
    double a, b, c;
    cout << "Введіть коефіцієнти a, b, c: ";
    cin >> a >> b >> c;

    if (a == 0) {
        if (b == 0) {
            if (c == 0)
                cout << "Рівняння має безліч розв'язків\n";
            else
                cout << "Рівняння не має розв'язків\n";
        } else {
            double x = -c / b;
            cout << "Лінійне рівняння, корінь: x = " << x << "\n";
        }
    } else {
        double D = b*b - 4*a*c;  // дискримінант

        if (D > 0) {
            double x1 = (-b + sqrt(D)) / (2*a);
            double x2 = (-b - sqrt(D)) / (2*a);
            cout << "Два різні корені: x1 = " << x1 << ", x2 = " << x2 << "\n";
        } else if (D == 0) {
            double x = -b / (2*a);
            cout << "Один подвійний корінь: x = " << x << "\n";
        } else {
            cout << "Рівняння не має дійсних коренів\n";
        }
    }

    return 0;
}
