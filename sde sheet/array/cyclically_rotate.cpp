//Cyclically rotate an array by p time
#include<iostream>
using namespace std;
int main(){
    int arr[7]={0,1,2,4,5,6,7};
    int n=7;
    int p;
    cin>>p;
     for(int j=0;j<=p;j++){
     int temp=arr[n-1];
    for(int i=0;i<n-1;i++){
        arr[n-1-i]=arr[n-2-i];
    }
    arr[0]=temp;
    }
    for(int k=0;k<n;k++){
        cout<<arr[k]<<" ";
    }
}