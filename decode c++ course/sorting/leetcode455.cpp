#include<iostream>
#include<vector>
using namespace std;
int cookie();
int main(){
    vector<int>g;
    vector<int>s;
    g.push_back(1);
    g.push_back(5);
    g.push_back(3);
    g.push_back(4);
    g.push_back(7);
        s.push_back(8);
        s.push_back(6);
        s.push_back(9);
        s.push_back(2);
        s.push_back(1);
   int assign_cookies=cookie(g,s);
    cout<<assign_cookies;
} 
int cookie(vector<int>&g,vector<int>&s){
    int i=0;
    int j=0;
    int count=0;
    sort(s.begin(),s.end());
    sort(g.begin(),g.end());
   while(i<g.size()&&j<s.size()){
        if(s[j]>=g[i]){
            count++;
            i++;
            j++;
        }
        else j++;
    }
    return count;
}
