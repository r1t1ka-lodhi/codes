#include <iostream>
using namespace std;
int main()
{
    int arr[4] = {};
    for (int i = 0; i < 5; i++)
    {
        int a;
        cin >> a;
        arr[i] = a;
    }
    int element, val=0;
    cout<<"enter the element :";
    cin>>element;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i]==element)
        {
            cout<<"the elemnt "<<element<<"found at "<<i<<" index no "<<endl;
            val=1;
        }
        
    }
    if (val=0)
    {
        cout<<"element not found";
    }
    
    return 0;
}