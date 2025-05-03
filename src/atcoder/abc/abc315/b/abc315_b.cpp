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
  int m;
  cin >> m;
  vi d(m);
  int sum = 0;
  rep(i,m) {
    cin >> d[i];
    sum += d[i];
  }

  int mid = (sum + 1) / 2;

  rep(i,m) {
    if(!((mid - d[i]) <= 0)) {
      mid -= d[i];
    } else {
      cout << i+1 << ' ' << mid << endl;
      return 0;
    }
  }
  return 0;
}