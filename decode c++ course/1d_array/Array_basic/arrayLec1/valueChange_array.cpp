#include<iostream>
using namespace std;
int main(){
    int arr[]={2,34,54,57,45,86,47,55,68,46};
    int *ptr=arr;
    int n=sizeof(arr)/4;
    for(int i=0;i<=n-1;i++){
       //cout<<i[ptr]<<" ";// value print karega 
       cout<<*ptr<<" ";
     // cout<<ptr<<" "<<endl;//cout<<ptr address print karega
      ptr++;
    }cout<<endl;
    ptr=arr;
    *ptr=8;
    ptr++;
    *ptr=9;
    ptr--;
    cout<<endl;
    for(int i=0;i<=n-1;i++){
        cout<<*ptr<<" ";
        ptr++;
    }cout<<endl;
    ptr=arr;
     
}