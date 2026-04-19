#include <iostream>
using namespace std;

// If-else statement example 1:
  int main() {
    int age;
    cout<<"enter the age= ";
    cin>>age;
    if ( age>= 18) {
        cout<<"can vote"<<endl;
    } 
    if ( age >= 35) {
        cout << "Ready for the election"<<endl;
    }

    else {
        cout<<"cannot vote" && cout<< "\nnot ready for the election"<< endl;
    }

 
// If-else statement example 2:
// print the largest of 2 numbers;
    int a;
    cout<< "enter the num of a : ";
    cin>>a;

    int b;
    cout<<"enter the num b: ";
    cin>>b;

    if (a > b){
        cout<<"Print A has largest number"<<endl;
    } else{
        cout << "Print B has the largest number"<< endl;
    }


// Another example of if-else statement
    int n;
    cout<<"given number of n: ";
    cin>> n;

    if ( n % 2 == 0) {
        cout<<"Print even"<< endl;
    } else {
        cout<<"print Odd"<< endl;
    }


// Else - If statement example
    int mark;
    cout << "enter the mark: ";
    cin >> mark;

    if (mark >=90) {
        cout << "Grade A" << endl;
    } else if (mark >= 80) {
        cout << "Grade B" << endl;
    } else {
        cout << "Grade C" << endl;
    }


   return 0;
}