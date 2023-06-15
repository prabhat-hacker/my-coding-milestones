#include <iostream>
using namespace std;
enum dept{ cs=1,ece,eee,mec,civ};
int main(){
    dept d,s,f,r;
    d=cs,s=civ,f=mec,r=eee;
    cout<<(d+s+f+r);
}
