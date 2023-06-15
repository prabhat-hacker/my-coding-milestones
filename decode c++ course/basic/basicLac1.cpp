#include<iostream>
using namespace std;
int main(){
   /*int arr[3][4]={1,3,4,8,2,8,7,3,1,9,5,8};
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }


    // taking size of array and taking value of array
   // and printing the array
 int m,n;
    cin>>m>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }

    
    //find largest element in array
   int arr[3][4]={1,3,4,8,2,8,7,55,1,9,5,8};
   int max=INT_MIN;
   for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
        if((arr[i][j])>max) max=arr[i][j];
          
        }
   }
   
   
    cout<<max;
    
    //PRINTING TRANSPOSE OF GIVEN ARRAY
      int arr[3][4]={1,3,4,8,2,8,7,55,1,9,5,8};
     for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;

     }
     cout<<endl;
     for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cout<<arr[j][i]<<" ";
        }cout<<endl;
     }
    
    








    
}