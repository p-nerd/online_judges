#include <bits/stdc++.h>
using namespace std;

#define endn '\n'
#define umap unordered_map

void test_case()
{
    int n, i, j;
    cin >> n;
    vector<int> a(n);
    umap<int, int> am;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        am[a[i]]++;
    }

    // sort(a.begin(), a.end());

    int mn = *min_element(a.begin(), a.end());

    // print(a);

    int half_n = n / 2;

    for (i = 0, j = 0; j < half_n && i < n; i++)
    {
        if (mn != a[i])
        {
            cout << a[i] << " " << mn << endn;
            j++;
        }
    }

    // for (int i = 1; i <= half_n; i++) {
    //     cout << a[i] << " " << a[0] << endn;
    // }

    // for (i = 0; i < n && half_n > 0; i++) {
    //     for (j = i + 1; j < n && half_n > 0; j++) {
    //         if (a[j] != a[i] && am[a[j] % a[i]] == 0) {
    //             half_n--;
    //             cout << a[j] << " " << a[i] << endn;
    //         }
    //     }
    // }
    // cout << endn;

    // O(n log n)
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        test_case();
    }

    return 0;
}
// Solved by: Shihab Mahamud (github.com/p-nerd)
// Sunday, December 05, 2021 | 09:48:09 AM (+06)
// Accepted: 10:52:32 AM (+06)
