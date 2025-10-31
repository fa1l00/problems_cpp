#include <iostream>
using namespace std;

int main() {
    double r1, r2, r3;
    cout << "Введіть опори трьох резисторів r1, r2, r3: ";
    cin >> r1 >> r2 >> r3;

    double R_total = r1 + r2 + r3; // загальний опір при послідовному з'єднанні


    cout << "Загальний опір резисторів R = " << R_total << endl;

    return 0;
}
