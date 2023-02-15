#include <iostream>
using namespace std;
int main()
{
    int n,i=1;
    cin>>n; char ch='A';
    while(i<=n)
    {        int j=1;
        while(j<=i)
        { 
            ch=('A'+i-1);
           cout<<ch<<" ";
              j++;
        }cout<<endl;
        i++;
         

    }


}