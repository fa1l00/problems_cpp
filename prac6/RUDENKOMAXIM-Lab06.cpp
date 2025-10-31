#include <iostream>

using namespace std;

// Знайти найменьший емент матриці та записати одиницю в той рядок і стовпець, на перехресті яких він міститься.
// Розмір мариці вводити з клавіатури, елементи, а також рядок та стовпець, розмістити в пам’яті динамічно.

//243
//456
//789
//2->1
int main() {
    int rows, cols;
    cout << "vvedite rows: "; 
    cin >> rows;
    cout << "vvedite cols: ";
    cin >> cols;

    int **matrix = new int *[rows];
    for(int i = 0; i < rows; i++) {
        matrix[i] = new int [cols];
    }

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << "[" << i << "][" << j << "] = ";
            cin >> matrix[i][j];
        }
    }

    cout << "\nmasiva a:\n";
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << "\nmax masiva a:\n";

    int minVal = matrix[0][0]; // maxVal = 1 (перший елемент матриці)
    int rowMax = 0, colMax = 0; // rowMax = 0, colMax = 0 (координати першого елемента)

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(matrix[i][j] < minVal) {
                minVal = matrix[i][j];
                rowMax = i; 
                colMax = j;
            }
        }
    }

    matrix[rowMax][colMax] = 1;

    // Виведення результату
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Звільнення пам'яті
    for(int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}
