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
  int n, m, p;
  cin >> n >> m >> p;

  n -= m;
  int ans = 0;
  while (n >= 0) {
    n -= p;
    ans++;
  }
  
  cout << ans << endl;
  return 0;
}