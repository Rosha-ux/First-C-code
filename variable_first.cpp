#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 15;
    char Grade = 'A';
    char subject = 'B';

    cout<<a<<" "<<b<<" "<<Grade<<" "<<subject<<endl; //This is the full print out variable.
    /* this is 
    multi line
    comments*/

    cout<<"a = "<<a<<endl;

    cout<<"b = "<<b<<endl;

    cout<<"size of int= "<<sizeof(int)<<endl;

    cout<<"size of char= "<<sizeof(char)<<endl;

    int age;
    cout<<"Enter your age= ";
    cin>>age;

    cout<<"your age is= "<<age<<endl;

    return 0;
}
