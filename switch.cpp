#include<iostream>
using namespace std;
int main(){
    int a,b;
    char x;
    cout << "enter a: "<< endl;
    cin>> a;

    cout<<"enter b: "<< endl;
    cin>> b;

    cout<< "enter exprestion: "<< endl;
    cin >> x;

    switch(x){
        case '+' : cout<< a+b <<endl;
        break;
        case '-' : cout<< a-b<< endl;
        break;
        case '*' : cout<< a*b << endl;
        break;
        case '/' : cout<< a/b << endl;
        break;
        case '%' : cout<< a%b << endl;
        break;
        default: cout<<"wrong operation. "<< endl;
    }
    cout<<endl;
    return 0;
}