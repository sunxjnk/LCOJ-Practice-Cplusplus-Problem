#include<bits/stdc++.h>
using namespace std;
int main(){
    double a,b;
    cin>>a>>b;
    if(b==0){
        if(a==0) cout<<"WOW"<<endl;
        else cout<<"NO"<<endl;
    }
    else {
        double x = -1.0 * b / a;
        if (x == 0)
            x = 0;
        cout << fixed << setprecision(2) << x;
    }
    return 0;
}
