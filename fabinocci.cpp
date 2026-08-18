#include<iostream>
using namespace std;
int fab(int n){
    if(n==0){
        return 1;
    }
    else if(n==1)
    {
        return 1;
    } 

            return fab(n-1)+fab(n-2);
    }

    int main(){
        int n;
        cout<<"enter the number for fabinocci"<<endl;
        cin>>n;
        cout<<"fabinocci series";
        for(int i =0;i<n;i++){
            cout<<fab(i);
        }
    
    }
