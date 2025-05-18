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

  vector<vector<bool>> s(101, vector<bool>(101, false));
  rep(i,n) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    for(int i = a; i < b; i++) {
      for(int j = c; j < d; j++) {
        s[i][j] = true;
      }
    }
  }

  int ans = 0;
  rep(i,101) {
    rep(j,101) {
      if(s[i][j]) ans++;
    }
  }

  cout << ans << endl;
  return 0;
}