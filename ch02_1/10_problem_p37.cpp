#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9 + 7;
const ll INF = 1e18;
#define REP(i,m,n) for(ll i = (m); i < (n); i++)
#define rep(i,n) REP(i, 0, n)
#define rrep(i,n) REP(i,1,n+1)

typedef pair<int, int> P;

const int max_n = 100;
const int max_m = 100;
char maze[max_n][max_m];

int n,m;

void bfs()
{
  P start;
  P goal;
  rep(i,n) rep(j,m)
  {
    if (maze[i][j]=='S')
    {
      start = make_pair(i, j);
    }
    if (maze[i][j]=='G')
    {
      goal = make_pair(i,j);
    }
  }

  int distance[n][m];
  rep(i,n) rep(j,m) distance[i][j]=-1;
  distance[start.first][start.second] = 0;
  int dx[4] = {-1, 0, 1, 0};
  int dy[4] = {0, -1, 0, 1};

  queue<P> que;
  que.push(start);
  while(!que.empty())
  {
    P p = que.front();que.pop();
    int x = p.first;
    int y = p.second;
    rep(i,4)
    {
      int nx = p.first + dx[i];
      int ny = p.second + dy[i];
      if (0 <= nx && nx < n && 0 <= ny && ny < m && maze[nx][ny]!='#' && distance[nx][ny] == -1)
      {
        distance[nx][ny] = distance[x][y] + 1;
        que.push(make_pair(nx, ny));
      }
    }
  }
  cout << distance[goal.first][goal.second] << endl;
  return;
}

int main()
{
  cin >> n >> m;
  rep(i,n) rep(j,m) cin >> maze[i][j];

  bfs();
}

