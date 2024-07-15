#include <iostream>
using namespace std;

bool isFibonacci(int n) {
    if (n == 0 || n == 1) return true;
    int a = 0, b = 1, c;
    while (b < n) {
        c = a + b;
        a = b;
        b = c;
    }
    return (b == n);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (isFibonacci(num))
        cout << num << " is a term in the Fibonacci series." << endl;
    else
        cout << num << " is not a term in the Fibonacci series." << endl;
    return 0;
}
