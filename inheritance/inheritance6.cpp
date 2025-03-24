#include <iostream>
using namespace std;
//multiple inheritance
class base1{
    protected:
    int base1int;
    public:
    void set_base1int(int a){
        base1int=a;
    }
};
class base2{
    protected:
    int base2int;
    public:
    void set_base2int(int a){
        base2int=a;
    }
};

class base3{
    protected:
    int base3int;
    public:
    void set_base3int(int a){
        base3int=a;
    }
};
class derived:public base1, public base2, public base3 {
    public:
    void show(){
        cout<<"The value of base1 is "<<base1int<<endl;
        cout<<"The value of base2 is "<<base2int<<endl;
        cout<<"The value of base3 is "<<base3int<<endl;
        cout<<"The value of sum of base1 and base2 and base3is "<<base2int+base1int+base3int <<endl;
    }
};

int main(){
    derived der;
    der.set_base1int(23);
    //cout<<der.base1int<<endl;/because base1int is protected inherited 
    //and hence cant be shown

    der.set_base2int(25);
    der.set_base3int(67);
    der.show();
    return 0;
}