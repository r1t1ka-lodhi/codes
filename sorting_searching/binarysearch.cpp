#include <iostream>
using namespace std;
int bubblesort(int arr[], int fir, int second, int x)
{
    int midd = fir + (second - fir) / 2;
    while (fir < second)
    {
        if (x == arr[midd])
        {
            int flag=0;
            return flag;
        }
        else if (arr[midd] < x)
        {
            fir = midd + 1;
        }
        else
        {
            second = midd - 1;
        }
    }
};
int main()
{
    int arr[4] = {1, 3, 5, 7};
    int x, flag = 1;
    flag = bubblesort(arr, 0, 3, x);
    cout << "eneter the elemnt to be found" << endl;
    cin >> x;
    cout <<"The original arry is"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i]<<" ";
    }
    cout<<endl;
    if (flag != 0)
    {
        cout << " element not found" << endl;
    }
    else
    {
        cout << "element found" << endl;
    }

    return 0;
}