#include<iostream>
using namespace std;
int main(){
    double radius,area,circum;
    cout<<"Enter radius of circle"<<endl;
    cin>>radius;
    circum=2*3.14*radius;
    area=3.14*radius*radius;
    cout<<"circumference = "<<circum<<endl;
    cout<<"Area = "<<area<<endl;
    return 0;
}
