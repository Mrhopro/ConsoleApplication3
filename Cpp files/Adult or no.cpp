#include <iostream>

using namespace std;
int main()
{	
	int age;
	cout << "Enter your age\n";
	cin >> age;
	if (age >= 18) {
		cout << "You are an adult\n";
	}else{
		cout << "You are a minor\n";
	}
}