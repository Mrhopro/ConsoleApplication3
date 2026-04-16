#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    long long A;
    cout << "Введіть натуральне число A: ";
    cin >> A;

    long long f1 = 0;
    long long f2 = 1;
    long long current = 0;
    int index = -1;

    if (A == 0) {
        index = 0;
    }
    else if (A == 1) {
        index = 1; 
    }
    else {
        for (int i = 2; current < A; i++) {
            current = f1 + f2;
            f1 = f2;
            f2 = current;

            if (current == A) {
                index = i;
                break;
            }
        }
    }

    if (index != -1) {
        cout << "Число є " << index << "-м числом Фібоначчі" << endl;
    }
    else {
        cout << "-1" << endl;
    }

    return 0;
}