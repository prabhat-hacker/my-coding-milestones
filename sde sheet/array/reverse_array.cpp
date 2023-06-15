#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6};
    for(int i=0,j=5;j>=i;i++,j--){
        swap(arr[i],arr[j]);
    }
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
}