#include<iostream>
using namespace std;
bool prime(int n){
    if(n==1) return false;
    if(n==2||n==3) return true;
    if(n%2==0||n%3==0) return false;
    for(int i=5;i*i<=n;i=i+6){
        if(n%i==0||n%(i+2)==0) return false;
    }
    return true;
}
int main(){
int n;
cout<<"enter the number to check\t";
cin>>n;
if(prime(n)==true){
    cout<<n<<"  is a prime number"<<endl;
}
else cout<<n<<" is not a prime number";
}