#include<iostream>
using namespace std;
/*void display(int a[]){
    for(int i=0;i<=4;i++){
        cout<<a[i]<<" ";
    }cout<<endl;
}
void change(int b[]){
    b[4]=678;

}
int main(){
    int a[5]={1,21,23,45,24};
    display(a);
    change(a);
    display(a);
} . */
int main(){
    int a[]={4,5,7,2,9,1};
    int*ptr=a;
    cout<<ptr<<endl;
    ptr[0]=8;
    //or *ptr[0]=8; same as ptr[0]=8;
    for(int i=0;i<=5;i++){
        cout<<ptr[i]<<" ";
        // cout<<i[ptr];or cout<<i[a]; or ptr[i]; all are same
    }
}




