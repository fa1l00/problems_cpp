#include <iostream>
using namespace std; // cin, cout

int main() {
    double a, b, c, rudenko_min; 
    cout << "Введіть три числа: ";
    cin >> a >> b >> c; 

    if (a <= b && a <= c)
       rudenko_min = a;

    else if (b <= c && c <= b)
       rudenko_min = b;
    else 
       rudenko_min = c;

    cout << "Мінімальне значення: " << rudenko_min; 


    return 0;
}