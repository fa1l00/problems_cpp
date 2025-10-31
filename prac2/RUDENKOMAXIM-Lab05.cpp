#include <iostream>
#include <algorithm>
using namespace std;
//Дано три числа k, m, n. Змінити значення змінних таким чином, щоб виконувалась умова k < m < n.

//k < m < n; zmenshogo do bilshogo

int main() {
    int k, m, n;
    cout << "Vvedit znachenja k, m, n: ";
    cin >> k >> m >> n;

    if(m < k) swap(m, k);
    if(n < k) swap(n, k);
    if(n < m) swap(n, m);

    cout << "\n" << k << "\n" << m << "\n" << n << "\n" << endl;

    return 0;
}