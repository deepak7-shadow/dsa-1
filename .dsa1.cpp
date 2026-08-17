#include <iostream>
using namespace std;

int main() {
    int arr[100] = {10, 20, 30, 40, 50};
    int n = 5;

    int position, value;

    cout << "Enter position: ";
    cin >> position;

    cout << "Enter value: ";
    cin >> value;

    // Shift elements to the right
    for (int i = n; i >= position; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new value
    arr[position - 1] = value;
    n++;

    cout << "Array after insertion: ";

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}