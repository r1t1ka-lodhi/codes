#include <iostream>
using namespace std;

class base1{
    public:
    void greet(){
        cout<<"how are you??"<<endl;
    }
};
class base2{
    public:
    void greet(){
        cout<<"kaise ho??"<<endl;
    }
};

class derived: public base1,public base2{
    int a;
    public:
    void greet(){
        base1::greet();
    }

};

class B{
    public:
    void say(){
        cout<<"hello world"<<endl;
    }
};
class D:public B{
    public:
    void say(){
        cout<<"hello beautiful people"<<endl;
    }
};

int main(){
    //ambiguity one
    /*base1 b1;
    base2 b2;
    derived de;
    b1.greet();
    b2.greet();
    de.greet();*/

    //ambiguity two
    D der;
    B ba;
    ba.say();
    der.say();
    return 0;
}