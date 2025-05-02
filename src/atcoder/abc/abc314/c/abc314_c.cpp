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
  int n, m;
  cin >> n >> m;
  string s;
  cin >> s;
  vi c(n);
  rep(i,n) {
    cin >> c[i];
    c[i]--;
  }

  vector<char> rec(m, '-');
  vector<bool> flg1(n, false);
  vector<bool> flg2(n, true);

  // 各色の右端を記録
  rep(i,n) {
    if(rec[c[i]] == '-') {
      rec[c[i]] = s[i];
      flg1[i] = true;
      flg2[i] = false;
    }
  }

  rep(i,n) {
    if(flg1[i] == false) {
      char ca = rec[c[i]];
      rec[c[i]] = s[i];
      s[i] = ca;
      flg1[i] = true;
    }
  }

  rep(i,n) {
    if(flg2[i] == false) {
      s[i] = rec[c[i]];
    }
  }

  cout << s << endl;
  return 0;
}