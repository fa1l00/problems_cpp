#include <iostream>
using namespace std;

int reverseNumber(int n) {
    int rudenko_reversed = 0; 
    
    while (n != 0) {
        int digit = n % 10;     //Беремо останню цифру числа
        rudenko_reversed = rudenko_reversed * 10 + digit; // Додаємо цифру в кінець нового числа
        n /= 10;             // Відкидаємо останню цифру 
    }
    // Множення на 10 зсуває всі попередні цифри на один розряд вліво, щоб нова цифра могла стати останньою (праворуч).
    return rudenko_reversed; 
}

int main() {
    int num;
    cout << "Введіть ціле число: "; 
    cin >> num; // 

    int reversedNum = reverseNumber(num); 

    cout << "Зворотне число: " << reversedNum << endl;

    return 0;
}