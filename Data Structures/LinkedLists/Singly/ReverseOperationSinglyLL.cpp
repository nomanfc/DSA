#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
};



void ReverseLL(node* &head)
{
    node *prevnode = nullptr, *currentnode = nullptr, *nextnode = nullptr;

    currentnode = nextnode = head;
    while(nextnode != nullptr)
    {
        nextnode = nextnode->next;
        currentnode->next = prevnode;
        prevnode = currentnode;
        currentnode = nextnode;
    }

    head = prevnode;
}

int main ()
{
    node *head = nullptr, *newnode = nullptr, *temp = nullptr;
    int choice = 1;

    while(choice)
    {
        newnode = new node;
        cout << "Enter value : " ;
        cin >> newnode->data;
        newnode->next = nullptr;

        if(head == nullptr)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }

        cout << "Want to continue? (1/0): ";
        cin >> choice;
    }

    ReverseLL(head);

    temp = head;
    while(temp!=nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
