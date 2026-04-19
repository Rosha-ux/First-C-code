#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter the number: ";
    cin >> number;

    if (number >= 0) {
        cout << "Given number is positive" << endl;
    } else if ( number <= 0 ) {
        cout << "Given number is negative" << endl;
    } else if ( number == 0) {
        cout << "Given number is Zero" << endl;
    }

    return 0;
}