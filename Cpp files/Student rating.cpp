
#include <iostream>

using namespace std;
int main()
{
    int mark;
	cout << "Enter your mark: ";
	cin >> mark;

	if (mark == 12 || mark >= 10) {
	cout << "Perfectly\n";
	}
	else if (mark == 9 || mark >= 7) {
		cout << "Good\n";
	}
	else if (mark == 6 || mark >= 4) {
		cout << "Satisfactorily\n";
	}
	else if (mark <= 4) {
		cout << "unsatisfactorily\n";
	}

	return 0;
	
}
