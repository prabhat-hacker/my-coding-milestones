/*PERFECT NUMBER 
sum of the factors of number is
 double the number*/
#include <iostream>
using namespace std;
int main(){
    int i,n,sum=0;
    cout<<"enter the value of n : ";
    cin>>n;
    for(i=1;i<=n;i++)
    {   if(n%i==0)
        {
         sum=sum+i;
        }

    }
    if(sum/n==2){
        cout<<"n is a perfect no";
    }else{
        cout<<"not a perfect no";
    }
}