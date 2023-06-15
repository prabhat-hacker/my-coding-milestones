//net salary=basic sal. +basic sal.*%of allowances -basic sal.*%of deductions
#include <iostream>
using namespace std;
int main(){
     float bs,percentAllow,percentDeduct,netSalary;
     cin>>bs>>percentAllow>>percentDeduct;
netSalary=bs+bs*percentAllow/100-bs*percentDeduct/100;

cout<<"netsalary =  "<<netSalary<<endl;
 return 0;
}