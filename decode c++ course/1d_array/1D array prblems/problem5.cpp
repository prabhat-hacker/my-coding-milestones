// rotate the given array 'a' by k steps,where k is non-negative
#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }cout<<endl;
}
void reverse(int i,int j,vector<int>&v){
    while(i<j){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        j--;
        i++;

    }
}
int main(){
vector<int>v;
v.push_back(1);
v.push_back(2);
v.push_back(13);
v.push_back(15);
v.push_back(18);
v.push_back(10);
v.push_back(14);
display(v);
int k;
cout<<" enter the number k : ";
cin>>k;
if(k>=v.size()){
    k%=v.size();
}
int i=0;
int j=v.size()-1-k;
reverse(i,j,v);
reverse(v.size()-k,v.size()-1,v);
reverse(0,v.size()-1,v);
display(v);


}
