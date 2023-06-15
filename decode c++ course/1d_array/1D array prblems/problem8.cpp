// sort array 0s 1s and 2s [BY DUTCH FLAG ALGO]

#include<iostream>
#include<vector>
using namespace std;
void swap(int a,int b){
    int temp=a;
    a=b;
    b=temp;
   
}
int main(){
 vector<int>v;
 v.push_back(1);
 v.push_back(2);
 v.push_back(0);
 v.push_back(2);
 v.push_back(1);
 v.push_back(1);
 v.push_back(2);
 v.push_back(0);
 for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
 }
 cout<<endl;
 int mid=0;
 int low=0;
 int high=v.size()-1;
 while(mid<=high){
    if(v[mid]==2){
        int temp=v[mid];
        v[mid]=v[high];
        v[high]=temp;
        high--;
    }
   else if(v[mid]==0){
   int temp2=v[mid];
        v[mid]=v[low];
        v[low]=temp2;
    low++;
    mid++;
   }
   else{
    mid++;
   }
 }
 for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
 }
}