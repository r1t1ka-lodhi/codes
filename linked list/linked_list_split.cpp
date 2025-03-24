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
Node *insertInEmptyList(Node *last, int data){
    if (last != nullptr) return last;
    
    // Create a new node
    Node *newNode = new Node(data);
  
    // Point newNode to itself
    newNode->next = newNode;
  
    // Update last to point to the new node
    last = newNode;
    return last;
}
void splitTheLL(Node*head,int len){
    int mid=(len/2)-1;
    //cout<<mid;
    Node*temp=head;
    int cnt=0;
    while(cnt<=mid){
        temp=temp->next;
        cnt++;
    }
    Node* middle=temp->next;
    // cout<<middle->data;
    temp->next=head;
    cout<<"first head is"<<head->data<<endl;
    Node*head1=middle;
    while(cnt<=len){
        middle=middle->next;
        cnt++;
    }
    middle->next=head1;
    cout<<"second head is"<<head1->data<<endl;
    
}

int main()
{
    // Initilize and allocate memory for nodes
    Node* first = new Node(1);
    Node* second =first->next= new Node(2);
    Node* third =second->next= new Node(3);
    Node* fourth =third->next= new Node(4);
    Node* five = fourth->next=new Node(5);
    Node* six = five->next=new Node(6);
    Node* last = six->next=new Node(7);
    Node* head=six->next=first;
    splitTheLL(head,5);
    return 0;
}