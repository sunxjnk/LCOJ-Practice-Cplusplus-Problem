#include<bits/stdc++.h>
using namespace std;

bool isSquare(int n){
    int x = sqrt(n);
    if(x*x==n) return true;
    return false;
}

bool isPrime(int n){
    if(n < 2) return false;
    if(n == 2 || n == 3) return true;
    if(n % 2 == 0 || n % 3 == 0) return false;

    for(int i = 5; 1LL * i * i <= n; i += 2){
        if(n % i == 0) return false;
    }

    return true;
}
int main(){
    int n;
    cin>>n;
    if(n<0) cout<<"NO"<<endl;
    else{
        if(isPrime(n)) cout<<"YES";
        else cout<<"NO";
    }
}
