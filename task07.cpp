#include <iostream>
using namespace std;

int add(int a, int b, int c = 0) {
    return a + b + c;
}

int main() {
    int x, y, z;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    cout << "Sum of two numbers: " << add(x, y) << endl;
    
    cout << "Enter three numbers: ";
    cin >> x >> y >> z;
    cout << "Sum of three numbers: " << add(x, y, z) << endl;
    
    return 0;
}
