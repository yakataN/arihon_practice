#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> lpair;
const ll MOD = 1e9 + 7;
const ll INF = 1e18;
#define REP(i, m, n) for (ll i = (m); i < (ll)(n); i++)
#define rep(i, n) REP(i, 0, n)
#define rrep(i, n) REP(i, 1, n + 1)

int main()
{
  int n, r;
  cin >> n >> r;
  vector<int> x(n);
  rep(i, n) cin >> x[i];
  sort(x.begin(), x.end());

  int ans = 0;
  int i = 0;
  if (n == 1)
  {
    cout << 1 << endl;
  }
  else
  {
    while (i < n)
    {
      auto itr = upper_bound(x.begin(), x.end(), x[i] + r);
      itr--;
      i = abs(distance(x.begin(), itr));
      ans++;
      auto iitr = upper_bound(x.begin(), x.end(), x[i] + r);
      i = abs(distance(x.begin(), iitr));
    }
  }
  cout << ans << endl;
}