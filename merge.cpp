#include<iostream>
using namespace std;
void Mergearray(int arr1[],int arr2[],int n,int m){
    int merge[n+m];
    for(int i =0;i<n;i++){
        merge[i]=arr1[i];
    }
    
        for(int i=0;i<m;i++){
        merge[n+i] =arr2[i];  
        }
    cout<<"merge array";
    for(int i=0;i<n+m;i++){
        cout<<merge[i]<<" ";

    }
    cout<<endl;

    }

int main(){
    int arr[5]={1,8,5,7,9};
    int arr1[5]={3,5,9,2,6};
    cout<<"print the value of merge array"<<endl;
    Mergearray(arr1 ,arr ,5,5);
    
}