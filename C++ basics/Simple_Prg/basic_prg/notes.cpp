#include <iostream>
using namespace std;

int main() {
    int amount;
    cout << "Enter amount: ";
    cin >> amount;

    int note100 = 0, note50 = 0, note20 = 0, note10 = 0;
    int choice = 1; // to control switch

    switch (choice) {
        case 1:  // Count ₹100 notes
            note100 = amount / 100;
            amount %= 100;
        case 2:  // Count ₹50 notes
            note50 = amount / 50;
            amount %= 50;
        case 3:  // Count ₹20 notes
            note20 = amount / 20;
            amount %= 20;
        case 4:  // Count ₹10 notes
            note10 = amount / 10;
            amount %= 10;
            break;
        default:
            cout << "Invalid choice!";
    }

    cout << "100 : " << note100 << endl;
    cout << "50  : " << note50 << endl;
    cout << "20  : " << note20 << endl;
    cout << "10  : " << note10 << endl;

    return 0;
}
