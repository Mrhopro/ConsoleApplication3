#include <iostream>
#include <windows.h>

using namespace std;

int recursionfunc(int number) {
    if (number == 0) {
        return 0;
    }

	for (int i = 0; number > 0; i++) {
		number /= 10;
		if (number == 0) {
			return i + 1;
		}
	}
	return 1 + recursionfunc(number);
}

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

	int number;
	cout << "Enter a number: ";
	cin >> number;
	cout << "Number of digits: " <<  recursionfunc(number) << endl;

    return 0;
}