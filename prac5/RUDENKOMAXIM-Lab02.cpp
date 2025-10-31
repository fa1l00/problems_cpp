#include <bits/stdc++.h>
using namespace std;
// Дано двовимірний масив з N*N цілих чисел. Помножити кожен елемент рядка матриці на значення елементу головної діагоналі відповідного рядка.
// Повернути кількість рядків матриці.
//1 2 3 
//4 5 6 
//7 8 9

//diag = 1 5 9

//1 2 3 // 1*2..
//20 25 30 // 5*4..
//63 72 81 // 9*7..

//треба брати a[i][i], тому що a[j][j] буде брати кожний елемент рядка і множити його 

int main() {
    const int n = 3, m = 3;
    int a[n][m];
    int count = 0;
    
    cout << "input masiva A\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << "a" << "[" << i << "][" << j << "] = "; 
            cin >> a[i][j];
        }
    }
    cout << "\nmasiv A\n";
    for(int i = 0; i < n; i++) {
        count++; // считаємо рядки
        for(int j = 0; j < m; j++) {
            cout << a[i][j] << "\t";
        }
        cout << "\n";
    }
    

    cout << "\nresult\n";

    for(int i = 0; i < n; i++) {
        int diag = a[i][i]; //робим змінну в циклі i a[0][0], a[1][1], a[2][2]
        for(int j = 0; j < m; j++) { // стовпець
            a[i][j] *= diag; 
            cout << a[i][j] << "\t";
        }
        cout << "\n";
    }
    
    cout << "\nкількість рядків в матриці: " << count << endl;


    return 0;
}