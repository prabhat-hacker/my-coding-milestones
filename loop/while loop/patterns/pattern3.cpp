#include <iostream>
using namespace std;
int main()
{   int n,i=1;
    char ch;
    cin>>n;
     while(i<=n)
    {
       int j=1;
        ch='A';
        while(j<=n){
          
            ch=('A'+j-1);
            cout<<ch;
            j++;

        }cout<<endl;
        i++;
       
    }
}