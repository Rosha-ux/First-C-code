#include <iostream>
using namespace std;

int main() {
    int n = 12345;
    int digSum = 0;
    
    while (n > 0){
        int lastDig = n % 10;
        if ( lastDig % 2 != 0) {     // To print the only odd number of the given digits
        digSum += lastDig;
        }
      
        n = n / 10;
    }
    cout << "sum = " << digSum << endl;

    return 0;
}