#include <iostream>
#include <vector>
#include <cmath>
#include <string>
using namespace std;

double distance(pair<double,double> a, pair<double,double> b) {
    return sqrt ((b.first - a.first)*(b.first - a.first) +
                (b.second - a.second)*(b.second - a.second)); 
} // функція для обчислення відстані між двома точками

int main() { 
    vector<pair<double,double>> p(4); // 4 вершини прямокутника

    cout << "Введіть координати 4-х вершин прямокутника (x y):\n"; 
    for(int i = 0; i < 4; i++) {
        cin >> p[i].first >> p[i].second; // зчитування координат
    }

    double a = distance(p[0], p[1]); 
    double b = distance(p[1], p[2]); // довжини сторін прямокутника
    
    double perimeter = 2*(a + b); // периметр прямокутника
    double area = a*b; // площа прямокутника

    cout << "Периметр: " << perimeter << endl;
    cout << "Площа: " << area << endl;

    string rudenko_maxim = "Руденко Максим"; // Ім'я студента
    cout << "Студент: " << rudenko_maxim << endl;
    return 0; 
}
