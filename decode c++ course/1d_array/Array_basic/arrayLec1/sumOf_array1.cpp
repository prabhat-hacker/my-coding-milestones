#include <iostream>
using namespace std;
int main(){
    int n,sum=0;
    cin>>n;
    int a[n];
    for(int i=0;i<=n-1;i++){
        cin>>a[i];
        sum=sum+a[i];
    }
    cout<<sum;
}