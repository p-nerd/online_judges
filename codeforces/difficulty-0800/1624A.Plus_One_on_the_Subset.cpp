#include <bits/stdc++.h>
using namespace std;

using lli = long long int;
using str = string;

#define vec vector
#define endn '\n'
#define loop(i, a, b) for (i = a; i < b; i++)
#define first_io                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define file_io                       \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

#define debug(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>
void __f(const char *name, Arg1 &&arg1) {
    cout << name << " = " << arg1 << std::endl; }
template <typename Arg1, typename... Args>
void __f(const char *names, Arg1 &&arg1, Args &&...args) {
    const char *comma = strchr(names + 1, ',');
    cout.write(names, comma - names) << " = " << arg1 << " | ";
    __f(comma + 1, args...); }
template <typename Tp> void print(Tp arr[], int n) {
    for (int i = 0; i < n; i++)
    cout << arr[i] << " "; cout << '\n'; }
template <typename Tp> void print(vector<Tp> &vc) {
    for (auto &ith : vc) cout << ith << " ";
    cout << '\n'; }

#define PI acos(-1.0)
#define EPS 1e-9
#define MOD 1000000007

void test_case() {
    int n;
    cin >> n;
    int tmp, mx = INT_MIN, mn = INT_MAX;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        mx = max(mx, tmp);
        mn = min(mn, tmp);
    }
    cout << (mx - mn) << endn;
}

int main() {
    first_io;

    int t;
    cin >> t;
    while (t--) {
        test_case();
    }

    return 0;
}
// Solved by: Shihab Mahamud (github.com/p-nerd)
// Thursday, January 20, 2022 | 02:37:35 PM (+06)
