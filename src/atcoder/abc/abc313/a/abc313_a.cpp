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
  vector<int> a(n);
  rep(i, n) {
    cin >> a[i];
  }

  int ans = -1;
  for(int i = 1; i < n-1; i++) {
    ans = max(ans, a[i] - a[0]);
  }

  if(ans < 0) {
    cout << 0 << endl;
  }
  else if(ans == 0) {
    cout << 1 << endl;
  }
  else {
    cout << ans + 1 << endl;
  }
  return 0;
}