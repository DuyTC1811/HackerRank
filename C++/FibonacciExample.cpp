#include <iostream>
#include <ostream>

using namespace std;

int fibonacci(int const number) {
    if (number <= 0) {
        cout << "Number is must be greater than 0 (" << number << ")" << endl;
        return -1;
    }

    if (number <= 1) return 0;
    if (number == 2) return 1;

    int a = 0, b = 1;
    for (int i = 3; i <= number; i++) {
        const int next = a + b;
        a = b;
        b = next;
    }
    return b;
}

int main() {
    int number = 199;
    if (fibonacci(number) == number) {
        cout << "Fibonacci(" << number << ") = " << number << endl;
    }
    else {
        cout << "Fibonacci(" << number << ") = " << number << endl;
    }

    for (int i = 1; i <= 20; i++) {
        cout << "Is fibonacci: (" << fibonacci(i) << ")" << endl;
    }
    return 0;
}
