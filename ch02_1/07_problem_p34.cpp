#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9 + 7;
const ll INF = 1e18;
#define REP(i,m,n) for(ll i = (m); i < (n); i++)
#define rep(i,n) REP(i, 0, n)
#define rrep(i,n) REP(i,1,n+1)

const int MAX_N = 20;
int a[MAX_N];
int n,k;

bool dfs(int i, int sum)
{
  if (i==n) return sum == k;
  return dfs(i+1, sum) || dfs(i+1, sum+a[i]);
}

int main()
{
  cin >> n >> k;
  rep(i,n) cin >> a[i];
  if (dfs(0,0)) cout << "Yes" << endl;
  else cout << "No" << endl;
}