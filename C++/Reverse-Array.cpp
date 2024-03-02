#include <iostream>

using namespace std;

void reversearray(int array[], int size) {
  for (int i = size - 1; i >= 0; --i) {
    cout << array[i] << (i > 0 ? " " : "");
  }
}


int main () {
  int N;
  cin >> N;

  int array[N];
  for (int i = 0; i < N; ++i) {
    cin >> array[i];
  }
  int length = sizeof(array) / sizeof(int);

  reversearray(array, length);
  return 0;
}
