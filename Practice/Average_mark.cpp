#include <iostream>
using namespace std;

int main() {

    //input science
     float science;
    cout<<"enter science = ";
    cin>>science;

    //input math
    float math;
    cout<<"enter math = ";
    cin>>math;

    //input Physics
   float Physics;
    cout<<"enter Physics = ";
    cin>>Physics;

    //Calculate the average marks
   float average = (science+math+Physics)/3;

    cout<<"total average = "<<average<<endl;

    return 0;
}