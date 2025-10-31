#include <iostream> // ввід/вивід
#include <cmath>    // мат. функції, тут для M_PI
#include <string>   // робота зі строками
using namespace std;

int main() {
    string RUDENKOMAXIM = "RUDENKO MAXIM"; // змінна з ім'ям студента
    cout << "Студент: " << RUDENKOMAXIM << endl; // 

    double r, h; 
    cout << "Введіть радіус основи r: "; // запит на введення радіуса
    cin >> r; // зчитування радіуса
    cout << "Введіть висоту h: ";
    cin >> h;

    double V = M_PI * pow(r, 2) * h; // обчислення об'єму 
    cout << "Об'єм циліндра = " << V << endl;

    return 0;
}
