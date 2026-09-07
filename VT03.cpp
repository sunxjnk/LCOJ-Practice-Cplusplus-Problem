#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, cs = 0;
    cin >> n;
    int a[n];
    cin >> a[0];
    int mina = a[0];

    for(int i = 1; i < n; i++){
        cin >> a[i];
        if(a[i] >= mina){
            mina = a[i];
            cs = i;
        }
    }

    cout << cs << endl;
}
