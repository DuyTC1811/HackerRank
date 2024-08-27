#include <iostream>
#include <iterator>

using namespace std;

void printArray(int arr[], int const n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[] = {1, 10, 8, 7, 6, 5, 4, 3, 2, 9};
    constexpr int length = std::size(arr);
    cout << "Array before sorting: " << endl;
    printArray(arr, length);

    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int const temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "\nArray after sorting: " << endl;
    printArray(arr, length);
    return 0;
}
