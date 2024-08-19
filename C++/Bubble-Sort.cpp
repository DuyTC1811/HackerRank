#include <iostream>
#include <ostream>

using namespace std;

void printArray(int arr[], int const n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

void bubbleSort(int arr[], int const n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int const temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    cout << "================= [BUBBLE SORT] ===============" << endl;
    int arr[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    constexpr int length = std::size(arr);

    cout << "Array before sorting: " << endl;
    printArray(arr, length);

    cout << "\nArray after sorting: " << endl;
    bubbleSort(arr, length);
    printArray(arr, length);
}
