#include <iostream>
#include <ostream>
using namespace std;

bool isPerfectNumber(int const number) {
    int sum = 0;
    if (number < 2) {
        return false;
    }

    for (int i = 1; i <= number / 2; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }
    return sum == number;
}

int main() {
    int constexpr number = 15;
    if (isPerfectNumber(number)) {
        cout << number << " is a perfect number" << endl;
    } else {
        cout << number << " is not a perfect number" << endl;
    }
    return 0;
}
