#include <iostream>
using namespace std;
int main(){
    int n,i,fact=1;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        fact*=i;
    }
    cout<<fact;
}