#include <iostream>
#include <cstdlib> 
#include <limits> 
using namespace std;

int main() {
    char playAgain;
    int wins = 0, losses = 0, ties = 0;

    do {
        int userChoice, compChoice;

        cout << "\n======================\n";
        cout << "Rock Paper Scissors!\n";
        cout << "======================\n";

        cout << "1) Rock ✊" << endl;
        cout << "2) Paper 🤚" << endl;
        cout << "3) Scissors ✂️" << endl;
        cout << "\nSHOOT!\n" << endl;
        cout << "Enter 1, 2, or 3: ";
        cin >> userChoice;

        if (userChoice == 1 || userChoice == 2 || userChoice == 3) {
            srand(time(NULL));
            compChoice = rand() % 5 + 1;

            // Game logic based on userChoice and compChoice...
            if (userChoice == compChoice) {
                cout << "\nIt's a tie! Try again. " << endl;
                ties += 1;
            } else if (userChoice == 1 && compChoice == 2) {
                cout << "\nComputer chose paper..." << endl;
                cout << "You lose! Paper covers rock." << endl;
                losses += 1;
            } else if (userChoice == 1 && compChoice == 3) {
                cout << "\nComputer chose scissors..." << endl;
                cout << "You win! Rock beats scissors." << endl;
                wins += 1;
            } else if (userChoice == 2 && compChoice == 1) {
                cout << "\nComputer chose rock..." << endl;
                cout << "You win! Paper covers rock." << endl;
                wins += 1;
            } else if (userChoice == 2 && compChoice == 3) {
                cout << "\nComputer chose scissors..." << endl;
                cout << "You lose! Scissors cut paper." << endl;
                losses += 1;
            } else if (userChoice == 3 && compChoice == 1) {
                cout << "\nComputer chose rock..." << endl;
                cout << "You lose! Rock beats scissors." << endl;
                losses += 1;
            } else if (userChoice == 3 && compChoice == 2) {
                cout << "\nComputer chose paper..." << endl;
                cout << "You win! Scissors cut paper." << endl;
                wins += 1;
            }
            cout << "Do you want to play again? (Y/N): ";
            cin >> playAgain;

            // Clear the input buffer
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            cout << "Invalid input. Please enter 1, 2, or 3." << endl;

            // Clear the input buffer
            cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
            playAgain = 'Y'; // Assign 'Y' to playAgain to continue the loop
        }
    } while (playAgain != 'n' && playAgain != 'N');

    cout << "\nYou won " << wins << " times." << endl;
    cout << "You lost " << losses << " times." << endl;
    cout << "You tied " << ties << " times." << endl;

    cout << "\nThanks for playing!" << endl;
    return 0; 
}
