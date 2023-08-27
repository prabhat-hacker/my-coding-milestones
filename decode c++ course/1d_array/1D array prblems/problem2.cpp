//wap to copy the contents of one array into another in the reverse order#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    } 
    cout<<endl;
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
vector<int>v2(v.size());
for(int i=0;i<v.size();i++){
    int j=v.size()-1-i;
    v2[i]=v[j];
}

display(v2);
}