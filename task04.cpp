#include <iostream>
using namespace std;

int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int combination(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

void printPascalTriangle(int N) {
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j <= i; ++j) {
            cout << combination(i, j) << " ";
        }
        cout << endl;
    }
}

int main() {
    int N;
    cout << "Enter number of lines for Pascal Triangle: ";
    cin >> N;
    printPascalTriangle(N);
    return 0;
}
