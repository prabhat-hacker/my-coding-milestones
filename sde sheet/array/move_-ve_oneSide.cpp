#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int arr[]={1,2,-3,5,-6,-1,-7,-8,1,4,6,-23};
    int n=sizeof(arr)/4;
    // sort(arr,arr+n);
    int i=0,j=0;
    while(j<n){
        if(arr[j]<0){
            swap(arr[j],arr[i]);
            i++;
            j++;
        }
        else j++;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}