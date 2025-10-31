#include <iostream>
using namespace std;

// Функція для обчислення НСД двох чисел
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b; // Зберігаємо поточне значення b у тимчасовій змінній
        b = a % b;    // Обчислюємо залишок від ділення a на b і присвоюємо його b, наприклад 17 5, 5 2, 1
        a = temp;     // Присвоюємо a старе значення b (з temp)
    }
    return a;
}

int main() {
    int num1, num2;
    
    cout << "Введіть два числа: ";
    cin >> num1 >> num2;

    int rudenko_result = gcd(num1, num2);

    cout << "Найбільший спільний дільник: " << rudenko_result << endl;

    return 0;
}
