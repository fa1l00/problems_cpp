#include <iostream>
using namespace std;
//Заданий одномірний масив А(10). Знайти добуток a*2a*3a*…*10a.

int main() {

    long long a[10];
    long long product = 1;

    cout << "введіть масив з 10 чисел а:'\n";

    for(int i = 0; i < 10; i++) {
        cin >> a[i]; // 0 - 9
        product *= (i + 1) * a[i]; //*= це накопичувач// 1* 1..10 * 0..9
    }

    cout << "добуток a*2a*3a*…*10a: " << product << endl;

    return 0;
}