#include <iostream>	
using namespace std;

int max_of_four(int a, int b, int c, int d) {
    int max = 0;
    for (auto value : {a, b, c, d}) {
        max = (max > value) ? max : value;
    }
    return max;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    return 0;
}
