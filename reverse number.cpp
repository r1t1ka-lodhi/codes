#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    int reverse=0;
    while (n>0)
    {
        int lastno=n%10;
        reverse=reverse*10 + lastno;
        n/=10;
    }
    cout<<"the number is  "<<reverse;
    return 0;
    
}