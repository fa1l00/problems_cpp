#include <iostream>
using namespace std;

//Підрахувати суму всіх чисел натурального ряду від 9 до 89, кратних 3.

// 9,10,11..89 % 3 == 9, 12, 15..87

int main() {
    int min = 9;
    int max = 89;

    int three_rudenko = 0;
    bool ifcard = false;

    for(int i = min; i <= max; i++) { // 9-89
        if(i % 3 == 0) {
            three_rudenko += i;
            ifcard = true;
        }
    }
    if(ifcard) {
        cout << "result: " << three_rudenko << endl;
    }
    else {
        cout << "vasha suma ne kratna";
    }
    
}
