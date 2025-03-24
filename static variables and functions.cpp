#include <iostream>
using namespace std;

class employee
{
    int Id;
    static int count; // and not "int count=0";

public:
    void setdata()
    {
        cin >> Id;
        count++;
    };
    void getdata()
    {
        cout << "the Id of employee  " << count << " is " << Id << endl;
    };
    static void getcount()
    { // static function
        //cout<<id;//this will give error;
        cout << "the count of variable id" << count << endl;
    };
};

//{this helps in incresing the value of count every time a new object is created in a class;
int employee::count; // default valuse  is 0;}

int main()
{
    employee harry, rohan, lovish;
    // harry.Id--- cant be done
    harry.setdata();
    harry.getdata();
    employee::getcount();

    rohan.setdata();
    rohan.getdata();
    employee::getcount();

    lovish.setdata();
    lovish.getdata();
    employee::getcount();

    return 0;
}