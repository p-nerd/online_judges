#include <bits/stdc++.h>
using namespace std;

template <typename T>
istream &operator>>(istream &istream, vector<T> &v)
{
    int len = v.size();
    for (int i = 0; i < len; i++)
        cin >> v[i];
    return istream;
}
template <typename T>
ostream &operator<<(ostream &ostream, const set<T> &s)
{
    for (auto ith : s)
        cout << ith << " ";
    return ostream;
}
template <typename T>
ostream &operator<<(ostream &ostream, const vector<T> &v)
{
    for (auto ith : v)
        cout << ith << " ";
    return ostream;
}
template <typename T, typename T2>
ostream &operator<<(ostream &ostream, const pair<T, T2> &p)
{
    return (ostream << p.first << " " << p.second);
}
template <typename T, typename T2>
ostream &operator<<(ostream &ostream, const map<T, T2> &mp)
{
    for (auto ith : mp)
        cout << ith << "\n";
    return ostream;
}

#define ed '\n'
#define gp ' '
#define lli long long int
#define str string
#define vec vector
#define all(x) x.begin(), x.end()

bool solve()
{
    lli n;
    cin >> n;
    vec<lli> v(n);
    cin >> v;

    lli prefix_val = v[0], suffix_removed = 0, ans = 0;

    for (lli i = 1; i < n; i++)
    {
        v[i] -= suffix_removed;

        if (v[i] <= prefix_val)
        {
            ans += prefix_val - v[i];
            prefix_val = v[i];
        }
        else
        {
            suffix_removed += v[i] - prefix_val;
            ans += v[i] - prefix_val;
        }
    }

    ans += abs(prefix_val);
    cout << ans << ed;

    return true;
}

bool test()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return true;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    test();

    return 0;
}
// Shihab Mahamud (github.com/p-nerd)
