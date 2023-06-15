#include <iostream>
using namespace std;
int main(){
    int n,i=1;
    cin>>n;
    while(i<=n){
        int j=1;
        while(j<=n){
            int y=i-1;
            if(j<=y){
                cout<<" ";
            }else{
                cout<<"*";
            }

            j++;
        }cout<<endl;
        i++;


    }
}