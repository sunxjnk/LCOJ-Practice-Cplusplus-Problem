#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int x = a, y = b;
    if (a>b){
        x = b;
        y = a;
    }
    for(int i = x;i<=y;i++){
        cout<<i<<" ";
    }
    return 0;
}
