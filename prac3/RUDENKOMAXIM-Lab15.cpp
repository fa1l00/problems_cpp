#include <iostream>
using namespace std;

// Знайти середнє математичне елементів натурального ряду від 1 до 100.
//1+2+3..+100 = 5050
//5050/100 = 50.5

int main() {
    
    int b = 100;
    float sum = 0;
    for (int i = 0; i <= b; i++ ) {
        sum += i;
    }
    float result_rudenko = sum / 100;
    cout << "result: " << result_rudenko << endl;
}