#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using ull = unsigned long long;
using vi = vector<int>;
using vvi = vector<vi>;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  vi c(n);
  vvi a(n);
  rep(i,n) {
    cin >> c[i];
    a[i].resize(c[i]);
    rep(j,c[i]) cin >> a[i][j];
  }
  int x;
  cin >> x;

  vector<P> pair;
  rep(i,n) {
    rep(j,c[i]) {
      if(a[i][j] == x) {
        pair.push_back({c[i], i+1});
      }
    }
  }

  sort(pair.begin(), pair.end());
  pair.push_back({38,101});

  int cnt = 0;
  vi ans;
  if(pair.size() == 1) {
    cout << 0 << endl;
    cout << endl;
    return 0;
  }
  
  cnt++;
  ans.push_back(pair[0].second);
  for(size_t i=0; i < pair.size()-1; i++) {
    if(pair[i].first == pair[i+1].first) {
      ans.push_back(pair[i+1].second);
      cnt++;
    } else {
      break;
    }
  }

  cout << cnt << endl;
  rep(i,ans.size()) cout << ans[i] << ' ';
  cout << endl;
  return 0;
}