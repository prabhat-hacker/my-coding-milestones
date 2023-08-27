/* Euclidean Algorithim */
#include<iostream>
using namespace std;
int gcd(int a,int b){
    if(b==0) return a;
    else return gcd(b,a%b);
}
int main(){
int a,b;
cin>>a>>b;
int ans=gcd(a,b);
cout<<"gcd of a and b is "<<ans;
}