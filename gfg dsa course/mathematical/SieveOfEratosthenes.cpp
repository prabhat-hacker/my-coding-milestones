#include<iostream>
using namespace std;
void Sieve(int n){
vector<bool>prime(n+1,true);
for(int i=2;i<=n;i++){
    if(prime[i]){
        cout<<i<<" ";
        for(int j=i*i;j<=n;j=j+i){
            prime[j]=false;
        }

    }
}
}
int main(){
    int n;
    cin>>n;
    cout<<" all prime number less then "<<n<<endl;
    Sieve(n);


}
