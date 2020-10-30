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

const int max_n = 110;
const int max_w = 10010;
int N, W;
// dp[i][j]:= i番目まで見て、残りのweightがjある時の価値の最大
int dp[max_n][max_w];
int w[max_n], v[max_n];

int rec(int i, int j)
{
  if (dp[i][j] >= 0)
  {
    return dp[i][j];
  }
  int res;

  if (i==N)
  {
    // 使い切ったら0を返してStopIteration
    res = 0;
  }
  else if (j < w[i])
  {
    // 使わない
    res = rec(i + 1, j);
  }
  else
  {
    // 使うかもしれない
    res = max(rec(i + 1, j), rec(i + 1, j - w[i]) + v[i]);
  }

  return dp[i][j] = res;
}

int main()
{
  cin >> N >> W;
  rep(i,N) cin >> w[i] >> v[i];

  memset(dp, -1, sizeof(dp));
  cout << rec(0, W) << endl;
}