#include<iostream>
#include<vector>
using namespace std;
vector<int> merge(vector<int>&v1,vector<int>&v2){
    
     int m=v1.size();
     int n=v2.size();
     vector<int>res(m+n);
     int i,j,k;
     i=0;
     j=0;
     k=0;
     while(i<m&&j<n){
        if(v1[i]>v2[j]){
           res[k]=v2[j];
           j++;
        }
        else{
            res[k]=v1[i];
            i++;
        }
        k++;
     }
    if(i==m){
        while(j<n){
          res[k]=v2[j];
            k++;
            j++;
        }
    }
    if(j==n){
        while(i<m){
           res[k]=v1[i];
            i++;
            k++;
        }
    }
    return res;
}
int main(){
 vector<int>v1;
 v1.push_back(1);
 v1.push_back(3);
 v1.push_back(5);
 v1.push_back(8);

 vector<int>v2;
 v2.push_back(1);
 v2.push_back(4);
 v2.push_back(7);
 v2.push_back(9);
 v2.push_back(11);
 v2.push_back(13);

 vector<int>v=merge(v1,v2);
 for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
 }




}