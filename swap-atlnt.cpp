#include<iostream>
using namespace std;
void printArray(int arr[],int n){
     cout<<"after swapping: "<<endl;
     for(int i=0;i<n;i++){
     cout<<arr[i];
     }
      cout<<endl;
}

void swap(int arr[],int n ){
    for(int i=0;i<n;i+=2){
        if((i+1)<n)
        swap(arr[i],arr[i+1]);
    }
}

int main(){
    int odd[]={1,2,3,4,5};
    int even[]={1,2,3,4,5,6};
    int n1=sizeof(odd)/sizeof(odd[1]);
    int n2=sizeof(even)/sizeof(even[1]);

    swap(odd,n1);
    printArray(odd,n1);

    swap(even,n2);
    printArray(even,n2);

    return 0;
}