#include<iostream>
using namespace std;
int addition(int a,int b=10){
    return a+b;
}
int multiply(int a ,int b){
    return a*b;
}
int divide(int a,int b){
    return a/b;
}
int main(){
    cout<<addition(5,7)<<endl;
    cout<<multiply(2,3)<<endl;
    cout<<divide(5,4)<<endl;
    return 0;
}