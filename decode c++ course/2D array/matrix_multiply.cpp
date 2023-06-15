#include<iostream>
using namespace std;
int main(){
    int m,n,p,q;
    cin>>m>>n>>p>>q;
    int m1[m][n];
    int m2[p][q];
    for(int i=0;i<m;i++){
       for(int j=0;j<n;j++){
        cin>>m1[i][j];
       } 
    }
     for(int i=0;i<p;i++){
       for(int j=0;j<q;j++){
        cin>>m2[i][j];
       } 
    }
    int res[m][q];
    for(int i=0;i<m;i++)
    {
       
        for(int j=0;j<q;j++){
            res[i][j]=0;
            for(int k=0;k<n;k++){
                res[i][j]+=m1[i][k]*m2[k][j];
            }
        }
    }

   for(int i=0;i<m;i++){
    for(int j=0;j<q;j++){
        cout<<res[i][j]<<" ";
    }cout<<endl;
   }

}