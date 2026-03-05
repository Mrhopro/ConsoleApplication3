#include <iostream>

using namespace std;

int main() {

    int year;
    cout << "Enter year: ";
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << year << " - this is a leap year\n";
    }
    else {
        cout << year << " - this not is a leap year\n";
    }

    return 0;
}