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
    long double A[105][105], B[105][105], C[105][105];
    
    bool b = false;
    RPT(i, n) RPT(j, m)
    {
        cin >> A[i][j];
        if(A[i][j] != (long long)A[i][j]) b = true;
    }
    RPT(i, m) RPT(j, p)
    {
        cin >> B[i][j];
        if(B[i][j] != (long long)B[i][j]) b = true;
    }

    RPT(i, n) RPT(j, p)
    { 
        long double sum = 0;
        RPT(k, m) sum += A[i][k] * B[k][j];
        C[i][j] = sum;
    }

    cout << fixed << setprecision(b ? 2 : 0);
    RPT(i, n) RPT(j, p) cout << C[i][j] << " \n"[j == p-1];
}