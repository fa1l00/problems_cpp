#include <iostream>
using namespace std;

//Знайти суму елементів матриці, що мають задану різницю індексів i-j=k.
//Число k може бути і негативним. Розмір мариці та її елементи вводити з клавіатури і розмістити в пам’яті динамічно.
//Також, у динамічній пам’яті зберегти ті елементи матриці, що мають задану різницю індексів i-j=k.
//123
//456
//789 priklad
int main() {
    int cols, rows;
    cout << "vvedit rows: ";
    cin >> rows;
    cout << "vvedit cols: ";
    cin >> cols;

    int **matrix = new int*[rows];
    for(int i = 0; i < rows; i++) {
        matrix[i] = new int[cols];
    } //matrix[rows][cols] visual

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << "[" << i << "][" << j << "] = ";
            cin >> matrix[i][j];
        }
    }

    cout << "\nmasiv cols,rows:\n";

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " "; 
        }
        cout << endl;
    }

    int k;
    cout << "\nvvedit k (i - j = k): ";
    cin >> k;

    // рахуємо кількість елементів, що задовольняють умову
    int count = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i - j == k) // 1 5 9
                count++;
        }
    }

    int *selected = new int[count]; // selected[maximum 3] (0)
                                    //фіксируємо наший максимум за допомогою дин. масиву 
    int idx = 0;
    int sum = 0;

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(i - j == k) {
                selected[idx++] = matrix[i][j]; //1,5,9 (починається з 0 індекса і збільшується
                                                // при кожному доданому елементі, поки не дійдемо до count)
                sum += matrix[i][j]; // 15
            }
        }
    }

    cout << "i - j = " << k << ":\n";
    for(int i = 0; i < count; i++) {
        cout << selected[i] << " ";
    }
    cout << "\n suma = " << sum << endl;


    delete[] selected;
    for(int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;


    return 0;
}

