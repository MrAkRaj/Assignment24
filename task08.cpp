#include <iostream>
using namespace std;

const double PI = 3.14159;

double area(double radius) {
    return PI * radius * radius;
}

double area(double length, double width) {
    return length * width;
}

double area(double base, double height, int dummy) { // dummy parameter to differentiate
    return 0.5 * base * height;
}

int main() {
    double radius, length, width, base, height;
    
    cout << "Enter radius of circle: ";
    cin >> radius;
    cout << "Area of circle: " << area(radius) << endl;
    
    cout << "Enter length and width of rectangle: ";
    cin >> length >> width;
    cout << "Area of rectangle: " << area(length, width) << endl;
    
    cout << "Enter base and height of triangle: ";
    cin >> base >> height;
    cout << "Area of triangle: " << area(base, height, 0) << endl;
    
    return 0;
}
