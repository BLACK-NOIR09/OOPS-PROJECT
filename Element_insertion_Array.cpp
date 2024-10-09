#include <iostream>
using namespace std;

void insertElement(int arr[], int& n, int element, int position) {
    for (int i = n; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = element;
    n++;
}

int main() {
    int arr[100] = {1, 2, 3, 4, 5}; // Initial array
    int n = 5;
    int element, position;

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Enter the element to insert: ";
    cin >> element;
    cout << "Enter the position to insert the element: ";
    cin >> position;
    if (position < 0 || position > n) {
        cout << "Invalid position!" << endl;
        return 1;
    }
    insertElement(arr, n, element, position);

    cout << "Array after insertion: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
