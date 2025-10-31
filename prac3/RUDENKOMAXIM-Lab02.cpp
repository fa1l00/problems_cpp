#include <iostream> 
using namespace std; // cin, cout
//rudenko_maxim Для заданого цілого числа визначити подвійний факторіал. Наприклад, 7!! = 1 * 3 * 5 * 7 -> 105.
int main() {

    int n;
    long long rudenko_doublefactorial = 1;

    cout << "Введіть подвійний факторіал: ";
    cin >> n;
    

    
    for (int i = n; i > 0; i -= 2 ) {
        rudenko_doublefactorial *= i;
    }

    cout << n << "!! = " << rudenko_doublefactorial << endl;

}