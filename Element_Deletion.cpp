#include <iostream>
using namespace std;

void deleteElement(int arr[], int& n, int position) {
    for (int i = position; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
}

int main() {
    int arr[100] = {1, 2, 3, 4, 5}; // Initial array
    int n = 5;
    int position;

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Enter the position of the element to delete: ";
    cin >> position;
    if (position < 0 || position >= n) {
        cout << "Invalid position!" << endl;
        return 1;
    }

    deleteElement(arr, n, position);

    cout << "Array after deletion: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
