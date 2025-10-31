#include <iostream>
#include <string>
using namespace std;

int main() {
    double uah, rate_usd, rate_dm;
    cout << "Введіть суму у гривнях: ";
    cin >> uah;
    cout << "Введіть курс долара: ";
    cin >> rate_usd;
    cout << "Введіть курс німецької марки: ";
    cin >> rate_dm;

    double usd = uah / rate_usd; // гривні -> долари
    double dm = uah / rate_dm;   // гривні -> німецькі марки

    string rudenkomaxim = "rudenko maxim"; // автор

    cout << uah << " грн = " << usd << " $ " << endl;
    cout << uah << " грн = " << dm << " DM" << endl;
    cout << "Автор програми: " << rudenkomaxim << endl;

    return 0;
}
