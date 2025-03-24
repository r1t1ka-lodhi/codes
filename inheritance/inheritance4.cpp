#include <iostream>
using namespace std;
//single inheritancce
class base{
    protected:
        int a;
    private:
        int b;
};
/*for a protected member :
                        public derivation       private     protected
    private members ----> not inherited         not         not
    protected members ----> protected           private     protected
    publicmembers---->      public              private     protected
*/  

class derived: protected base{
};

int main(){
    base b;
    derived d;
    //cout<<d.a;//will not work since a is protected
    return 0;
}