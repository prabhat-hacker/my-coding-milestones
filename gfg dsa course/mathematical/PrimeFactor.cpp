/* Naive mathod to find prime factors 
     t(c)=nlogN 
#include<iostream>
using namespace std;
bool isPrime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return false;
    }
    return true;
}
void pFactor(int n){
    for(int i=2;i<n;i++){
        if(isPrime(i)){
            int x=i;
            while(n%x==0){
                cout<<i<<" ";
                x*=i;
            }
        }
    }
}
int main(){
    int n;
    cout<<"enter the number to find the prime factors\t";
    cin>>n;
  cout<<" Prime factors are of number\t"<<n<<endl;
  pFactor(n);

}
*/
// more efficient mathod to find all prime factors
#include<iostream>
using namespace std;
void pf(int n){
    while(n%2==0){
        cout<<2<<" ";
        n=n/2;
    }
    while(n%3==0){
        cout<<3<<" ";
        n=n/3;
    }
    for(int i=5;i*i<=n;i=i+6){
        while(n%i==0){
            cout<<i<<" ";
            n=n/i;
        }
        while(n%(i+2)==0){
            cout<<(i+2)<<" ";
            n=n/(i+2);
        }
    }
    if(n>3){
        cout<<n;
    }
    
}
int main(){
    int n;
    cout<<"enter the number\t";
    cin>>n;
    pf(n);
}