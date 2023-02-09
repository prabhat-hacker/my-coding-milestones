#include <iostream>
using namespace std;
int main()
{
  int key,A[10],n=10;
  cout<<"enter numbers :"<<endl;
  
  for(int i=0;i<n;i++)
   {
     cin>>A[i];
   }
   cout<<"enter the key :"<<endl;
   cin>>key;
   for(int i=0;i<n;i++)
   {
      if(key==A[i]){
        cout<<"found at "<<i<<"  ";
        return 0;
      } 

   }
   cout<<"not found";
    return 0;
   



 
}