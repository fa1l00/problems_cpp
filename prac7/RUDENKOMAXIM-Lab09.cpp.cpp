#include <iostream>

using namespace std;

//rudenko_maxim_034
void func(
    long long total_seconds,
    long long *seconds,
    long long *minutes,
    long long *hours,
    long long *days,
    long long *Mounth,
    long long *years
);

int main() {
    long long input_seconds;
    cout << "vvedite seconds: "; cin >> input_seconds; // 120
    long long s = 0, mi = 0, h = 0, d = 0, m = 0, y = 0;
    func(input_seconds, &s, &mi, &h, &d, &m, &y);

    cout << "seconds: " << s << endl;
    cout << "minutes: " << mi << endl;
    cout << "hours: " << h << endl;
    cout << "days: " << d << endl;
    cout << "mounth: " << m << endl;
    cout << "years: " << y << endl;

    return 0;
}

void func(
    long long total_seconds,
    long long *seconds,
    long long *minutes,
    long long *hours,
    long long *days,
    long long *month,
    long long *years
) {
     //120
    long long current_total;
    *seconds = total_seconds % 60; // 120 % 60 = 0
    current_total = total_seconds / 60; // 120 / 60 = 2

    *minutes = current_total % 60; // 2 % 60 = 2 // Остача від ділення 2 на 60.
    current_total = current_total / 60; // повна кількість годин  // 0
    
    //години -> дні
    *hours = current_total % 24; // 0 % 60 = 0
    current_total = current_total / 24; // 0 / 24 = 0

    *years = current_total / 365;


    long long remaining_days_after_years = current_total % 365; 
    *month = remaining_days_after_years / 30; 
    *days = remaining_days_after_years % 30;

}