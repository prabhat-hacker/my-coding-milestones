#include <iostream>
using namespace std;
int main(){
    int a[]={12,-13,45,23,653,-56,98,-456,-345,76,-19,25};
    int pcount=0,ncount=0;
    for(int i=0;i<12;i++)
    {
        if(a[i]<0){
            ncount++;
        }else{
            pcount++;
        }
    }
    cout<<"no of positive numbers : "<<pcount<<endl;
    cout<<"no of negative numbers : "<<ncount<<endl;
}