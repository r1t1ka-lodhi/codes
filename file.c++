#include <iostream>
using namespace std;
int main(){
    int arr[7]={1,3,5,2,4,3,6};
    int n=arr.size();
    sort(arr,arr+n);
    return 0;
}