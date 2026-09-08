#include<bits/stdc++.h>
using namespace std;

bool isLeap(int n){
    if(n%4!=0) return false;
    else{
        if(n%100==0){
            if(n%400==0) return true;
            else return false;
        }
    }
    return true;
}

bool isMonth (int n){
    if((n<1)||(n>12)) return false;
    else return true;
}

int main(){
    int m,y;
    cin>>m>>y;
    if(!isMonth(m)) cout<<"INVALID"<<endl;
    else{
        if((m==1)||(m==3)||(m==5)||(m==7)||(m==8)||(m==10)||(m==12)) cout<<31<<endl;
        else if(m==2){
            if(isLeap(y)) cout<<29<<endl;
            else cout<<28<<endl;
        }
        else cout<<30<<endl;
    }
    return 0;
}
