#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main(){
 vector<int>a(7);
 int n=7;
for(int i=0;i<=(a.size()-1);i++){     //printing element of vector
        cin>>a.at(i);}

int low=0,high=n-1;
 int mid=(low+high-1)/2;
for(int i=0;i<=(a.size()-1);i++){    
  
  if(a[mid]==2){
    swap(a[mid],a[high]);
    high--;
  }
  else if(a[mid]==0){
    swap(a[mid],a[low]);
    low++;
 
  }
  else{
    mid++;
  }
}
for(int i=0;i<=(a.size()-1);i++){     //printing element of vector
        cout<<a.at(i)<<" ";}


}