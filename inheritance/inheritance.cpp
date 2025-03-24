#include <iostream>
using namespace std;
// base class
class employee
{

public:
    employee(){}
    int id;
    float salary;
    employee(int inpid)
    {
        id = inpid;
        salary = 34.0;
    }
};
// derived class syntax
/* class{{derived class name}}: {{visibility mode}}{base class name}
{
    class members /methods/ etc......
} */
// creating a programmer class derived from base employee class
// default visibility mode is private

class programmer : employee
{
public:
    int languagecode = 9;
    programmer(int inpid)
    {
        id = inpid;
    }
    void getdata(){
        cout<<id<<endl;

    }
};
int main()
{
    employee harry(98/-), rohan(2);
    cout << harry.id << endl;
    cout << rohan.salary << endl;
    programmer skillf(5);
    cout<<skillf.languagecode<<endl;
    skillf.getdata();

    return 0;
}