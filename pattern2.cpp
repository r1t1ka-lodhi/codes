#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0;
    int row=1;
    while(row<=n){
        int col=1;
        while(col<=row){
            char ch='A'+count;

            cout<<ch<<" ";
            col+=1;
            count+=1;
        }
        //count+=1;
        cout<<endl;
        row+=1;
    }
    return 0;
}