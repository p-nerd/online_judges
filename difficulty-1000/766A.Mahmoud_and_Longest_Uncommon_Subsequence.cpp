#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define gp ' '
#define ll long long int
#define vec vector
#define str string
#define all(x) x.begin(), x.end()

const int mod = 1e9 + 7;
const int inf = 1e9;

bool solve()
{
    str a, b;
    cin >> a >> b;

    if (a == b)
        cout << -1 << ed;
    else
        cout << (max(a.length(), b.length())) << ed;

    return true;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // int t;
    // cin >> t;
    // while (t--)
    solve();

    return 0;
}
// github.com/p-nerd (Shihab Mahamud)
// Tuesday, August 16, 2022 | 11:43:01 AM (+06)
