/*Nature of Quadratic Roots
find discriminant
d=b^2-4ac
if d=0 then roots are real and equal
if d>0 roots are real but unequal
if d<0 then riots are imaginary
*/
#include <iostream>
using namespace std;
int main(){

    float D,a,b,c;
    cin>>a>>b>>c;
    D=b*b-4*a*c;
    if(D==0){
        cout<<"roots are real and equal"<<endl;
    }
    else if(D>0){
        cout<<"roots are real but unneqal"<<endl;
    }
    else {
        cout<<"roots are imaginary"<<endl;
    }
    return 0;
}