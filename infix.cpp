#include<iostream>
using namespace std;
int getPrecedence(char ch)
{
    if(ch=='+' || ch=='-') 
    return 1;

 else if   (ch=='*' || ch=='/')
    return 2;


  else  if(ch=='^'|| ch=='!')
    return 3;
    else 
    return -1;

}

int main(){
    
    char ch;

    cout<<"enter the value of character"<<endl;

    

    cout<<getPrecedence(ch);
}
