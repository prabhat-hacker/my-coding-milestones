 //enter week number and print day of week
#include <iostream>
using namespace std;
int main(){
int week;
cout<<"week number"<<endl;
cin>>week;
if(week==1)
{
    cout<<"sunday";
}
else if(week==2)
{
    cout<<"monday";
} 
else if(week==3)
{
    cout<<"tuesday";
}
else if(week==4)
{
    cout<<"wednesday";
} 
else if(week==5)
{
    cout<<"thursday";
} 
else if(week==6)
{
    cout<<"friday";
} 
else if(week==7)
{
    cout<<"saturday";
} 
else
{
    cout<<"input a valid character";
}
    return 0; 
}