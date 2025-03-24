#include <iostream>
using namespace std;

int sum(int arr[],int size,int ans=0){
  cout<<"firse"<<endl;
  if(size==0){
    return 0;
  }
  return arr[size-1]+sum(arr,size-1);
}
int main(){
  int arr[5]={3,1,5,1,6};
  int issum=sum(arr,5);
  cout<<"sum is"<<issum;
  return 0;
}