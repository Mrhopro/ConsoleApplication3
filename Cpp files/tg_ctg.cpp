#include <iostream>
#include <iomanip>
#include <cmath>
#include "windows.h"

using namespace std;

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    double a, b, h;

    cout << "Введіть a: ";
    cin >> a;
    cout << "Введіть b: ";
    cin >> b;
    cout << "Введіть h: ";
    cin >> h;

    cout << setw(10) << "x" << setw(10) << "tg(x)" << setw(10) << "ctg(x)" << endl;

    for (double x = a; x <= b + 0.001; x += h) {

        double y1 = tan(x);
        double y2 = 1.0 / tan(x); 

        cout << setw(10) << fixed << setprecision(2) << x << setw(10) << fixed << setprecision(2) << y1 << setw(10) << fixed << setprecision(2) << y2 << endl;
    }

    return 0;
}