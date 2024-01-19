#include<iostream>
using namespace std;

int main() { 

     int n = 5;
     int row =1;
     //print space

     while(row<=n){
     int space = n-row;
     while(space){
  cout<<" ";
     space--;
     }
     // print no
     int j=1;
     while(j<=row){
        cout<<"*";
        j++;

     }
     //print second triangle
     int star=row-1;
     while(star){
        cout<<"*";
        star--;
     }
     
   cout<<endl;
     row++;
     }
}
    
