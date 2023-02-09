#include <iostream>
using namespace std;
int main(){
    int sum=0,A[10]={1,2,3,4,5,6,7,8,9,10};
     for(int i=0;i<=9;i++){
        
        sum=sum+A[i];
     }
     cout<<sum;
     return 0;
}