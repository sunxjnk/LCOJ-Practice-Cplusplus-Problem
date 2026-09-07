#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, tong=1;
    cin>>n;
    if(n==0) cout<<1<<endl;
    else{
        for(int i = 1; i<=n;i++) {
            tong *= i;
        }
        cout<<tong<<endl;
    }
    return 0;
}
