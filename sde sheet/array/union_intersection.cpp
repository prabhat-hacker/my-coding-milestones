#include<iostream>
using namespace std;
int uni();
int intersection();
int intersection(int a1[],int a2[],int n,int m){
  int count=0;
 
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a1[i]==a2[j]){
                count++;
            }
        }
    }
 return count;


}
int uni(int sum,int n,int m){
 return (n+m-sum);
}
int main(){
    int a1[7];
    int a2[5];
  int n=sizeof(a1)/4;
  int m=sizeof(a2)/4;
    cout<<"elements of array 1 : \t";
    for(int i=0;i<n;i++){
        cin>>a1[i];
    }
    cout<<"elements of array 2 : \t";
 for(int i=0;i<m;i++){
        cin>>a2[i];
    }
  int common=intersection(a1,a2,n,m);
  int different=uni(common,n,m);
    cout<<"number of common elements : "<<common<<endl;
    cout<<"no union of arr1 and arr2 : "<<different;
}