#include<iostream>
using namespace std;
int main(){
   int num,rev,r;
   cout<<"enter the number\n";
   cin>>num;
   int temp=num;
   rev=0;
   while(num>0){
    r=num%10;
     rev=rev*10+r;
    num=num/10;
   
   }
   if(rev==temp){
    cout<<"number is palindrome";
    }
   else{
    cout<<"not a palindrome number";
   }

}