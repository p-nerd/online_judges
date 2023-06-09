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
    int n;
    cin >> n;
    int i, j;
    int sum = 0, tmp;
    loop(i, 0, n) {
        cin >> tmp;
        sum += tmp;
    }

    if (sum % n == 0) {
        cout << 0 << endn;
    } else {
        cout << 1 << endn;
    }
}

int main(void) {
    first_io;

    int t;
    cin >> t;
    while (t--) {
        test_case();
    }

    return 0;
}
// Solved by: Shihab Mahamud (github.com/p-nerd)
// Monday, December 27, 2021 | 08:16:36 PM (EST)
