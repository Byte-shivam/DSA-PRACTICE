#include<iostream>
using namespace std;
int bits(int n){
    int count=0,rem=0,i=0;
    // for(int i=0; i<n;i++)
    while(n!=0)
    {
        rem=n%2;
        if(rem==1){
            count++;
        }
        n/=2;
        i++;
    }
    return count;
}
int main(){
    int n;
    cin>> n;
    cout<<bits(n);
    return 0;
}