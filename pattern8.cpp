#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        int space=n-row;
        while(space!=0){
            cout<<"  ";
            space--;
        }
        int count=1;
        while(col<=row){
            cout<<count<<" ";
            col+=1;
            count++;
        }
        count=1;
        while(count<row){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
        row+=1;
    }
    return 0;
}