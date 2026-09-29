#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define ShiYu ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define int long long
#define vi vector<int>
#define pii pair<int,int>
#define F first
#define S second
#define MP make_pair
#define EB emplace_back
#define endl '\n'
#define SZ(x) ((int)x.size())
#define all(x) x.begin(), x.end()
#define RPT(i,n) for(int i=0; i<n; ++i)

signed main()
{
    ShiYu;
    int n, m, p; cin >> n >> m >> p;
    vector<long double> A(n*m), B(m*p), C(n*p, 0.0);    // 攤平成一維
    bool isFloat = false;
    for(auto &x : A) { cin >> x; if (x != (long long)x) isFloat = true; }
    for(auto &x : B) { cin >> x; if (x != (long long)x) isFloat = true; }
    RPT(i,n) RPT(k,m)
    {
        double a = A[i*m + k];
        if (a == 0) continue;
        RPT(j,p) C[i*p + j] += a * B[k*p + j];
    }
    cout << fixed << setprecision(isFloat ? 2 : 0);
    RPT(i,n) RPT(j,p) cout << C[i*p + j] << " \n"[j == p-1];
}