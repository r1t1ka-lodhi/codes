/*#include <iostream>
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
    cout<<"the number is"<<reverse;
    return 0;
    
}*/
#include <iostream>
using namespace std;

int bintdec(int n){
    int ans=0;
    int x=1;
    while (n>0)
    {
        int y=x%10;
        ans+=x*y;
        x*=2;
        n/10;
        
    }
    cout<<ans;

}
int main(){
    int n,num;
    cout<<"enter the binary number";
    cin>>n;
    bintdec(n);
    return 0;
}
    