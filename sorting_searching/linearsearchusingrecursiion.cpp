#include <iostream>
using namespace std;

int linearsearch(int arr[],int key,int size){
  cout<<size<<endl;
  if(size==0){
    return false;
  }
  if(arr[0]==key){
    return true;
  }
  else{
    bool rem=linearsearch(arr+1,key,size-1);
    return rem;
 
  }
}

int main(){
  int arr[5]={3,1,5,1,6};
  int size=5;
  int key=9;
  int ans=linearsearch(arr,key,size);
  if(ans){
    cout<<"fount";

  }
  else{
    cout<<"not found";
  }
  return 0;
}