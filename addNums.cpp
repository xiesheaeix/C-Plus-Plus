#include <iostream>
using namespace std;

int addNums(int, double);
bool isEven(int);

int sum = 0;

int main() {
    int num1;
    double num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    sum = addNums(num1, num2);
    cout << num1 << " + " << num2 << " = " << sum << endl;
    isEven(sum) ? cout << "This num is even."<< endl : cout << "This num is odd."<< endl;
    return 0;
}

int addNums(int x, double y) {
    return (x + y);
}

bool isEven(int sum) {
    return (sum % 2 == 0);
} 