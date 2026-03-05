#include <iostream>

using namespace std;
int main()
{
	int speed;
	int max_speed;
	cout << "Enter your speed\n";
	cin >> speed;
	cout << "Enter max speed";
	cin >> max_speed;
	if (speed > max_speed) {
		int penalty = (speed - max_speed) * 5;
		cout << "You are speeding. Your penalty is " << penalty << " dollars\n";
	}