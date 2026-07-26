#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node*link;
 //constructor
    Node(int value)
    {
        data=value;
        link=NULL;
    }
};
//global top pointer
Node*top=NULL;
bool isempty()
{
    return(top==NULL);
}
void push(int value)
{
    Node*ptr=new Node(value);
    ptr->link=top;
    top=ptr;

    cout<<value<<"pushed into the stack\n";
}
 else{
        Node*ptr=top;
        cout<<ptr->data<<"popped from the stack.\n";
        top=top->link;
        delete ptr;
    }
}
void show Top()
{
    if(isempty())
    {
        cout<<""
    }
}
