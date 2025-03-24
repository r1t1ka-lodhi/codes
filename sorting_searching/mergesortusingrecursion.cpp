#include <iostream>
using namespace std;

void merge(int *arr,int s , int e){
    int mid=(s+e)/2;
    int len1=mid-s+1; 
    int len2=e-mid;
    int *first=new int[len1];
    int *second=new int[len2];

    int mainarrayinx=s;
    for(int i=0;i<len1;i++){
        first[i]=arr[mainarrayinx++];
        
    }
    mainarrayinx=mid+1;
    for(int i=0;i<len2;i++){
        second[i]=arr[mainarrayinx++];

    }
    //cout<<"hi";
    //merge
    int index1=0;
    int index2=0;
    mainarrayinx=s;

    while(index1<len1 && index2<len2){
        if(first[index1]<second[index2]){
            arr[mainarrayinx++]=first[index1++];
        }
        else{
            arr[mainarrayinx++]=second[index2++];
        }

    }
    while(index1<len1){
        arr[mainarrayinx++]=first[index1++];
    }
    while(index2<len2){
        arr[mainarrayinx++]=second[index2++];
    }
    delete []first;
    delete []second;


}

void mergesort(int *arr, int s ,int e){
    //base
    if(s>=e){
        return;
    }
    int mid=(s+e)/2;

    //left
    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);
    merge(arr,s,e);
}


int main(){
    int arr[5]={2,5,1,6,9};
    int n=5;

    mergesort(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
    return 0;
}