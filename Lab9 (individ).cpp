#include <iostream>
#include <windows.h>

using namespace std;

int recursionfunc(int number) {
 if(number / 10 == 0) {
   return 1;
  }
	return 1 + recursionfunc(number / 10);
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