/*
Shea Ehrenberger
CS 101 Sections 11332 & 11333

*/
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  // Variables
  double interestRate, startingBalance, deposits, withdrawls, totalDeposits,
      totalWithdrawls, endingBalance, interestEarned, totalInterest;
  // Constant number of months the program asks for
  const int MONTHS = 5;

  // Stream manipulators
  cout << setprecision(2) << fixed;
  // Asks for the annual interest rate
  cout << "Enter the annual interest rate on the account (e.g. .04): ";
  cin >> interestRate;
  while (interestRate < 0) { // Loops until positive number is entered
    cout << "Interest rate must be non-negative: ";
    cin >> interestRate;
  }
  
  // Asks for the starting balance
  cout << "Enter the starting balance: ";
  cin >> startingBalance;
  while (startingBalance <= 0) { // Loops until positive number is entered (NOT INCLUDING 0)
    cout << "The balance must be greater than 0: ";
    cin >> startingBalance;
  }

  // Accumulators
  totalDeposits = 0.0;
  totalWithdrawls = 0.0;
  totalInterest = 0.0;

  // Loop going through deposit and withdrawls for each month
  for (int i = 1; i <= MONTHS; i++) {
    cout << "\nMonth " << i << endl;

    // Asks for the deposits
    do {
      cout << "\tTotal deposits for this month: $";
      cin >> deposits;
      if (deposits < 0) { // Output for negative input
        cout << "\tDeposits must be zero or greater. Please re-enter: $";
        cin >> deposits;
      }
    } while (deposits < 0); // Loops until positive number is entered
    // Accumulates the total deposits entered once a positive number is entered
    totalDeposits += deposits;

    // Asks for the withdrawls
    do {
      cout << "\tTotal withdrawls for this month: $";
      cin >> withdrawls;
      if (withdrawls < 0) { // Output for negative input
        cout << "\tWithdrawl must be zero or greater. Please re-enter: $";
        cin >> withdrawls;
      }
    } while (withdrawls < 0); // Loops until positive number is entered
    // Accumulates the total withdrawls entered once a positive number is entered
    totalWithdrawls += withdrawls;

    // The users starting balance is then reassigned the balance after the deposits and interest is added and withdrawls are subtracted
    startingBalance = startingBalance + deposits - withdrawls + interestEarned;

    // The interest earned that month is calculated with the updated account balance
    interestEarned = (startingBalance) * (interestRate / 12.0);

    // If the interest earned for the month is greater than 0, it is added to the total interest accumulator
    if(interestEarned > 0){
      totalInterest += interestEarned;
    }
  }

  // If the last month's interest earned is greater than 0, it is added to the last month's account balance. If not, the account balance is the last known balance
  interestEarned > 0 ? endingBalance = startingBalance + interestEarned : endingBalance = startingBalance;

  // Special output for overdraft accounts
  if (endingBalance < 0){
    cout << "\nThe account has a balance of $" << endingBalance << endl;
    cout << "Because the balance is negative, the account has been closed." << endl;
  }

  // Standard output for all account totals
  cout << setw(29) << left << "\nEnding Balance: " << setw(8) << right << "$ " << endingBalance << endl;
  cout << setw(28) << left << "Amount of deposits:  " << setw(8) << right << "$ " << totalDeposits << endl;
  cout << setw(28) << left << "Amount of withdrawls:  " << setw(8) << right << "$ " << totalWithdrawls << endl;
  cout << setw(28) << left << "Amount of interest earned: " << setw(8) << right << "$ " << totalInterest << endl;

  return 0;
}