#include <iostream>
using namespace std;

int power(int x, int y) {
    int result = 1;
    for (int i = 0; i < y; ++i) {
        result *= x;
    }
    return result;
}

int main() {
    int x, y;
    cout << "Enter base and exponent: ";
    cin >> x >> y;
    cout << x << " raised to the power " << y << " is " << power(x, y) << endl;
    return 0;
}
