#include <iostream>
using namespace std;

class TwoStack{
    int *arr;
    int top1;
    int top2;
    int size;
    public:
    TwoStack(int s){
        this->size=s;
        top1=-1;
        top2=s;
        arr=new int[s];

    }
    void push1(int e){
        if(top2-top1>1){
            top1++;
            arr[top1]=element;
        }
        else{
            cout<<"Stack Overflow"<<endl;
        } 
    }

    void push2(int e){
        if(top2-top1>1){
            top2--;
            arr[top2]=element;
        }
        
    }

    ont pop1(){
        if(top1>-1){
            int ans=arr[top1];
            top1--;
            return ans;
        }
        else{
            return -1;
        }
    }

    int pop2(){
        if(top2>-1){
            int ans=arr[top2];
            top2++;
            return ans;
        }
        else{
            return -1;
        }
    }
};
int main(){
    
    return 0;
}