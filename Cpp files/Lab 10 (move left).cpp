#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int arr[] = { 10, 20, 30, 40, 50 };
    int arrsize = sizeof(arr) / sizeof(arr[0]);

    cout << "Оригінальний масив: ";
    for (int i = 0; i < arrsize; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    if (arrsize > 0) {
        int first_element = arr[0];

        for (int i = 0; i < arrsize - 1; i++) {
            arr[i] = arr[i + 1];
        }

        arr[arrsize - 1] = first_element;
    }

    cout << "Масив після зсуву:   ";
    for (int i = 0; i < arrsize; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}