#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> lpair;
const ll MOD = 1e9 + 7;
const ll INF = 1e18;
#define REP(i,m,n) for(ll i = (m); i < (n); i++)
#define rep(i,n) REP(i, 0, n)
#define rrep(i,n) REP(i,1,n+1)

// void print(const std::vector<int>& v)
// {
//   std::for_each(v.begin(), v.end(), [](int x) {
//     std::cout << x << " ";
//   });
//   std::cout << std::endl;
// }

int main ()
{
  // 昇順にソート済みの入力
  std::vector<int> v = {1, 2, 3, 4};

  do {
    // print(v);
    for (auto itr = v.begin();itr!=v.end();itr++)
    {
      cout << *itr << " ";
    }
    cout << endl;
  } while (std::next_permutation(v.begin(), v.end()));
}