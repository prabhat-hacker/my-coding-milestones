#include <iostream>
using namespace std;
int main(){
    int n,i=1;
    char ch='A';
    cin>>n;
    while(i<=n){
        int j=1;
        while(j<=n){
            ch=('A'+i-1);
            cout<<ch<<" ";
            j++;

        }cout<<endl<<endl;
        i++;
    }
}