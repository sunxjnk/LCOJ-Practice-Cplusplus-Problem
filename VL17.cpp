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
    int n,dem=2;
    cin>>n;
    n = abs(n);
    if(n==1) cout<<1<<endl;
    else if(isPrime(n)) cout<<2<<endl;
    else if((isSquare(n))&&(n%2!=0)) cout<<3<<endl;
    else{
        for(int i = 2;i<=(n/2)+1;i++){
            if(n%i==0){
                dem++;
            }
        }
        cout<<dem<<endl;
    }
    return 0;
}
