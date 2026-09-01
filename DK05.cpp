#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    if(n<0) cout<<"NO"<<endl;
    else if (n==0) cout<<"YES"<<endl;
    else{
        long long k = sqrt(n);
        if(k*k==n) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
