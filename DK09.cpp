#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    if((n>0)&&(n<100001)){
        if(n%4==0){
            if(n%100!=0) cout<<"YES"<<endl;
            else{
                if(n%400==0) cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }
        }
        else cout<<"NO"<<endl;
    }
    else cout<<"INVALID"<<endl;
    return 0;
}
