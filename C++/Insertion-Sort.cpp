#include <iostream>

using namespace std;

void insertionSort(int arr[], int const n) {
    for (int i = 1; i < n; i++) {
        int const temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = temp;
    }
}

void printArray(int array[], int const n) {
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    constexpr int length = size(arr);
    cout << "================= [INSERTION SORT] ===============" << endl;
    cout << "Array before sorting: " << endl;
    printArray(arr, length);

    cout << "\nArray after sorting: " << endl;
    insertionSort(arr, length);
    printArray(arr, length);
}
