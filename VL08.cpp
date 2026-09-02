#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int x = a, y = b, sum=0;
    if (x>y){
        x=b;
        y=a;
    }
    for(int i = x;i<=y;i++){
        if(i%2==0) sum += i;
    }
    cout<<sum<<endl;
    return 0;
}
