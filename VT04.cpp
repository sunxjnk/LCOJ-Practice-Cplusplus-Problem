#include<bits/stdc++.h>
using namespace std;

bool check(int a[],int n,int x){
    for(int i = 0; i<n;i++){
        if(a[i]==x) return true;
    }
    return false;
}

int main(){
    int n,x;
    cin>>n>>x;
    int a[n];
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    if(check(a,n,x)) cout<<"YES";
    else cout<<"NO";
    return 0;
}
