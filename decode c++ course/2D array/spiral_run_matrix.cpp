#include<iostream>
using namespace std;
int main(){
 int m,n;
    cin>>m>>n;
    int matrix[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>matrix[i][j];
        }
    }
 int minC=0,minR=0,maxC=n-1,maxR=m-1;
   while(minR<=maxR)
   {
    for(int j=minC;j<=maxC;j++)
    {
      cout<<matrix[minR][j]<<" ";
    }
    minR++;
    for(int i=minR;i<=maxR;i++)
    {
        cout<<matrix[i][maxC]<<" ";
    }
    maxC--;
    for(int j=maxC;j>=minC;j--)
    {
        cout<<matrix[maxR][j]<<" ";
    }
    maxR--;
    for(int i=maxR;i>=minR;i--)
    {
        cout<<matrix[i][minC]<<" ";
    }
    minC++;

    }

    

}


