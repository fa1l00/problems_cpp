#include <bits/stdc++.h>
using namespace std;
// Дано двовимірний масив з N*N речовинних чисел. Визначити, на скільки сума елементів,
// що знаходяться нижче головної діагоналі, більше (менше) суми елементів головної діагоналі.
// 1 2 3
// 4 5 6
// 7 8 9

// 1+5+6
// 4+7+8
//[1][0]
//[2][0]
//[2][1]

int main()
{
    int n;
    cout << "vvedite N\n";
    cin >> n; // 3

    double a[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }

    cout << "masiv a\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << "\n";
    }
    double diag_1 = 0, diag_2 = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)            // [0]==[0], [1]==[1], [2]==[2]
                diag_1 += a[i][j]; // 1+5+9
            else if (i > j)        // [1]>[0], [2]>[0], [2]>[1]
                diag_2 += a[i][j]; // 4+7+8
        }
    }

    cout << "\nСума головної діагоналі = " << diag_1 << endl;
    cout << "Сума нижче головної діагоналі = " << diag_2 << endl;

    double result = diag_2 - diag_1;
    cout << "\nРізниця (нижче - діагональ) = " << result << endl;

    if (result > 0)
        cout << "сума елементів нижче діагоналі більша на " << result << endl;
    else if (result < 0)
        cout << "Сума головної діагоналі більша на " << fabs(result) << endl;
    else
        cout << "Суми рівні.\n";

    return 0;
}
