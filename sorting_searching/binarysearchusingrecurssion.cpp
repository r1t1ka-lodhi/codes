#include <iostream>
using namespace std;

bool binarysearch(int arr[],int s,int e, int key){
  //base case
  int mid=s+(e-s)/2;
  if(s>e){
    return false;
  }
  if(arr[mid]==key){
    return true;
  }
  else{
    if(arr[mid]>key){
      e=mid-1;
      return binarysearch(arr,s,e,key);
    }
    if(arr[mid]<key){
      s=mid+1;
      return binarysearch(arr,s,e,key);
    }
  }
}
int main(){
  int arr[5]={3,1,5,1,6};
  int s=0,e=5;
  int key=9;
  int ans=binarysearch(arr,s,e,key);
  if(ans){
    cout<<"found";

  }
  else{
    cout<<"not found";
  }
  return 0;
}