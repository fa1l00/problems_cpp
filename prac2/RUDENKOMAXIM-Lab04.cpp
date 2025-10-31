#include <iostream>
#include <cmath>
#include <iomanip> // для setprecision

using namespace std;

int main() {
    double num;
    cout << "Введіть число: ";
    cin >> num;

    double integerPart = floor(num);        // ціла частина
    double fractionalPart_rudenko = num - integerPart; // дробова частина

    if (integerPart == 0) {
        cout << "Ділення на 0 неможливе!\n";
    } else {
        double ratio = fractionalPart_rudenko / integerPart;
        cout << fixed << setprecision(2); // обрізаємо до 2 знаків після коми
        cout << "Дробова частина у " << ratio << " разів більше за цілу.\n";
    }

    return 0;
}
