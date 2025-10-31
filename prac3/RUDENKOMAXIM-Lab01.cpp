#include <iostream> 
using namespace std; // cin, cout
//rudenko_maxim
int main() {
    int n;
    cout << "Введіть факторіал: ";
    cin >> n;
    long long rudenko_factorial = 1;

    for (int i = 1; i <= n; i++) {
        rudenko_factorial *= i; // f=f*i
    }

    long long result = rudenko_factorial * 10; // r=f*10

    cout << "10 * " << n << "! = " << result << endl; // 10*n=r
}
