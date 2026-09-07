#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,dem=1;
    cin>>n;
    if(n<0) cout<<"NO"<<endl;
    else if((n==0)||(n==1)) cout<<"NO"<<endl;
    else{
        n = abs(n);
        for(int i = 2;i<= ((int)((n/2)+1));i++){
            if(n%i==0) dem+=i;
        }
        if(dem==n) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
