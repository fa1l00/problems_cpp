#include <bits/stdc++.h>

using namespace std;

// Підвести число n у ступінь m.

int main() {
    int n,m;
    cout << "Vvedite 4islo: ";
    cin >> n;
    cout << "Vvedite stupinb: ";
    cin >> m;

    int sum = 1; // Починаємо з 1 бо будь-яке число в 0-й ступені 1

    
    for(int i = 1; i <= m; i++ ) {
        sum *= n; // каждый раз множим на n
    }
    cout << n << "^" << m << " =  " << sum << endl;
 
    return 0;
    
}