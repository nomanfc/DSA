#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

void DisplayLL (node* &head, node* &temp)
{
    temp = head;

    cout << "Nodes Are : ";

    while(temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int NodeCount (node* &head)
{
    int count = 0;
    node* temp = head;

    temp = head;
    while(temp != nullptr)
    {
        count++;
        temp = temp->next;
    }

    return count;
}

void InsertAtBegining(node* &head)
{
    node* nn = new node;
    cout << "Add Value of the Node At Beginning: ";
    cin >> nn->data;
    nn->next = head;
    head = nn;
}

void InsertAtEnd(node* &head)
{
    node* t = nullptr;
    node* nn = new node;


    cout << "Add Value of the Node At the End: ";
    cin >> nn->data;
    nn->next = nullptr;

    t = head;
    while(t->next != nullptr)
    {
        t = t->next;
    }

    t->next = nn;
}

void InsertAtAnyPosition(node* &head)
{
    int pos, i = 1;
    int count = NodeCount(head);

    cout << "Enter Position: " ;
    cin >> pos;

    if(pos == 1 )
    {
        InsertAtBegining(head);
    }
    else if(pos == count+1)
    {
        InsertAtEnd(head);
    }
    else
    {
        if(pos > count+1)
        {
            cout << "Invalid Position!" << endl;
        }
        else
        {
            node* nn = new node;
            node* tmp = nullptr;

            cout << "Enter Node Value At Position " << pos <<" : ";
            cin >> nn->data;

            tmp = head;
            while(i < pos-1)
            {
                tmp = tmp->next;
                ++i;
            }

            nn->next = tmp->next;
            tmp->next = nn;
        }

    }
}

int main()
{
    node *head = nullptr;
    node *newnode = nullptr;
    node *temp = nullptr;
    int choice = 1;
    int TotalNodes = 0;

    while(choice)
    {
        newnode = new node;
        cout << "Enter Node Value: ";
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

        cout << "Add More Value? (1/0) : ";
        cin >> choice;
    }

    InsertAtAnyPosition(head);

    DisplayLL(head,temp);

    return 0;
}
