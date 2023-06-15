#include<iostream>
using namespace std;
int main(){
int arr[]={0,9,3,100,5,6,7,-10,9};
int a=arr[0];
int b=arr[0];
for(int i=1;i<9;i++){
if(arr[i]<a) a=arr[i];
if(arr[i]>b) b=arr[i];
}
cout<<a<<" "<<b;
}