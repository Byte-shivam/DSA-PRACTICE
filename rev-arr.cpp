#include<iostream>
using namespace std;

void reverse(int arr[],int n){
    //  int temp;
    //  for(int i=0;i<n;i++){
    //     temp=arr[i];
    //     arr[i]=arr[n-1-i];
    //     arr[n-1-i]=temp;
    //  }
    int start=0;
    int end=n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
void printArray(int arr[], int n){
    cout<<"reverse"<<endl;
    for(int i=0 ;i<n; i++)
    {
        cout<< arr[i]<<" ";
    }

}
int main(){
     int arr[10],brr[10],n,x;
     cout<<"enter n: ";
     cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     cout<<"enter x: ";
    cin>>x;
    for(int i=0;i<x;i++){
        cin>>brr[i];
    }
    reverse(arr,n);
    reverse(brr,n);

    printArray(arr,n);
    printArray(brr,n);

    return 0;
}