#include<iostream>
using namespace std;
double fact(int num){
    if(num==0) return 1;
    else
    return num*fact(num-1);
}
int main(){
    int num;
    cout<<"enter the number\t";
    cin>>num;
    cout<<fact(num);
}