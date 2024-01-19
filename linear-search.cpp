#include<iostream>
using namespace std;
 bool iskeyFound(int arr[], int n,int key){
    for(int i=0; i<n; i++){
        if(arr[i]==key)
        return 1;
    }
    return 0;
 }
 int main ()
{
    int arr[10],key,n;
    // arr[]={1,5,6,8,9,4,2};

    cin>>n;
    cout<<"enter the element of array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>key;
    bool search = iskeyFound(arr,n,key);
    if(search){
        cout<<"key is found"<<endl;
    }
    else{
    cout<<"key is not found"<<endl;
    }
    return 0;
}