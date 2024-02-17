#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int testScore;

    cin >> testScore;

    if (testScore >= 90) {
        cout << "Grade is an A" << endl;
    }
    else if (testScore >= 80) {
        cout << "Grade is a B" << endl;
    }
    else if (testScore >= 70) {
        cout << "Grade is a C" << endl;
    }
    else if (testScore >= 60) {
        cout << "Grade is a D" << endl;
    }
    else {
        cout << "Grade is a F" << endl;
    }
    return 0;
}