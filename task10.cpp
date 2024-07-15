#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

double add(int a, double b) {
    return a + b;
}

double add(double a, int b) {
    return a + b;
}

int main() {
    int int1, int2;
    double double1, double2;
    
    cout << "Enter two integers: ";
    cin >> int1 >> int2;
    cout << "Sum of two integers: " << add(int1, int2) << endl;
    
    cout << "Enter two real numbers: ";
    cin >> double1 >> double2;
    cout << "Sum of two real numbers: " << add(double1, double2) << endl;
    
    cout << "Enter an integer and a real number: ";
    cin >> int1 >> double1;
    cout << "Sum of an integer and a real number: " << add(int1, double1) << endl;
    
    cout << "Enter a real number and an integer: ";
    cin >> double2 >> int2;
    cout << "Sum of a real number and an integer: " << add(double2, int2) << endl;
    
    return 0;
}
