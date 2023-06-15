 // for a given find last index in array
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);      
    v.push_back(1);
    v.push_back(4);
    int x=1;
    int idx=-1;
 //   for(int i=0;i<v.size();i++){
  //      if(v[i]==x) idx=i;

  //  }
  //

   // SECOND METHOD 
   for(int i=v.size()-1;i>=0;i--){
    if(v[i]==x){ idx=i;
    break; } 
   }   
   cout<<idx;



}