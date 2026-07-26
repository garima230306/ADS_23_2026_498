#include<iostream>
using namespace std;
const int MAX=10;
int stack[MAX];
int top=-1;
void push(int item){
    if(top==MAX -1)
    {
        cout<<"stack overflow"<<endl;
    }
    else
    {
        stack[++top]
    }
}


}