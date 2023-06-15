#include <iostream>
using namespace std;
int main(){
    int button;
    cout<<"type button : ";
    cin>>button;
    switch(button){
        case 1 :
        cout<<"prabhat";
        break;
        case 2 :
        cout<<"prince";
        break;
        case 3 :
        cout<<"abhay";
        break;
        default :
        cout<<"gandi saala";
        break;
    }
return 0;
}