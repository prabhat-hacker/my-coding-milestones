#include <iostream>
#include<vector>
using namespace std;
int main(){
    /* vector<int>v;
    v.push_back(2);     //push_back for taking value 
    v.push_back(3); 
    v.push_back(5);
    v.push_back(7);
    v[4]=5;       //intially not array size given so it saved as garbage value at last 
    v.push_back(8);  
    cout<<v.size()<<endl;   //for knowing size of vector 
    cout<<v.capacity()<<endl;
    for(int i=0;i<=(v.size())-1;i++){     //printing element of vector
        cout<<v[i]<<" ";
    }
    //when vector size is given
    vector<int>v(5);

    for(int i=0;i<=v.size()-1;i++){
        cin>>v[i];
    }
     for(int i=0;i<=(v.size())-1;i++){     //printing element of vector
        cout<<v[i]<<" ";
    }



  //   vector at 
  vector<int>v;
    v.push_back(2);     //push_back for taking value 
    v.push_back(3); 
    v.push_back(5);
    v.push_back(7);
    for(int i=0;i<=(v.size())-1;i++){     //printing element of vector
        cout<<v[i]<<" ";}
        cout<<endl;
        v.at(2)=90;
       for(int i=0;i<=(v.size())-1;i++){     //printing element of vector
        cout<<v[i]<<" ";  

     } 
*/
    // vector sort
    vector<int>v;
    v.push_back(7);     //push_back for taking value 
    v.push_back(3); 
    v.push_back(1);
    v.push_back(2);
     for(int i=0;i<=(v.size()-1);i++){     //printing element of vector
        cout<<v[i]<<" ";}
        cout<<endl;

     sort(v.begin(),v.end());// this sorting used for ascending order
     for(int i=0;i<=(v.size()-1);i++){     //printing element of vector
        cout<<v.at(i)<<" ";}
        cout<<endl;
     reverse(v.begin()+2,v.end());  //this function is used to reverse the array
     
     for(int i=0;i<=(v.size()-1);i++){     //printing element of vector
        cout<<v.at(i)<<" ";}

}
