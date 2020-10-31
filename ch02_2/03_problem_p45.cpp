#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> lpair;
const ll MOD = 1e9 + 7;
const ll INF = 1e18;
#define REP(i,m,n) for(ll i = (m); i < (ll)(n); i++)
#define rep(i,n) REP(i, 0, n)
#define rrep(i,n) REP(i,1,n+1)
#define revrep(i,n) for(ll i=(n-1);i>=0;i--)

const int MAX_N = 2010;
int N;
string S;

int main()
{
  cin >> N >> S;
  string ans;

  rep(i,N)
  {
    // string rS="";
    string rS;
    revrep(j,S.size()) rS.push_back(S[j]);
    if (S <= rS)
    {
      ans.push_back(S[0]);
      S.erase(S.begin());
    }
    else
    {
      ans.push_back(rS[0]);
      S.erase(--S.end());
    }
  }
  rep(i,N) cout << ans[i];
  cout << endl;



}