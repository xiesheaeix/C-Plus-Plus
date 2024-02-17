#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double radius, area;
    const double PI = 3.14159;
    cout << "Enter the radius of a circle : ";
    cin >> radius;
    area = PI * pow(radius, 2);
    cout << "Area of the circle is: " << area << endl;
    return 0;
}