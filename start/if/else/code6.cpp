//check whether a character is alphabet or not
#include <iostream>
using namespace std;
int main(){
char ch;
cin>>ch;
if(ch>='a'&&ch<='z'){
    cout<<"alphabet";
}else{
    if(ch>='A'&&ch<='Z'){
        cout<<"alphabet";
    }else{
    cout<<"not a alphabet";}
}
    return 0;
}