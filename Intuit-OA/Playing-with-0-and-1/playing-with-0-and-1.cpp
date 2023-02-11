#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll MOD = 998244353;
int main()
{
    ll n;
    cin >> n;
    char arr[n];
    vector<int> brr;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    char I;
    cin >> I;
    for (ll i = 0; i < n; i++)
    {
        if (arr[i] == I)
        {
            brr.push_back(i);
        }
    }
    int mean = brr.size() / 2;
    ll ans = 0;
    for (ll i = 0; i < brr.size(); i++)
    {
        ans += abs(brr[i] - brr[mean]) - abs(mean - i);
    }
    cout << ans << endl;
    return 0;
}