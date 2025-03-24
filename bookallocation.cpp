#include <iostream>
#include<vector>
using namespace std;

bool isPossible(vector<int> arr, int n, int m, int mid){
    int stucount=0;
    int pagesum=0;

    for (int i = 0; i < n; i++)
    {
        if (pagesum+arr[i]<=mid)
        {
            pagesum+=arr[i];
        }
        else
        {
            stucount++;
            if (stucount>m || arr[i]>pagesum)
            {
                return false;
            }
            
        }        
    }
    return true;
}
int bookAllocation(vector<int> arr, int n, int m){
    int s=0;
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
    }
    int e=sum;
    int ans =-1;
    int mid=s+(e-s)/2;
    while (s<=e)
    {
        if (isPossible(arr,n,m,mid))
        {
            ans=mid;
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    
    return ans;
}
int main(){
    vector<int> arr(4);
    cout<< bookAllocation(arr[10,20,30,40], 4,2);
    return 0;
}