//sort the given array
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int a[]={5,3,1,4,2};
    int n=5;
    for(int i=0;i<n-1;i++){
        int min=INT_MAX;
        int idx=-1;
        for(int j=i;j<n;j++){
            if(a[j]<min){
                idx=j;
                min=a[j];
            }
        }
        swap(a[i],a[idx]);
    }
    for(int ele:a){
        cout<<ele<<" ";
    }
}