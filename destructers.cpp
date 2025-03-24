#include <iostream>
using namespace std;
int count=0;
class num{
    public:
    num(){
        count++;
        cout<<"It is contructor code for object"<<count<<endl;
    }
    //this is the destructor code
    ~num(){
        cout<<"It is a destructor code for object"<<count<<endl;
        count--;
    }
};
int main(){
    num n1;
    {
        cout<<"inside block"<<endl;
        num n2,n3;
        cout<<"end of block"<<endl;

    }
    cout<<"back to main"<<endl;
    return 0;
}