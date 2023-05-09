#include<bits/stdc++.h>
using namespace std;


struct node
{
    int data;
    node* next;
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

void DeleteFromBegining(node* &head, node* &temp)
{
    temp = head;
    head = head->next;
}

void DeleteFromEnd(node* &head, node* temp, node* &temp1)
{
    temp = head;
    while(temp->next != nullptr)
    {
        temp1 = temp;
        temp = temp->next;
    }

    temp1->next = nullptr;

}

void DeleteFromSpecificPos(node* &head, node* &temp, node* &temp1)
{
    int pos, i=1;
    int count = NodeCount(head);
    cout << "Position of Node U want to Delete: ";
    cin >> pos;

    if(pos < 1 || pos > count)
    {
        cout << "Node Does Not Exist!!!" << endl;
    }
    else
    {
        if(pos == 1)
        {
            DeleteFromBegining(head, temp);
        }
        else if(pos == count)
        {
            DeleteFromEnd(head, temp, temp1);
        }
        else
        {
            temp1 = head;
            while(i < pos-1)
            {
                temp1 = temp1->next;
                i++;
            }
            temp = temp1 -> next;
            temp1->next = temp->next;

        }
        delete temp;
    }
}

int main()
{
    node *head = nullptr;
    node *newnode = nullptr;
    node *temp = nullptr;
    node *temp1 = nullptr;
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

    DeleteFromSpecificPos(head, temp, temp1);

    DisplayLL(head,temp);

    return 0;
}


