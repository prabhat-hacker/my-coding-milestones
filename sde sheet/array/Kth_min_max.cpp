#include<iostream>
#include<vector>
using namespace std;
int main(){
   int n;
   cin>>n;
    vector<int>arr(n);
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
   int k;
   cin>>k;
   int kmin=arr[k-1];
   int kmax=arr[n-k];
   cout<<kmin<<" "<<kmax;
}