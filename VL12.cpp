#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if (n == 1) return false;
    else if ((n==2)||(n==3)||(n==5)) return true;
    else if((n%2==0)||(n%3==0)) return false;
    else{
        for(int i=3;i*i<=n;i+=2){
            if(n%i==0) return false;
            else return true;
        }
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    n = abs(n);
    if(n==0) cout<<"INF"<<endl;
    else if(n==1) cout<<1<<endl;
    else if(isPrime(n)) cout<<n<<" "<<1<<endl;
    else{
        cout<<n<<" ";
        for(int i = (n/2)+1;i>1;i--){
            if(n%i==0) cout<<i<<" ";
        }
        cout<<1<<endl;
    }
    return 0;
}
