#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n],b[n];
    int a0 = 0,b0=0;
    int suma = 0, sumb=0;

    for(int i = 0;i<n;i++){
        cin>>a[i];
        if (a[i]==0) a0++;
    }
    for(int i = 0;i<n;i++){
        cin>>b[i];
        if (b[i]==0) b0++;
    }
    if(b0>a0) cout<<1<<endl;
    else if(b0<a0) cout<<2<<endl;
    else{
        for(int i=0;i<n;i++){
            suma+=a[i];
            sumb+=b[i];
        }
        if(suma<sumb) cout<<1<<endl;
        else if(suma>sumb) cout<<2<<endl;
        else cout<<"Double Win"<<endl;
    }
    return 0;
}
