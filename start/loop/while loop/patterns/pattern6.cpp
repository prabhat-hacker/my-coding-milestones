#include <iostream>
using namespace std;
int main()
{
    int n,i=1;
    cin>>n;
 while(i<=n)
    {
       int j=1;
       while(j<=n){
             int y=1;
            y=n-i;
           if(j<=y){
            cout<<" ";
            } 
            else{
                cout<<"*";
            }
              j++;
           }cout<<endl;
          
         i++;
       }
       


    
}