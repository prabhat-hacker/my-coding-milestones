//check whether an year is leap year or not 
#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    if(a%400==0)
    {     
        cout<<"yes";
    }
    else
    {  
        if(a%100==0)
        {
            cout<<"not";
        }
    
        else if(a%4==0)
       {
         cout<<"leap";
       } 
       else
       {
         cout<<"not";
       }
    }
    return 0;
}