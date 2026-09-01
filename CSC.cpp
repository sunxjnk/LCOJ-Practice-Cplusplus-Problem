#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,sl,sb,stg;
    cin>>a>>b>>c;
    sl = a;
    sb = c;
    if(sl<b) sl = b;
    if(sl<c) sl = c;
    if(sb>b) sb = b;
    if(sb>a) sb = a;
    stg = a+b+c-sl-sb;
    if(abs(sl-stg)==abs(sb-stg)) cout<<sl+abs(sb-stg)<<endl;
    else if(abs(sl-stg)> abs(sb-stg)) cout<<sl-abs(sb-stg)<<endl;
    else if(abs(sl-stg) < abs(sb-stg)) cout<<sb+abs(sl-stg)<<endl;
    return 0;
}
