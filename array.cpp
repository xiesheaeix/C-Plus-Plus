#include <iostream>
using namespace std;

int main() {
    int testScores[3];

    for(int i = 0; i < 3; i++){
        cout << "Enter test score " << i + 1 << ": ";
        cin >> testScores[i];
    }

    for(int score : testScores){
        cout << score << endl;
    }
    return 0;
}