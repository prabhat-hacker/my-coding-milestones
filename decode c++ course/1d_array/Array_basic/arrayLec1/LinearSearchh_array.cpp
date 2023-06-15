#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<=n-1;i++){
        cin>>a[i];

    }
    int x;
    cin>>x;
    for(int i=0;i<=n-1;i++){
        if(a[i]==x){
            cout<<a[i]<<" present at "<<i<<endl;
            
        }
    }

}