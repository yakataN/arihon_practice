#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> lpair;
const ll MOD = 1e9 + 7;
const ll INF = 1e18;
#define REP(i,m,n) for(ll i = (m); i < (ll)(n); i++)
#define rep(i,n) REP(i, 0, n)
#define rrep(i,n) REP(i,1,n+1)
#define print(x) cout << (x) << endl;
typedef pair<int, int> P;

int N;
const int MAX_N = 101010;
P tasks[MAX_N];

int main()
{
  cin >> N;
  rep(i,N)
  {
    ll s,t;
    cin >> s >> t;
    tasks[i] = make_pair(t,s);
  }

  sort(tasks, tasks+N);
  ll nt = -1;
  int ans = 0;
  rep(i,N)
  {
    if (nt < tasks[i].second)
    {
      nt = tasks[i].first;
      ans++;
    }
  }
  cout << ans << endl;
}