#include <iostream>
using namespace std;
int main(){
    int n,i=1;
    cin>>n;
    while(i<=n){
       int j=1;
       int y=n-i+1;
       while(j<=y){
           cout<<"*";
           j++;
       }cout<<endl;

       i++;
    }
}