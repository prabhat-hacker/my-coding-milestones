#include <iostream>
using namespace std ;

int main(){

    int i,n,m,p;
    cin>>p>>m;
     for(n=p;n<=m;n++) 
   {
      for(i=1;i<=10;i++)
        {
         cout<<n*i<<"  ";
        
        }
        cout<<endl; 
    }
    return 0;
}