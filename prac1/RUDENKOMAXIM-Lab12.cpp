#include <iostream>
#include <cmath>  //  M_PI
using namespace std;

int main() {
    double radians;
    cout << "Введіть кут у радіанах: ";
    cin >> radians;

    double degrees = radians * 180 / M_PI; // переведення у градуси


    cout << radians << " радіан = " << degrees << " градусів" << endl;

    return 0;
}
