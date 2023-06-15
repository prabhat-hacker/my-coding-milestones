#include<iostream>
using namespace std;
int main(){
    int a[5]={5,3,1,4,2};
    int n=5;
      for(int ele:a){
        cout<<ele<<" ";
    }cout<<endl;
    for(int i=1;i<n;i++){
        int j=i;
        while(j>0&&a[j]<a[j-1]){
            swap(a[j],a[j-1]);
            j--;
        }
    }
    for(int ele:a){
        cout<<ele<<" ";
    }
}