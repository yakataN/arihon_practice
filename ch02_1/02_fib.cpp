#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9 + 7;
const ll INF = 1e18;
#define REP(i,m,n) for(ll i = (m); i < (n); i++)
#define rep(i,n) REP(i, 0, n)
#define rrep(i,n) REP(i,1,n+1)

int fib(int x)
{
  if (x==0 || x==1) return 1;
  return fib(x-1) + fib(x-2);
}

int main(){
    rep(i,10)
    {
      cout << fib(i) << endl;
    }
}