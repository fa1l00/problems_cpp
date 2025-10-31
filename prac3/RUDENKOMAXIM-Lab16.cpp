#include <iostream>
#include <cmath>
using namespace std;

// Обчислити середнє геометричне елементів натурального ряду від 1 дo 10
// g = 10✓1*2..*10 =3628800= 4,53

int main() {
    int n = 10;
    double sum_log = 0;

    for (int i = 1; i <= n; i++) {
        sum_log += log(i);
    } 

    double avg = exp(sum_log / n);

    cout << "cереднє геометричне від 1 до 10: " << avg << endl;

}