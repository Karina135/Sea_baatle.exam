#include <iostream>
using namespace std;

// Поле игры
const int n = 10;

int a[n][n];
int d[n][n];

int fieldZero() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            a[i][j] = 0;
            return a[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            d[i][j] = 0;
            return d[i][j];
        }
    }
    return 0;
}

// 1 поле
int fieldShowD() {
    cout << "Field with ships 1 " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
             cout << d[i][j] << " ";
    }
    cout << endl;
}
return 0;
}

//2 поле
int fieldShowD1() {
    cout << "Field with ships 2" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << d[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
