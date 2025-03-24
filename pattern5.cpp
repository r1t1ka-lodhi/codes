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
        while(col<=row){
            cout<<row<<" ";
            col+=1;
        }
        cout<<endl;
        row+=1;
    }
    return 0;
}