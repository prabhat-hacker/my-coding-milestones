//check whether a number divisible by 5 and 11 or not
#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    if((a%5==0)&&(a%11==0)){
        cout<<"divisible by both";
        
    }else if(a%5==0){
        cout<<"only divisible by 5";
    }else if(a%11==0){
        cout<<"only divisible by 11";
    }else{
        cout<<"not divisible by both";
    }
    return 0;
}