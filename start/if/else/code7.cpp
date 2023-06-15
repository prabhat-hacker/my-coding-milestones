//check vowal or consonant 
 #include <iostream>
using namespace std;
int main(){ 
char ch;
cin>>ch; 
if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
{
 cout<<"vowel";
}
else
{
    if(ch>='a'&&ch<='z')
    {
        cout<<"consonant";
    }
    else 
    {
    cout<<"not alphabet";
    }
}

    return 0;
}