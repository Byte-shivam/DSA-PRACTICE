#include<iostream>
using namespace std;
int maxNum(int arr[], int size){
    int maximum = INT_MIN;
    for(int i=0;i<size; i++){
        maximum= max(maximum , arr[i]);
}
return maximum;
}
int minNum(int arr[], int size){
    int minimum = INT_MAX;
    for(int i=0;i<size; i++){
        minimum= min(minimum , arr[i]);
}
return minimum;
}
int main(){
    int arr[10],size;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"maximum value is: "<< maxNum(arr,size)<<endl;
    cout<<"minimum value is: "<< minNum(arr,size)<<endl;
    return 0;
}