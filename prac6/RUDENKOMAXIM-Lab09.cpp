#include <iostream>
using namespace std;

//Обчислити суму елементів кожного стовпця матриці, розташованих над головною діагоналлю. 
//Розмір матриці вводити з клавіатури, елементи, а також результат, розмістити в пам’яті динамічно.

//primer 3x3
//123
//456
//789

int main() {
    int rows, cols;
    cout << "vvedit rows: ";
    cin >> rows;
    cout << "vvedit cols: ";
    cin >> cols;

    //din masiv
    int **matrix = new int *[rows];
    for(int i = 0; i < rows; i++) {
        matrix[i] = new int[cols];
    }
    
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << "[" << i << "][" << j << "] = ";
            cin >> matrix[i][j];
        }
    }

    cout << "\nmasiv rows,cols:\n";

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << "\n";
    }
    int diag = 0;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(j > i) // [0] < [1], [0] < [2], [1] < [2]
            diag += matrix[i][j]; // 2+3+6 
        }
    }
    cout << "otvet: " << diag;

    //delete din.masiv
    for(int i = 0; i < rows; i++) {
        delete[] matrix[i];
        }
    delete[] matrix; 
    



    return 0;
}