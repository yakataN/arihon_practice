#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9 + 7;
const ll INF = 1e18;
#define REP(i,m,n) for(ll i = (m); i < (n); i++)
#define rep(i,n) REP(i, 0, n)
#define rrep(i,n) REP(i,1,n+1)

const int MAX_N = 110;
const int MAX_M = 110;
char maze[MAX_N][MAX_M];
int n, m;

void dfs(int nx, int ny)
{
  if (maze[nx][ny]=='*') return;
  maze[nx][ny] = '*';
  REP(dx, -1, 2) REP(dy, -1, 2)
  {
    if (0 <= nx+dx && nx+dx < n && 0 <= ny+dy && ny+dy < m)
    dfs(nx+dx, nx+dy);
  }
}

int main()
{
  cin >> n >> m;
  rep(i,n) rep(j,m) cin >> maze[i][j];
  int ans = 0;
  rep(i, n) rep(j,m)
  {
    if (maze[i][j]=='W')
    {
      ans++;
      dfs(i, j);
    }
  }
  cout << ans << endl;
}

