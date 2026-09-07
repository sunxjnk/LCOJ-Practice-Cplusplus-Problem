#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,tong=0,dem=0;
    cin>>n;
    int a[n];
    for(int i = 0;i<n;i++){
        cin>>a[i];
        if(a[i]%2!=0){
            tong += a[i];
            dem++;
        }
    }
    double e = (double)tong;
    cout<<fixed<<setprecision(4)<<(e/dem)<<endl;
    return 0;
}
