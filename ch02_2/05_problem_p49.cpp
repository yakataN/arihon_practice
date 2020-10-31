#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> lpair;
const ll MOD = 1e9 + 7;
const ll INF = 1e18;
#define REP(i,m,n) for(ll i = (m); i < (ll)(n); i++)
#define rep(i,n) REP(i, 0, n)
#define rrep(i,n) REP(i,1,n+1)
int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    priority_queue<int, vector<int>, greater<int>> que;
    int n;
    cin >> n;
    rep(i,n)
    {
      int l;cin>>l;
      que.push(l);
    }
    ll cost = 0;

    while(!(que.size()==1))
    {
      int l1 = que.top();que.pop();
      int l2 = que.top();que.pop();
      int l3 = l1 + l2;
      cost += l3;
      que.push(l3);
    }
    cout << cost << endl;
}