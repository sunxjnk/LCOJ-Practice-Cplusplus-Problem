#include<bits/stdc++.h>
using namespace std;

int main(){
    double n;
    cin>>n;
    if(n>0){
        if(abs(n-((int)(n)))>=0.5) cout<<((int)(n))+1;
        else if(abs(n-((int)(n)))<0.5) cout<<((int)(n));
    }
    else{
        if(((int)n)-n>=0.5) cout<<((int)n)-1;
        else if(((int)n)-n<0.5) cout<<((int)n);
    }
    return 0;
}
