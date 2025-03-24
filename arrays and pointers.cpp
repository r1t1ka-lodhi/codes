#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
    int marks[4]={23,45,73,89};
    for (int i = 0; i <4; i++)
    {
        cout<<marks[i]<<endl; 

    }
    //pointers and arrays
    int *p= marks;
    marks[2]=543;
    cout<<"the value of marks[0]is"<<*p<<endl;
    cout<<"the value of marks[1]is"<<*(p+1)<<endl;
    cout<<"the value of marks[2]is"<<*(p+2)<<endl;
    cout<<"the value of marks[3]is"<<*(p+3)<<endl;
    return 0;
}
