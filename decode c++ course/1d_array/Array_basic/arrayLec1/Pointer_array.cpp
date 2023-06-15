#include<iostream>
using namespace std;
int main(){
    int a[7]={2,3,6,7,9,4,5};
    int*p1=a;
    int *p2=&a[1];
    cout<<p1<<" "<<p2;
    //p1 and p2 here printing address
}