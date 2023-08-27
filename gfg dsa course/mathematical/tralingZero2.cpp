
                /*
                 1x2x3x4x5x6x7x8x9x10x11x.........25......n
                 trailing zeros=[n/5]+[n/25]+[n/125]+......
                 t(c)=>
                 5^k<=n
                 k<=logN
                 0(logN) 
                */


#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int res=0;
    for(int i=5;i<=n;i=i*5){
        res=res+n/i;
    }
    cout<<res;
}