#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int col=row;
        while(col<=n){
            cout<<"*"<<" ";
            col+=1;
        }
        cout<<endl;
        row+=1;
    }
    return 0;
}