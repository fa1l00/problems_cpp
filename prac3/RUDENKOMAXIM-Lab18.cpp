#include <iostream>
using namespace std;
// Обчислити середнє математичне всіх непарних натуральних чисел від 1 до 50.
// 1-50 = 1+3+5..+49
// result / na kilkist
int main() {
    int a = 1, b = 50;
    int count = 0;
    int sum = 0;

    for(int i = a; i <= b; i++) { // 1-50
        if(i % 2 != 0) { // i != 2 || 1,3...
            sum += i; // 1+3...
            count++; // s4itaem kilkist
        }
    }
    double rudenko_result = (double)sum / count; 
    cout << "result: " << rudenko_result << endl;
}