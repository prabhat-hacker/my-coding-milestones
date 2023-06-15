//reverse by part 
#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }cout<<endl;
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
int i,j;
// i<j
cin>>i>>j;

while(i<j){
    int temp=v[i];
    v[i]=v[j];
    v[j]=temp;
    i++;
    j--;
    

}
display(v);

}