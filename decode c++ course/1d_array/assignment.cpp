#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[10]={1,3,1,3,6,86,54,86,54,100};

int count=0;
for(int i=0;i<10;){
    for(int j=i+1;j<10;j++){
        if(arr[i]==arr[j]) i++;  count++; continue;
        

        
        
    }

}
cout<<arr[count];

}