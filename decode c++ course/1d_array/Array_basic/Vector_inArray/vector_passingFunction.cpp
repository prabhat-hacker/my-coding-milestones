#include<iostream>
#include<vector>
using namespace std;
void change(vector<int>v){
    v.at(3)=90;
    for(int i=0;i<(v.size());i++){
        cout<<v.at(i)<<" ";
    }cout<<endl;
}
int main()
{
  vector<int>a;
 a.push_back(2);
 a.push_back(3);
 a.push_back(4);
 a.push_back(9);
 a.push_back(10);
  for(int i=0;i<a.size();i++){
    cout<<a.at(i)<<" ";         //output 2 3 4 9 10
  }cout<<endl;
  change(a);                  //output  2 3 4 90 10
 for(int i=0;i<a.size();i++){     
    cout<<a.at(i)<<" ";            //output 2 3 4 9 10     
  }cout<<endl;
}