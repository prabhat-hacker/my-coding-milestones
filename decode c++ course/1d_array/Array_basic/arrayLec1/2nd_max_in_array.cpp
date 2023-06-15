#include<iostream>
using namespace std;
int main(){
 //find the second maximum number in agiven array
    /* int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];

    }
    //most use for max and min #include<climits>
    int max=INT_MIN;
    for(int i=0;i<=n-1;i++){
        if(max<a[i]) max=a[i];
    }
    cout<<max<<endl;
    int smax=INT_MIN;
    for(int i=0;i<=n-1;i++){
        if(a[i]!=max&&smax<a[i]) smax=a[i];
    }
    cout<<smax;
   

// minimum value
int min=INT_MAX;
for(int i=0;i<n;i++){ 
min=min(min,arr[i]);

}
cout<<min;
  // find duplicate 
int arr[7]={1,9,47,9,26,1,9};
bool flag=false;
 for(int i=0;i<7;i++){
    for(int j=i+1;j<7;j++)
    {
     if(arr[i]==arr[j])
    {
        flag=true;
      //  cout<<arr[i];
     
    }
    }
  
     }
  cout<<flag;
  
  // week5 a1 question5
 int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];

    }
    bool flag=false;
    int x=0;
    for(int i=0;i<n;i++){
        if(a[i]!=x){
            cout<<x<<endl;
            flag=true;
            break;
        }
        else{
            x++;
        }
    }
    cout<<flag<<endl;
  */
   int sub[50], i ;
   for ( i = 0 ; i <= 48 ; i++ )
   {
sub[i] = i ;
     cout<<sub[i]<<endl ;
   }
return 0; 



}