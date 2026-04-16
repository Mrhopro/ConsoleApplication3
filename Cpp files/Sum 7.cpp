#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int count = 0;
    cout << "Сума цифр 7 без повторів:" << endl;
    for (int n = 1000; n <= 9999; n++) {

        int d1 = n / 1000;
        int d2 = (n / 100) % 10;
        int d3 = (n / 10) % 10;
        int d4 = n % 10;

        if (d1 + d2 + d3 + d4 == 7) {

            if (d1 != d2 && d1 != d3 && d1 != d4 &&
                d2 != d3 && d2 != d4 && d3 != d4) {

                cout << n << " " ;
                count++;
            }
        }
    }

    cout << "\nКількість таких чисел: " << count << endl;

    return 0;
}