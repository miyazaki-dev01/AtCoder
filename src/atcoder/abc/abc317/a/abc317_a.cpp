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
  int n, h, x;
  cin >> n >> h >> x;
  vi p(n);
  rep(i,n) cin >> p[i];

  rep(i,n) {
    if(h+p[i] >= x) {
      cout << i+1 << endl;
      return 0;
    }
  }
  return 0;
}