#include<iostream>
using namespace std;
void TransferArray(int arr[],int size,int temp){
    temp=arr[0];
    arr[0]=arr[1];
    arr[1]=temp;

}
int main(){
    int n;
    int arr[7]={1,5,8,9,4,3,2};
    cout<<"enter the size of elements of array"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}