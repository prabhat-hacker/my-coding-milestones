//a*b=gcd(a,b)*lcm(a,b)
#include<iostream>
using namespace std;
int gcd(int a,int b){
    if(b==0) return a;
    else return gcd(b,a%b);
}
int main(){
int a,b;
cin>>a>>b;
cout<<"lcm of a and b is : "<<(a*b)/gcd(a,b)<<endl;
}