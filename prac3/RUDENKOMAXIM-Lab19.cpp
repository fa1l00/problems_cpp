#include <iostream>
#include <cmath>
using namespace std;
// Знайти середнє геометричне всіх непарних чисел від 1 до 29.
//1,3,5..29
//
int main() {
    int n = 29;
    double sum_log = 0;
    int count = 0;
    for(int i = 1; i <= n; i++) {
        if(i % 2 != 0) {
            sum_log += log(i);
            count++;
        }
    }
    double avg_rudenko = exp(sum_log / count);

    cout << "result: " << avg_rudenko << endl;
}