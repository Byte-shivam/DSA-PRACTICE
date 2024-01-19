#include<iostream>
using namespace std;

int main(){
    //sum of even no`s.
    int sum =0;
    int a =2;
    int n;

    cout<<"Enter the no: "<< endl;
    cin>>n;
   while(a<=n){
    sum=sum+a;
    a=a+2;
   }
   cout<<"sum is: "<< sum<<endl;
}