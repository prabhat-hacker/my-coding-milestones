//write a program to find maximum between three number
#include <iostream>
using namespace std;
 int main(){
    int a,b,c;
    cin>>a>>b>>c;

    if(a>b){
        if(a>c){
            cout<<a;
        }else{
            cout<<c;
        }
    }
    else 
    { if(b>c){
            cout<<b<<endl;;
        }else{
            cout<<c<<endl;
        }
    }  
    
    
    
return 0;
}