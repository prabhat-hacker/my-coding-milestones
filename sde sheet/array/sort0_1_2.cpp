//dutch flag mathod
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int arr[]={1,2,2,0,2,1,2,1,2,1,0,2};
    int n=12;
    int low=0,high=n-1,mid=0;
    
  for(int i=0;i<n;i++){
    if(arr[mid]==0){
        swap(arr[mid],arr[low]);
        low++;
        mid++;
    }
    else if(arr[mid]==2){
        swap(arr[mid],arr[high]);
             high--;
    }
    else{
        mid++;
    }
  }
 for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
 }
}