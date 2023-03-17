#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ullint;
typedef short int sint;
#define endn "\n"
#define umap unordered_map
#define uset unordered_set

ll one_to_n(ll n)
{
    if (n == 0)
        return 0;
    ll not_divi;
    if (n % 3 == 0)
    {
        not_divi = n / 3;
    }
    else
    {
        not_divi = (n / 3) + 1;
    }
    return n - not_divi;
}

void test()
{
    ll a, b;
    cin >> a >> b;
    cout << one_to_n(b) - one_to_n(a - 1) << endn;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    int i = 1;
    while (t--)
    {
        cout << "Case " << i << ": ";
        i++;
        test();
    }
}
// Solved By: shh26b
// Monday, July 19, 2021 | 11:37:56 AM (+06)
