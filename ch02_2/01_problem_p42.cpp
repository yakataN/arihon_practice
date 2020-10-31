#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> lpair;
const ll MOD = 1e9 + 7;
const ll INF = 1e18;
#define REP(i, m, n) for (ll i = (m); i < (ll)(n); i++)
#define rep(i, n) REP(i, 0, n)
#define rrep(i, n) REP(i, 1, n + 1)
#define print(x) cout << (x) << endl;

const int values[6] = {1, 5, 10, 50, 100, 500};
ll coins[6];
ll a;

int main()
{
    rep(i, 6) cin >> coins[i];
    cin >> a;

    ll ans = 0;
    for (int i = 5; i >= 0; i--)
    {
        ll want = a/values[i];
        ans += min(want, coins[i]);
        a -= values[i] * min(want, coins[i]);
    }
    cout << ans << endl;
}