#include <bits/stdc++.h>
using namespace std;

typedef long long int llint;
typedef unsigned long long int ullint;
typedef short int sint;
#define endn "\n"
#define umap unordered_map
#define uset unordered_set
#define pb push_back
template<typename tem>
void print_vector(vector<tem> &vec) {
for (auto &ele : vec) cout<<ele<<" ";
cout << "\n";}

void test() {
    int n;
    cin >> n;
    map<int, pair<int, int>> a;
    int tmp;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        a[tmp].first++;
        a[tmp].second = i;
    }
    for (auto &v : a) {
        if (v.second.first == 1) {
            cout << v.second.second+1 << endn;
            return;
        }
    }
    cout << -1 << endn;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        test();
    }
}
// Solved By: p-nerd
// Monday, July 26, 2021 | 02:15:49 PM (+06)
