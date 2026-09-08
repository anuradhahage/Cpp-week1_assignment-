#include <iostream>
using namespace std;

int main() {
    float balance = 1000.0;
    float amount;
    int choice;

    do {
        cout << "\n\n--- ATM MENU ---\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit\n";
        cout << "3. Withdraw\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Current Balance = " << balance;
                break;

            case 2:
                cout << "Enter deposit amount: ";
                cin >> amount;

                if (amount > 0) {
                    balance += amount;
                    cout << "Amount deposited successfully.";
                } else {
                    cout << "Invalid amount.";
                }
                break;

            case 3:
                cout << "Enter withdrawal amount: ";
                cin >> amount;

                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    cout << "Please collect your cash.";
                } else {
                    cout << "Insufficient balance or invalid amount.";
                }
                break;

            case 4:
                cout << "Thank you for using ATM.";
                break;

            default:
                cout << "Invalid choice.";
        }

    } while (choice != 4);

    return 0;
}
