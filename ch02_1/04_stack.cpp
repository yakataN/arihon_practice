#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9 + 7;
const ll INF = 1e18;
#define REP(i,m,n) for(ll i = (m); i < (n); i++)
#define rep(i,n) REP(i, 0, n)
#define rrep(i,n) REP(i,1,n+1)

int main() {
  // LIFO
  stack<int> s;
  s.push(1);
  s.push(2);
  s.push(3);
  printf("%d\n", s.top());
  s.pop();
  printf("%d\n", s.top());
  s.pop();
  printf("%d\n", s.top());
  s.pop();
  return 0;
}