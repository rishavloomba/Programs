#include<iostream>
using namespace std;

struct node{
    int data;
    node *next;
};

struct node *start = NULL;

int main()
{
    int x;
    struct node *temp = new node();
    //to insert at begining.
    for(int i=0;i<5;i++)
    {
        cin>>x;
        node *ptr = new node();
        ptr->data = x;
        ptr->next = NULL;
        if(start == NULL)
        {
            start = ptr;
        }
        else
        {
            temp = start;
            while(temp->next!=NULL)
            {
                temp = temp->next;
            }
            temp->next=ptr;
        }
    }

    //To insert at front
   /* for(int i=0;i<5;i++)
    {
        cin>>x;
        node *ptr = new node();
        ptr->data=x;
        ptr->next=start;
        start = ptr;
    }*/


    node *t;
    t=start;
    while(t!=NULL)
    {
        cout<<t->data<<" ";
        t=t->next;
    }


    //To insert at end;
   /* int y;
    cout<<"Enter the element to insert at end:"<<endl;
    cin>>y;
    node *n = new node();
    n->data = y;
    t=start;
    while(t->next!=NULL)
    {
        t = t->next;
    }
    n->next = t->next;
    t->next = n;
    t=start;
    while(t!=NULL)
    {
        cout<<t->data<<" ";
        t=t->next;
    }*/
    
    //Insert at front
    /*int z;
    node *n1 = new node();
    cout<<"Enter element to insert at front:"<<endl;
    cin>>z;
    n1->data = z;
    n1->next = start;
    start = n1;
    t= start;
    while(t!=NULL)
    {
        cout<<t->data<<" ";
        t= t->next;
    }*/

    //Insert at specific position
    /*int g,a,pos;
    node *n2 = new node;
    cout<<"Position at which you wnt to enter:"<<endl;
    cin>>pos;
    cout<<"Element you want to enter:"<<endl;
    cin>>a;
    g=pos-2;
    n2->data=a;
    t=start;
    for(int i=0;i<g;i++)
    {
        t=t->next;
    }
    n2->next = t->next;
    t->next = n2;
    t=start;
    while(t!=NULL)
    {
        cout<<t->data<<" ";
        t=t->next;
    }*/ 

    //Sorting the list
/*  node *p;
    int temp4;
    t=start;
    p=start;
    while(t!=NULL)
    {
        p=t->next;
        while(p!=NULL)
        {
            if((t->data)>(p->data))
            {
                temp4 = t->data;
                t->data = p->data;
                p->data = temp4;   
            }
            p=p->next;
        }
        t=t->next;
    }
    cout<<endl;
    t=start;
    while(t!=NULL)
    {
        cout<<t->data<<" ";
        t=t->next;
    }*/

    //Searching in linked list.....
    int d;
    int count = 0;
    cout<<"Element you want to search:"<<endl;
    cin>>d;
    t=start;
    while(t!=NULL)
    {
        if(t->data==d)
        {
            cout<<"Found at "<<count;
        }
        count++;
        
        t=t->next;
    }
}