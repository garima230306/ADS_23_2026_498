#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,4,7,9,3};
    int n=5;
    cout<<"enter the elements of array"<<endl;
    int sum = arr[0];
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    cout<<"sum of array"<<sum;

}