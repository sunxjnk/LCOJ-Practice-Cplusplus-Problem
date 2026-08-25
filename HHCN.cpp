#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b, c;
    cin >> a >> b >> c;

    const long long MOD = 1000000007;

    long long x = llround(sqrtl((long double)b * c / a));
    long long y = llround(sqrtl((long double)a * c / b));
    long long z = llround(sqrtl((long double)a * b / c));

    long long result = 4LL * ((x + y + z) % MOD) % MOD;

    cout << result <<endl;

    return 0;
}