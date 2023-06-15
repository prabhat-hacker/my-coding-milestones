#include<iostream>
using namespace std;
void method1(int arr[],int n){
    sort(arr,arr+n);
}
void method2(int arr[],int n){
    int c0=0,c1=0,c2=0,c3=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0) c0++;
        else if(arr[i]==1) c1++;
        else if(arr[i]==2) c2++;
        else c3++;
    }
    for(int i=0;i<n;i++){
        if(i<c0) arr[i]=0;
        else if(i<(c0+c1)) arr[i]=1;
        else if(i<(c0+c1+c2)) arr[i]=2;
        else arr[i]=3;
    }
}
void method3(int arr[],int n){
    int low=0,high=n-1,mid=0;
   while(mid<=high){
     if(arr[mid]==0){
        swap(arr[mid],arr[low]);
        low++;
        mid++;
     }
     else if(arr[mid]==3){
        swap(arr[mid],arr[high]);
        high--;
     }
     else mid++;
   }
   while(low<=high){
    if(arr[low]==2){
        swap(arr[low],arr[high]);
        high--;
    }
    else low++;

   }

}
int main(){
    int arr[]={1,2,3,0,3,2,1,0,2,3,1,3,2,0,1};
    int n=sizeof(arr)/4;
   // sorting
  //method1(arr,n); //tc=nlogn
  //method2(arr,n); // tc=n
  // method3(arr,n);   //tc=n   dutch flag method
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}