#include <iostream>
using namespace std;

int main(){
    int x,n;
    // chek the prime no or not a prime no
    int num=2;
    cout<<"enter no: "<< endl;
    cin<<n;
    while(num/2<n){
        x=n%num;
        if(x==0){
            cout<<"not a prime no";
            break;
        }
            num++;
    }
    cout<<"prime no";
}