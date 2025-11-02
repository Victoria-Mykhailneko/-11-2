#include <iostream>
#include <windows.h>
#include <cmath>  // для sqrt() і atan()

using namespace std;

// Функція для обчислення трьох результатів
void calculate(double p, double t, double& k, double& x, double& y) {
    k = sqrt(p + t * t);
    x = p + k;
    y = atan(x * x);
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double p, t;
    cout << "Введіть значення p: ";
    cin >> p;
    cout << "Введіть значення t: ";
    cin >> t;

    double k, x, y;
    calculate(p, t, k, x, y);

    cout << "\nРезультати обчислень:" << endl;
    cout << "k = " << k << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    return 0;
}
