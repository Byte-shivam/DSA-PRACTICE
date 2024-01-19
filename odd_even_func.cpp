#include<iostream>
using namespace std;

int isEven(int n){
    if(n&1){
        return 0;
    }
    else
    return 1;
}
int main(){
    int a;
    cin>> a;
    if(isEven(a)){
        cout<<"even"<<endl;
    }
    else{
        cout<<"odd"<<endl;
    }
}