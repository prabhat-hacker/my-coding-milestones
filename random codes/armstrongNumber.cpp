#include <iostream>
using namespace std;
int main(){

    int n,r,cube,sum=0,m;
    cin>>n;
    m=n;
     while(n>0){
        r=n%10;
        n=n/10;
       cube=r*r*r;
       sum=sum+cube;
     
    }
    cout<<sum<<endl;
      if(sum==m){
      cout<<"armstrong number";
    }
    else{
        cout<<"not a armstrong number";
    
    } 
   
    return 0;

}