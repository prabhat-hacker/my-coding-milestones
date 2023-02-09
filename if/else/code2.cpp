//check whether a number is negative, positive or zero
#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
     if(a>0)
        {
            cout<<"positive";
        }
    else{
       if(a<0) 
       {
        cout<<"negative";
       }
       else
       {
        cout<<"zero"; 
       }
    }
return 0;    
}