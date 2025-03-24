#include <iostream>
#include <math.h>
using namespace std;
//practice question
class simple_calculator
{
protected:

public:
    double num1,num2;
    double sum,sub,mul,div;
    void set_number(double a, double b)
    {
        num2 = b;
        num1=a;
    }
    void oper_cal(){
        sum=num1+num2;
        sub=num1-num2;
        mul=num1*num2;
        div=num1/num2;
    }
    void display_cal(){
        cout<<"sum is"<<sum<<endl;
        cout<<"difference is"<<sub<<endl;
        cout<<"multiply is"<<mul<<endl;
        cout<<"division is"<<div<<endl;
    }
};

class scientific_calculator
{
protected:

public:
    int num3,num4;
    float sin1,tan1,cos1,log1, sin2,tan2,cos2,log2;
    void set_numbersci(double a, double b)
    {
        num4 = b;
        num3=a;
    }
    void ope_sci(){
        sin1=sin(num3);
        sin2=sin(num4);
        cos1=cos(num3);
        cos2=cos(num4);
        tan1=tan(num3);
        tan2=tan(num4);
        log1=log(num3);
        log2=log(num4);
    }
    void display_sci(){
        cout<<"sin value of"<<num3<<"is "<<sin1<<endl;
        cout<<"sin value of"<<num4<<"is "<<sin2<<endl;
        cout<<"cos value of"<<num3<<"is "<<cos1<<endl;
        cout<<"cos value of"<<num4<<"is "<<cos2<<endl;
        cout<<"tan value of"<<num3<<"is "<<tan1<<endl;
        cout<<"tan value of"<<num4<<"is "<<tan2<<endl;
        cout<<"logrithm value of"<<num3<<"is "<<log1<<endl;
        cout<<"logrithm value of"<<num4<<"is "<<log2<<endl;
    }
};

class hybrid_calculator : public simple_calculator, public scientific_calculator
{
public:
    void set(int a,int b){
        set_number(a,b);
        set_numbersci(a,b);
    }
    void operation(){
        oper_cal();
        ope_sci();
    }
    void display(){
        display_cal();
        display_sci();
    }
};
int main()
{
    int n1, n2;
    hybrid_calculator hyb;
    cin >> n1 >> n2;
    hyb.set(n1, n2);
    hyb.operation();
    hyb.display();
    
    return 0;
}