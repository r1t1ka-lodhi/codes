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
};
int main(){
    base1 b1;
    base2 b2;
    b1.greet();
    return 0;
}