#include<iostream>
using namespace std;
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
void swapalternate(int arr[],int size){
    for(int i=0;i<size;i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
}
int main(){
    int even[7]={4,8,9,2,11,6,7};
    int odd[7]={2,3,6,9,1,5,10};
    
    swapalternate(even,7);
    printArray(even,7);
    cout<<endl;

    swapalternate(odd,7);
    printArray(odd,7);
    return 0;
}