#include<iostream>
#include<stack>
using namespace std;
int main()
{
    

    string postfix;
    stack<string>st;
    cout<<"enter the value of postfix"<<endl;
    cin>>postfix;
    for(int i =0;i<postfix.length();i++)
    {
         char ch=postfix[i];
         if(isalnum(ch))
         {
            st.push(string(1,ch));
         }
            else{
                string b=st.top();
                st.pop();
                 st.push("(" + a + ch + b + ")");
        }
    }

    cout << "Infix Expression: " << st.top();

    return 0;
}
        

