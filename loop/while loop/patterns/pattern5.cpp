#include <iostream>
using namespace std;
int main(){
    int n,i=1,count=1;
    char ch='A';
    cin>>n;
    while(i<=n){
        int j=1;
        while(j<=i)
        {   
          ch=('A'+count-1);
          count++;
          cout<<ch<<" ";
          j++;

        }cout<<endl;
        i++;
    }
}