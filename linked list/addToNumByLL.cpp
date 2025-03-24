#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        this->next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    Node(int data, Node *next)
    {
        this->data = data;
        this->next = next;
    }
};
Node *reverse(Node *head)
{
    Node *curr = head;
    Node *next = NULL;
    Node *prev = NULL;
    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
void insertAtTail(Node *head, Node *tail, data)
{
    Node *temp = (data);
    if (heaad == NULL)
    {
        head = temp;
        tail = temp;
        return;
    }
    else
    {
        tail->next = temp;
        tail = temp;
    }
    return;
}
Node *add(Node *first, Node *second)
{
    int carry = 0;
    Node *ansHead = NULL;
    Node *ansTail = NULL;
    while (first!=NUll || second!=NULL || carry!= 0)
    {
        int val1;
        int val2;
        if (first!=NULL)
        {
            val1=first->data;
        }
        if (second!=NULL)
        {
            val2=second->data;      
        }
        int sum=carry+ val1 + val2;
        int digit=sum%10;
        insertAtTail(ansHead,ansTail,digit);
        carry=sum/10;
        if(first!=NULL)
            first=first->next;
        if(second!=NULL)
            second=second->next;
    }
    

    // while (first != NULL && second != NULL)
    // {
    //     int sum = carry + first->data + second->data;
    //     int digit = sum % 10;
    //     int carry = sum / 10;
    //     insrtAtTail(ansHead, ansTail, digit);
    //     first=first->next;
    //     second=second->next;
    // }
    // while (first != NULL)
    // {
    //     int sum = carry + first->data;
    //     int digit = sum % 10;
    //     int carry = sum / 10;
    //     insrtAtTail(ansHead, ansTail, digit);
    //     first=first->next;
    // }
    // while (second != NULL)
    // {
    //     int sum = carry + second->data;
    //     int digit = sum % 10;
    //     int carry = sum / 10;
    //     insrtAtTail(ansHead, ansTail, digit);
    //     second=second->next;
    // }
    // while (carry != 0)
    // {
    //     int sum = carry;
    //     int digit = sum % 10;
    //     int carry = sum / 10;
    //     insrtAtTail(ansHead, ansTail, digit);
    // }


    return ansHead;
}
Node *addTwoLL(Node *first, Node *second)
{
    first = reverse(first);
    second = reverse(second);
    Node *ans = add(first, second);

    ans = reverse(ans);

    return ans;
}
int main()
{
    Node *first = new Node(1);
    Node *second = first->next = new Node(2);
    Node *third = second->next = new Node(3);
    Node *fourth = third->next = new Node(4);
    Node *five = fourth->next = new Node(5);
    Node *six = five->next = new Node(6);
    Node *last = six->next = new Node(7);
    Node *head = six->next = first;
    return 0;
}