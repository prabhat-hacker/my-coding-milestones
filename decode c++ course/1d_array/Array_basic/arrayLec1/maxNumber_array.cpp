#include<iostream>
#include<climits>
using namespace std;
int main(){
 int a[]={1,23,45,234,223,564,64,67};
 int n=(sizeof(a))/4;
 cout<<" number of elements : "<<n<<endl;;
 int max= INT_MIN ;
 for(int i=0;i<=n-1;i++){
    if(max<a[i]){

     max=a[i];}

 }
 cout<<" max number is : "<<max;


}