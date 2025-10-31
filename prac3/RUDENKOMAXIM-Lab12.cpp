#include <iostream>
using namespace std;

int main() {
    short n = -32768; // мінімальне значення short
    int rudenko_count = 0;

    while (true) {
        rudenko_count++;
        if (n == 32767) break; 
        n++; // переходимо до наступного значення   
    }

    cout << "Кількість значень типу short: " << rudenko_count << endl;

    return 0;
}
// вийшло що count спочатку все це рахує, if не спрацьовує бо -32768 != 32767, потім n++ і досягає 32767, каунт це все считає, count = 65536
// і ми робимо все по кроках поки while не спрацює break, коли n стане 32767, тоді цикл закінчується

