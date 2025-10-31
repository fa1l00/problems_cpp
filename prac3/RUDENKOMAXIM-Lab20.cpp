#include <iostream>
using namespace std;
//Обчислити середнє математичне всіх парних чисел від 1до 100.
//2+4..+100
//result / kilkist
int main() {
    int a = 1;
    int b = 100;
    int count = 0;
    double result1 = 0;
    
    bool dire = false;
    
    for(int i = a; i <= b; i++) { // 1-100
        if(i % 2 == 0 && i % 3 != 0) {
            result1 += i;
            count++;
            dire = true;
        }
    }
    
    double result2 = result1 / count;

    if(dire) {
        cout << "середнє математичне всіх парних чисел від 1до 100: " << result2 << endl;
    }
    
    else {
        cout << "error";
    }
    
    return 0;
}