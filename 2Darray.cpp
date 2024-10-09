
/*### Algorithm
1. Define the number of rows and columns.
2. Declare a 2D array with the specified rows and columns.
3. Initialize the array with values or take input from the user.
4. Access and manipulate the array elements as needed.*\

### Program
```cpp
#include <iostream>
using namespace std;

int main() {
    int rows = 3, cols = 4;
    int array[3][4];
    cout << "Enter values for the 2D array:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> array[i][j];
        }
    }
    cout << "2D array values:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
