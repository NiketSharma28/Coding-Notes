//traverse the element of singly linked list
#include<iostream>
using namespace std;
class node{
    public :
    int data;
    node *next;
};
print(node* a)
{
    while(a!=NULL)
    {
        cout<<a->data<<endl;
        a=a->next;
    }
}

int main()
{
    node* head=NULL;
    node* n1=NULL;
    node* n2=NULL;
    node* tail=NULL;

    head =new node();
    n1 =new node();
    n2 =new node();
    tail =new node();

    head->data=3;
    head->next=n1;

    n1->data=6;
    n1->next=n2;

    n2->data=9;
    n2->next=tail;

    tail->data=12;
    tail->next=NULL;

    print(head);
}