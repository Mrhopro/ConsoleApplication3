#include <iostream>


using namespace std;

int main()
{
    double price, money;
    cout << "Enter stock price\n";
    cin >> price;
	cout << "Enter your profit\n";
	cin >> money;

    if (price <= 0) {
        cout << "Price must be greater than zero\n";
        return 1;
	}
    double Number_o_s = money / (price * 0.75);

	cout << "You buy : " << Number_o_s << " stocks\n";
}