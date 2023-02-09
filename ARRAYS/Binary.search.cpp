//binary search of array element
#include <iostream>
using namespace std;
int main(){
    int a[10]={1,11,21,31,41,51,61,71,81,91};
    int l=0,h=9,key,mid;
    cout<<"enter key :"<<endl;
    cin>>key;
    while(l<=h)
    {    
         mid=(l+h)/2;
       if(key==a[mid])
         {
         cout<<"found at "<<mid;
         return 0;
         } 
       else if(key<a[mid])
         {
          h=mid-l;
         }
       else
         {
           l=mid+l;
         }
    }
    cout<<"not found";
    return 0;
    
}