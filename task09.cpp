#include <iostream>
using namespace std;

int max(int a, int b) {
    return (a > b) ? a : b;
}

double max(double a, double b) {
    return (a > b) ? a : b;
}

int main() {
    int int1, int2;
    double double1, double2;
    
    cout << "Enter two integers: ";
    cin >> int1 >> int2;
    cout << "Maximum of two integers: " << max(int1, int2) << endl;
    
    cout << "Enter two real numbers: ";
    cin >> double1 >> double2;
    cout << "Maximum of two real numbers: " << max(double1, double2) << endl;
    
    return 0;
}
