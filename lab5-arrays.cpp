
#include <iostream>
using namespace std;

int main() {
    // Step 1: Declare and initialize the array
    int arr[5] = {5, 3, 8, 1, 2};
    int n = 5;

    // Step 2: Find maximum and minimum
    int max = arr[0];
    int min = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }

        if (arr[i] < min) {
            min = arr[i];
        }
    }

    // Display the original array
    cout << "Before Sorting: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Step 3: Bubble Sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Step 4: Display the sorted array
    cout << "After Sorting: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Display maximum and minimum
    cout << "Maximum: " << max << endl;
    cout << "Minimum: " << min << endl;

    return 0;
}
