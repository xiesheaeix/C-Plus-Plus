#include <iostream>

using namespace std;

int main() {
    char grade;
    cout << "Enter your grade: ";
    cin >> grade;

    switch (grade) {
        case 'A' :
            cout << "Your average must be between 90-100.\n";
            break;
        case 'B' :
            cout << "Your average must be between 80-90.\n";
            break;
        case 'C' :
            cout << "Your average must be between 70-80.\n";
            break;
        case 'D' :
            cout << "Your average must be between 60-70.\n";
            break;
        default :
            cout << "Your grade is below a 60.\n";
    }
    return 0;
}