// SORT THE ARRAY OF 0'S AND 1'S
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,zero=0;
    cout<<" size of array : ";
    cin>>n;
vector<int> v1(n);
for(int i=0;i<v1.size();i++){
   int p;
    cin>>p;
    if(p==0){
        zero++;
    }
    v1[i]=p;
}
for(int i=0;i<v1.size();i++){
    cout<<v1[i];
}cout<<endl;
for(int i=0;i<v1.size();i++){
    if(i<=zero-1){
        cout<<"0"<<" ";  }
    if(i>zero-1){
        cout<<"1"<<" ";
    }
  
}
}