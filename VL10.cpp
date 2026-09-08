#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int a = s.size();
    if(s[0]=='-') a = a - 1;
    cout<<a<<endl;
    return 0;
}
