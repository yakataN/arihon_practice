#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9 + 7;
const ll INF = 1e18;
#define REP(i,m,n) for(ll i = (m); i < (n); i++)
#define rep(i,n) REP(i, 0, n)
#define rrep(i,n) REP(i,1,n+1)

int main()
{
  queue<int> que;
  que.push(1);
  que.push(2);
  que.push(3);
  printf("%d\n", que.front());
  que.pop();
  printf("%d\n", que.front());
  que.pop();
  printf("%d\n", que.front());
  que.pop();
}