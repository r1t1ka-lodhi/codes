#include <iostream>
using namespace std;
class dqueue
{
private:
    int *arr;
    int front;
    int rear;
    int size;
public:
    dqueue(int n){
        size=n;
        arr=new int[size];
        front=-1;
        rear=-1;

    }

    bool pushFront(int x){
        if(isFull()){
            // cout<<"Queue is full"<<endl;
            return false;
        }
        else if(isEmpty()){
            front=rear=0;
        }
        else if(front==0 && rear!=size-1){
            front =size-1;
        }
        else{
            front--;
        }
        arr[front]=x;
        return true;
    }
    bool pushRear(int x){
        if(isFull()){
            // cout<<"Queue is full"<<endl;
            return false;
        }
        else if(isEmpty()){
            front=rear=0;
            // arr[rear]=value;
            // rear++;
        }
        else if( rear=size-1 && front !=0){
            rear=0;
            // arr[rear]=value;
            // rear++;
        }
        else{
            rear++;
        }
        arr[rear]=x;
        return true;
    }
    int popFront(){
        if(isEmpty()){
            // cout<<"queue is empty"<<endl;
            return -1;
         }
        int ans=arr[front];
        arr[front]=-1;
        if(front==rear){
            front =rear=-1;
        }
        else if(front==size-1){
            front=0;
        }
        else{
            front++;
        }
        return ans;
    }
    int popRear(){
        if(isEmpty()){
            // cout<<"queue is empty"<<endl;
            return -1;
         } 
        int ans=arr[rear];
        arr[rear]=-1;
        if(front==rear){
            front =rear=-1;
        }
        else if(rear=0){
            rear=size-1;
        }
        else{
            rear--;
        }
        return ans;
    }
    int getFront(){
        if(isEmpty()){
            return -1;
        }
        return arr[rear];
    }
    bool isEmpty(){
        if(front==-1){
            return true;
        }
        return false;
    }
    bool isFull(){
        if((front==0 && rear==size-1) || ( front !=0 && rear==(front-1) %(size-1))){
            // cout<<"Queue is full"<<endl;
            return true;
        }
        return false;

    }
};


int main(){
    
    return 0;
}