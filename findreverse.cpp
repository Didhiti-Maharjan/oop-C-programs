#include<iostream>
using namespace std;
int main(){
  int i,n,rem;
    int rev=0;
    cout<<"enter number"<<endl;
    cin>>n;
    while(n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    cout<<"reverse is: "<<rev<<endl;
    return 0;
}
