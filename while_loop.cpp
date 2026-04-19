#include <iostream>
using namespace std;

int main() {
    // int i = 1;
    // while (i < 3) {
    //     cout << i << " ";
    //     i ++;

    // }

    // print the square pattern for using for loop
    // for ( int i = 1; i <= 4; i++) {
    //     cout << "****" ;
    //     cout<< endl;
    // }


    // print the number from n to 1 using for loop
    int n;
    int sub = 0;
    cout << "Given number: ";
    cin >> n;
    for ( int i = n; i >= 1; --i) {
        sub -= 1;
        cout << i << endl;
    }






    return 0;
}