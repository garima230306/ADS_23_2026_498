#include<iostream>
using namespace std;
void printArray(int arr[],int size){
    cout<"printing the array"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"printing done"<<endl;
}
int main(){
    int number[15];
    cout<<"value at index"<<number[14]<<endl;
}

int second[3]={5,7,9};
cout<<"value at index 2"<<second[2];
 int third[15]={2,5};
  int n=15;
  printArray(third,15);
   int fourth[10]={0};

    n = 10;
   printArray(fourth,10);
    
   int fifth[10]={1};
    n=10;
   cout<<"printing the array"<<endl;
   for(int i=0;i<n;i++){
    cout<<fifth[i]<<" ";
   }


   cout<<"everything is fine"<<endl;
   return 0;
}
