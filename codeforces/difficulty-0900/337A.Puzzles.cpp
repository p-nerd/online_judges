#include <bits/stdc++.h>
using namespace std;

using sint      = short int;
using uint      = unsigned int;
using llint     = long long int;
using ldouble   = long double;
using str       = string;

#define pb           push_back
#define endn         '\n'
#define umap         unordered_map
#define uset         unordered_set
#define loop(i,a,b)  for(i = a; i < b; i++)
#define first_io     ios_base::sync_with_stdio(false);cin.tie(NULL);
#define file_io      freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);

#define debug(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>
void __f(const char *name, Arg1 &&arg1) {
    cout << name << " = " << arg1 << std::endl; }
template <typename Arg1, typename... Args>
void __f(const char *names, Arg1 &&arg1, Args &&...args) {
    const char *comma = strchr(names + 1, ',');
    cout.write(names, comma - names) << " = " << arg1 << " | ";
    __f(comma + 1, args...); }
vector<int> get_randoms(int amount, int first, int last) {
    vector<int> tmp; srand(time(0)); for (int i = 0; i < amount; i++)
    tmp.pb(first + ((rand() % (last - first + 1))));return tmp; }
template <typename Tp> void print(Tp arr[], int n) {
    for (int i = 0; i < n; i++) cout << arr[i] << " ";cout << '\n'; }
template <typename Tp> void print(const Tp &vc) {
    for (auto &ith : vc) cout << ith << " "; cout << '\n'; }
template <typename Tp, typename Tp2> void print(const map<Tp, Tp2> mp) {
    for (auto &ith : mp) cout << ith.first << ": " << ith.second << "\n";}

#define GLOBAL_ARRAY_SIZE  10000005
#define LOCAL_ARRAY_SIZE   100005
#define PI                 acos(-1.0)
#define EPS                1e-9
#define MOD                1000000007

void test_case() {
    
}

int main(void) {
    first_io;

    int n, m;
    cin >> n >> m;
    vector<int> a(m), ans;
    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int mn = INT_MAX, new_mn;

    for (int i = 0; i < m - n + 1; i++) {
        new_mn = a[i+n-1] - a[i];
        if (mn > new_mn) {
            mn = new_mn;
        }
    }

    cout << mn << endn;

    return 0;
}
// Solved by: Shihab Mahamud (github.com/p-nerd)
// Wednesday, January 12, 2022 | 06:59:50 AM (+06)
