// #include<iostream>
// using namespace std;
// int power (int x,int y){
//     int ans=1;
//     for(int i=1; i<= y;i++){
//         ans =ans*x;
//     }
//     return ans;
// }
// int main(){
//     int a,b;
//     cin>> a>> b;
//     int answer = power(a,b);
//     cout<<answer;
// }

#include<iostream>
using namespace std;
int power (){
    int x,y;
    cin>> x>>y;
    int ans=1;
    for(int i=1; i<= y;i++){
        ans =ans*x;
    }
    return ans;
}
int main(){
    // int a,b;
    // cin>> a>> b;
    int answer = power();
    cout<<answer;
}