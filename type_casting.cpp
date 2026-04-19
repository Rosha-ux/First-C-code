#include <iostream>
using namespace std;

int main() {

    float PI = 3.14; //Explict typecasting from floating to integer
    cout<<(int) PI<<endl;

    cout<<((float)10/3)<<endl;

    cout<<(char)('A' + 1)<<endl; // print out B. Explicit typecasting

    cout<<(35 + 3.33)<<endl; //Implict typecasting


//Questions answer for explict conversion typecasting
//1. Predict output of (bool)3+2;
    cout<<((bool)5 +3)<<endl; //output will be 4. Boolean value for true is 1 and for false is 0, so 1+3 =4.

//2. Predict the output of cout (25.3 +2 + 'A')
    cout<<int(25.3 + 2 + 'A')<<endl;
    return 0;
}