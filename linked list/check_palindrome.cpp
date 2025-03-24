#include <iostream>
#include<vector>
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
bool isPalindrome(vector<int> arr)
{
    int n = arr.size();
    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        if (arr[s] != arr[e])
        {
            return 0;
        }
        s++;
        e--;
    }
    return 1;
}
bool checkPalindrome(Node * head)
{
    vector<int> arr;
    Node *temp = head;
    while (temp != NULL)
    {
        arr.push_back(temp->data);
        temp = temp->next;
    }
    return isPalindrome(arr);
}

int main()
{
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