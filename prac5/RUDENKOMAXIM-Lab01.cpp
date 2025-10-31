#include <bits/stdc++.h> //swap,ios

using namespace std;

//Дано двовимірний масив з N*N цілих чисел. Транспонувати його.
//1 2 3    1 4 7             4
//4 5 6 -> 2 5 8 -> 4 5 6 -> 5 // кожну пару елементів(i,j) i (j,i)
//7 8 9    3 6 9             6 // поміняти місцями
// головна діагональ 1 5 9

int main() {
    
    const int n = 3, m = 3;
    int a[n][m];

    cout << "input masiva A\n";
    for(int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++ ) {
            cout << "a" << "[" << i << "][" << j << "] = ";
            cin >> a[i][j]; 
        } 
    }
    for (int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << a[i][j] << "\t"; //пробіли
        }
        cout << "\n"; // перехід на новий рядок 
    }
    for(int i = 0; i < n; i++) {
        for(int j = i; j < m; j++) { // проходимо по всіх стовпцях рядка
            swap(a[i][j], a[j][i]); //свап
        }
    }
    cout << "\ntransportovaniy masiv\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << a[i][j] << "\t";
        }
        cout << "\n";
    }

    return 0;
}
