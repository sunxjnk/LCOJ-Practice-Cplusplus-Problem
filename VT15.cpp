#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;

        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
    }
}
int main(){
    int n, ss1,ss2;
    cin>>n;
    int a[n];
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    bubbleSort(a,n);
    ss1 = a[0]*a[1]*a[n-1];
    ss2 = a[n-1]*a[n-2]*a[n-3];
    if(n==3) cout<<ss2<<endl;
    else{
        if(ss1>ss2) cout<<ss1<<endl;
        else cout<<ss2<<endl;
    }
    return 0;

}
