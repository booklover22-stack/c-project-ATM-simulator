#include <iostream>
using namespace std;

int main() {
    int choice;
    double balance = 1000.0;
    double amount;

     {
        cout << "\n===== ATM MENU =====\n";
        cout << "1. check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "your balance is: GHS " << balance << endl;
                break;

            case 2:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                if (amount > 0) {
                    balance += amount;
                    cout << "Deposit successful.\n";
                } else {
                    cout << "Invalid amount.\n";
                }
                break;

            case 3:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    cout << "please your cash.\n";
                }
                break;

            case 4:
                cout << "Thank you for using the ATM. Goodbye!\n";
                break;

            default:
                cout << "Invalid choice. Try again.\n";
        }

    } while ('choice' != 4);

    return 0;
}
