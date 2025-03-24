#include <iostream>
using namespace std;
typedef struct employee
{
    int eId;
    char favchar;
    float salary;
}ep;
union money
{
    int rice;
    char car;
    float pounds;
};

int main(){
    enum meal{breakfast, lunch,dinner};
    meal m3=dinner;
    cout<<(m3==2);

    //cout<<breakfast;
    //cout<<lunch;
    //cout<<dinner;
    //structure program
    //ep harry;
    //harry.eId=1;
    //harry.favchar='c';
    //harry.salary=1200000000;
    //cout<<harry.eId<<endl;
    //cout<<harry.favchar<<endl;
    //cout<<harry.salary<<endl;

    //union program
    //union money m1;
    //m1.rice=34;
    //m1.car='r';
    //cout<<m1.rice<<endl;
    //cout<<m1.car<<endl;
    return 0;
}