#include <iostream>
#include<stack>
using namespace std;

class Stack{
    public:

    int *arr;
    int top;
    int size;
    Stack(int size){
        this->size=size;
        arr= new int[size];
        top=-1; 
    }
    void push(int element){
        if(size-top>1){
            top++;
            arr[top]=element;
        }
        else{
            cout<<"Stack Overflow"<<endl;
        }
    }
    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<" Stack Underflow" <<endl;
        }
    }
    int peek(){
        if(top>=0 && top<size){
            return arr[top];
        }
        else{
            cout<<"stack is empty"<<endl;
            return -1;
        }
    }
    bool isEmpty(){
        if(top=-1){
            return true;
        }
        return false;
    }
};
int main(){
    // stack<int> s;->>this is using STL
    Stack st(3);//->> this was using array implementation

    st.push(34);
    st.push(47);
    st.push(73);
    // s.pop();
    cout<<st.peek()<<endl;;

    if (st.isEmpty())
    {
        cout<<"is empty";       
    }
    else
    {
        cout<<"is not empty";
    }
    
    
    return 0;
}