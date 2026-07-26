#include<iostream>
using namespace std;
void update(int arr[],int n){
    cout<<endl<<"inside the function"<<endl;
    arr[0]=120;
    for(int i=0;i<3;i++){
        cout<<arr[i];
    }cout<<endl;
    cout<<"going back to main function"<<endl;
}
int main(){
    int arr[3]={1,2,5};
    update(arr,3);
    cout<<"printing in the main function"<<endl;
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
}
