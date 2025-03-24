#include <iostream>
using namespace std;
int main(){
    int n,amount;
    int count100 =0;
    int count50 =0;
    int count20 =0;
    int count1 =0;
    
    // int bit=n&1;
    // cout<<bit;

    cout<<"enter the amount"<<endl;
    cin >>amount;
    if (amount>=100)
    {
        n=100;
    }
    else if (amount>=50)
    {
        n=50;
    }
    else if (amount>=20)
    {
        n=20;
    }
    else if(amount>=1){
        n=1;
    }
    
    
    
    switch (n)
    {
    case 100:
        count100=amount/100;
        amount%=100;
    
    case 50:
        count50=amount/50;
        amount%=50;
    
    case 20:
        count20=amount/20;
        amount%=20;
    
    case 1:
        count1=amount/1;
        amount%=1;
    
    default:
        break;
    }

    // cout<<"count of 100 is"<< count100 <<endl;
    // cout<<"count of 50 is"<< count50 <<endl;
    // cout<<"count of 20 is"<< count20 <<endl;
    // cout<<"count of 1 is"<< count1 <<endl;
    cout<<"count of 100 is"<< count100 <<endl;
    cout<<"count of 50 is"<< count50 <<endl;
    cout<<"count of 20 is"<< count20 <<endl;
    cout<<"count of 1 is"<< count1 <<endl;

    return 0;
}