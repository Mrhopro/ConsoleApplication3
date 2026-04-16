#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int K;
    double balance;
    double sum = 0;

    cout << "Введіть кількість банківських рахунків (K): ";
    cin >> K;

    for (int i = 1; i <= K; i++) {
        cout << "Введіть баланс " << i << "-го рахунку: ";
        cin >> balance;

        if (balance > 0 && balance <= 100000) {
            sum += balance;
        }
    }
    cout << "Сума додатних балансів до 100 000 грн: " << sum << " грн" << endl;

    return 0;
}