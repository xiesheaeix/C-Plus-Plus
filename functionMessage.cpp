#include <iostream>
#include <string>
using namespace std;
// function prototype 
void printMessage(string);

int main() {
    // char choice;
    string name;
    cout << "Enter your first name: ";
    cin >> name;
    printMessage(name);


    // do {
    //     cout << "Enter q to quit and any other key to continue: ";
    //     cin >> choice;

    //     if (choice == 'q'){
    //         cout << "program quit" << endl;
    //     } else
    //         printMessage(); //call to function
    // } while(choice != 'q');
    return 0;
}

void printMessage(string firstName) {
    cout << "you typed " << firstName << endl;
    // static int times = 0; //static var does not dumb memory
    // times += 1;
    // cout << "program looped " << times << " times" << endl;
}