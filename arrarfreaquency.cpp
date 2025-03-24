#include <iostream>
#include<math.h>
using namespace std;
int main(){
    int num,ma=0,ma2=0;
	cout<<"Enter the total number of songs"<<endl;
	cin >> num;    //Reading input from STDIN
	cout << "Input number is " << num << endl;
    int N[num];
    cout<<"enter the array"<<endl;
    cin>>N[num];
    for (int i = 0; i < num; i++)
    {
        /* code */
        //cin>>N[i];
        ma=max(ma,N[i]);
    }

    int fre[ma+1]={0};
    for (int i = 0; i < num; i++)
    {
        fre[N[i]]++;
    }

    for (int j = 0; j <ma+1; j++)
    {
        ma2=max(ma2,fre[j]);
    }
    
    int count=0;
    for (int i = 0; i <ma2+1 ; i++)
    {
        /* code */
        if (fre[i]==ma2)
        {
            count=count+1;
        }
    }
    cout<<count<<endl;
    return 0;
}