#include <iostream>
using namespace std;

int main() {
    // Define a 3D array with 2 layers, 3 rows, and 4 columns
    int arr[2][3][4] = {
        {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12}
        },
        {
            {13, 14, 15, 16},
            {17, 18, 19, 20},
            {21, 22, 23, 24}
        }
    };

    // Accessing and printing elements of the 3D array
    cout << "3D Array Elements:" << endl;
    for(int i = 0; i < 2; i++) {           // Loop through layers
        for(int j = 0; j < 3; j++) {       // Loop through rows
            for(int k = 0; k < 4; k++) {   // Loop through columns
                cout << arr[i][j][k] << " ";
            }
            cout << endl;  // New line after each row
        }
        cout << endl;  // New line after each layer
    }

    return 0;
}

