#include <iostream>
using namespace std;

int main() {
    short testScore;
    float myGpa;

    cout << "The address of test score is " << &testScore << endl;
    cout << "The address of my GPA is " << &myGpa << endl;
   

    cout << "The size of test score is " << sizeof(testScore) << endl;
    cout << "The size of my GPA is " << sizeof(myGpa) << endl;

    return 0;
}