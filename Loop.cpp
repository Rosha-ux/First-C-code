// for loop
#include <iostream>
using namespace std;

int main() {
    for ( int i = 1; i<=5; i++){      //created for loop for print roshan Khanal 5 times
        cout<<"roshan khanal" << endl;
    }

    int n ;                                     // print 1 to n number
    cout<< "enter your number: ";
    cin >> n;
    for ( int i = 0; i<= n; i++) {
        cout << i << endl;
    }

    int n;                // sum of n natural number
    cout << "enter number: ";
    cin >> n;
    int sum = 0;

    for ( int i =1; i <= n; i++) {
        sum += 1;
        cout << sum << endl;
    }


    
    return 0;
}

