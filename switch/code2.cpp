#include <iostream>
using namespace std;
int main(){
int n1,n2;
char op;
cin>>n1>>n2>>op;
switch (op)
{
case '+':
cout<<n1+n2<<endl;
    break;
    case '-':
cout<<n1-n2<<endl;
    break;
    case '*':
cout<<n1*n2<<endl;
    break;
    case '/':
cout<<n1/n2<<endl;
    break;

default:
cout<<"madrchod i am not a scientific calculator";
    break;
}
}