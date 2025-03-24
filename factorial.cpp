#include<iostream>

using namespace std;

int fact(int n){
    int n1=0,n2=1,next=0;
    for (int i =1; i <=n; i++)
    {
        if (n==0)
        {
            return 1;
        }
        else{
            return n*fact(n-1);
        }
        
    }
}

int main(){
    int n,r;
    cin>>r;
    cin>>n;
    
    int nCr=fact(n)/(fact(r)*fact(n-r));
    cout<<nCr<<endl;
    return 0;
}