// multiple button function
#include <iostream>
using namespace std; 
int main(){
  
  char button;
  cout<<"press a button : ";
  cin>>button;
  switch (button)
  {
  case 'a':
  cout<<"chtiya"<<endl;
    break;
  case 'b':
  cout<<"gandari"<<endl;
  break;
  case 'c':
  cout<<"bc"<<endl;
      break;
    case 'd':
  cout<<"mc"<<endl;
    break; 
   
  default:
  cout<<"or sikh rahe hai";
    break;
  }

    return 0;
}