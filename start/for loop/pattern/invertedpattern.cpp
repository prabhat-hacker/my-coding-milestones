#include <iostream>
using namespace std ;
int main(){
int row;
cin>>row;
 for(int i=1;i<=row;i++) 
 { 
    int col=(row+1)-i;
   for(int j=1;j<=col;j++){
    cout<<j<<"  ";
   }cout<<endl;
 }

    return 0;
}