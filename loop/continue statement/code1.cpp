//print all number b/w 1 to 100 which are not divisible by 3
#include <iostream>
using namespace std;
int main(){
  int i; 
   
   for(i=0; i<100;i++)
   {
    if(i%3==0)
    {
        continue;
    }
   
   cout<<i<<endl;
   }
    return 0;
}