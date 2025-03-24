#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;
    Node()
    {
        this->data = 0;
        this->prev = NULL;
        this->next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
    Node(int data, Node *next, Node *prev)
    {
        this->data = data;
        this->prev = prev;
        this->next = next;
    }
};
Node* getMid(Node* head){
    Node*slow=head;
    Node* fast=head->next;

    while(slow!=NULL && fast!= NULL){
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;
}
Node* reverse(Node*head){
    Node* curr=head;
    Node* next=NULL;
    Node* prev=NULL;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;

}
bool checkPalindrome(Node * head){
    if(head==NULL ){
        return true;
    }
    Node* middle = getMid(head);
    Node* temp=middle->next;
    middle->next= reverse(temp);
    Node* head1=head;
    Node*head2=middle->next;

    while(head2!=NULL){
        if(head1->data!=head2->data){
            return false;
        }
    }

    temp=middle->next;
    middle->next=reverse(temp);
    return true;
}

int main(){
    Node* first = new Node(1);
    Node *second = first->next = new Node(2);
    Node *third = second->next = new Node(3);
    Node *fourth = third->next = new Node(4);
    Node *five = fourth->next = new Node(5);
    Node *six = five->next = new Node(2);
    Node *last = six->next = new Node(1);
    //Node* head=first;
    if(checkPalindrome(first)){
        cout<<"is palindrome";
    }
    else{
        cout<<"is not";
    }
    return 0;
}