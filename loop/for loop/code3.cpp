//display n terms of natural number and their sum
#include <iostream>
using namespace std;
int main(){

    int i,n,sum=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<i<<" ";
        sum= sum+i;
        //cout<<sum<<endl;
    }
     cout<<""<<endl;
     cout<<"sum of number = "<<sum;
    return 0;
}