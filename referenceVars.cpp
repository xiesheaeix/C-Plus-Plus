#include <iostream>
#include <string>
using namespace std;

void getNum(int&);
void doubleIt(int&);

int main() {
    int num;
    getNum(num);
    doubleIt(num);
    return 0;
}

void getNum(int& number) {
    cout << "Enter a number: " ;
    cin >> number;
}
void doubleIt(int& number) {
    int doubled = number * 2;
    cout << "your number is " << number << " your number doubled is " << doubled << endl;
}