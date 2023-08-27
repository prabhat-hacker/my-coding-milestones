//trailing zero in the factorial
//naive approach 
/*    1. find factorial of number 
      2. find how many zeros in number */
#include<iostream>
using namespace std;
double fact(int num){
    if(num==0) return 1;
    else
    return num*fact(num-1);
}
int main(){
    int n;
    int res=0;
    cin>>n;
  int f=fact(n);
  while(f%10==0){
     res++;
     f=f/10;
  }
  cout<<res;
}
