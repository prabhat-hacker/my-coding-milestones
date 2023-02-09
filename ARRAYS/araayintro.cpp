#include <iostream>
using namespace std;
int main(){
    int A[7]={1,2,3,7,9,4,5};
    /*for(int i=0;i<=6;i++){
       cout<<i<<"  "<<A[i]<<endl;;
    }*/
    //we use & for reference or change value
    for(int&x :A){
        cout<<++x<<"  ";
    }
}