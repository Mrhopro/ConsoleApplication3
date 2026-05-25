#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int arr[] = { 4, 4, 4, 2, 2, 7, 7, 7, 7, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);

    if (n == 0) {
        cout << "Масив порожній!\n";
        return 0;
    }

    int max_len = 1;
    int max_val = arr[0];
    int max_start = 0;

    int current_len = 1;
    int current_start = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) {
            current_len++;
        }
        else {
            if (current_len > max_len) {
                max_len = current_len;
                max_start = current_start;
                max_val = arr[current_start];
            }
            current_len = 1;
            current_start = i;
        }
    }

    if (current_len > max_len) {
        max_len = current_len;
        max_start = current_start;
        max_val = arr[current_start];
    }

    cout << "значення елемента, що повторюється: " << max_val << "\n";
    cout << "довжину послідовності: " << max_len << "\n";
    cout << "індекс її початку: " << max_start << "\n";

    return 0;
}