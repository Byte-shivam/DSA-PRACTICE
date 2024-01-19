#include<iostream>
using namespace std;

int fact (int n){
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
    
}
int nCr(int n, int r){
    int nrm= fact(n);
    int drn= fact(r)*fact(n-r);
    int ans = nrm/drn;
    return ans;
}
int main(){
    int n,r;
    cin>>n>>r;
    cout<<"answer is: "<<nCr(n,r)<<endl;

}