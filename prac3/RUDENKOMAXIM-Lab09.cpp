#include <iostream>
using namespace std;

int checkLucky(int n) {
    int sum1 = 0;
    int sum2 = 0;

    int last = n % 100;   // останні 2 цифри
    int first = n / 100;  // перші 2 цифри

    while (last != 0) {
        int digit = last % 10;
        sum1 += digit;
        last /= 10;
    }

    while (first != 0) {
        int digit = first % 10;
        sum2 += digit;
        first /= 10;
    }

    return (sum1 == sum2) ? 1 : 0;
}

int main() {
    int i = 0;
    int num;
    int luckyCount = 0; // кількість щасливих квитків

    do {
        cout << "Введіть 4-значне число #" << i + 1 << ": ";
        cin >> num;

        if (num < 1000 || num > 9999) {
            cout << "Це не 4-значне число!" << endl;
        } else {
            int rudenko_result = checkLucky(num); // результат перевірки квитка

            if (rudenko_result == 1) {
                cout << "Щасливий квиток!" << endl;
                luckyCount++; // збільшуємо кількість щасливих лквитків
            } else {
                cout << "Не щасливий квиток!" << endl;
            }

            i++; // рахуємо кількість введень
        }
    } while (i < 2);

    cout << "\nКількість щасливих квитків: " << luckyCount << endl;

    return 0;
}
