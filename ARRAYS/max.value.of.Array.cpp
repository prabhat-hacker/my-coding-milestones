#include <iostream>
using namespace std;
int main(){
    int A[]={1,23,344,33,46,246,376,7543,122,342,533};
    int max=A[0];
    for(int i=1;i<=10;i++)
    {
        if(A[i]>max){
            max=A[i];
        }
    }
         cout<<max;
        
    }
   
