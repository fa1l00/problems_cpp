#include <iostream>
#include <string>
using namespace std;

int main() {
    int number;
    cout << "Введіть тризначне число: ";
    cin >> number;

    int c = number % 10;        // остання цифра
    int b = (number / 10) % 10; // середня цифра
    int a = number / 100;       // перша цифра

    int reversed = c * 100 + b * 10 + a; // число у зворотному порядку

    string rudenkomaxim = "rudenko maxim"; // автор

    cout << "Число у зворотному порядку: " << reversed << endl;
    cout << "Автор програми: " << rudenkomaxim << endl;

    return 0;
}
