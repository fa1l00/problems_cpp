#include <iostream>
using namespace std;

// Перевірка, чи є число простим
// 
int main() {
    
    int n;
    cout << "Vvedite 4islo: ";
    cin >> n;

    bool lab = true;

    if(n <= 1) {
        lab = false;
    }
    else {
        for(int i = 2; i * i <= n; i++) { 
            if(n % i == 0) {
                lab = false;
                break;
            }
        }
    }
    if(lab) {
        cout << n << " число є простим" << endl;
    }
    else {
        cout << n << " число не є простим" << endl;
    } 
    cout << "RudenkoMaxim";

    return 0;
}
